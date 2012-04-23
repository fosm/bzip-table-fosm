#include <stdio.h>
#include <stdlib.h>

#include "micro-bunzip.h"

#define BUF_SIZE 8192
/**
 * Read a bzip2 file from stdin and print
 * 1) The block size
 * 2) The starting offset (in BITS) of each block of compressed data
 *
 * This does not completely uncompress the data, so does not do CRC checks,
 * (gaining 60% or so speedup), bzip2 --test can be used to verify files
 * first if desired.
 */
int main( int argc, char*argv[] )
{
    bunzip_data *bd;
    int status;
    unsigned long long position; // in bits
    unsigned long long position_bytes; // in bits

    char * c;
    char buffer[BUF_SIZE];
    int gotcount;
    int totalcount;
    unsigned long long globalcount=0;


    /* Attempt to open the bzip2 file, if successfull this consumes the
     * entire header and moves us to the start of the first block.
     */
    if ( ! ( status = start_bunzip( &bd, 0, 0, 0 ) ) )
    {
        for ( ; ; )
        {
            /* Determine position */
	   position = bd->position;
	   position = position - bd->inbufCount + bd->inbufPos;
	   position = position * 8 - bd->inbufBitCount;
	   position_bytes =position/8;
	   /* Read one block */
	   status = get_next_block( bd );
	   
	   /* Reset the total size counter for each block */
	   totalcount = 0;
	   
	   /* Non-zero return value indicates an error, break out */
	   if ( status ) break;
	   
	   /* This is really the only other thing init_block does, hrmm */
	   bd->writeCRC = 0xffffffffUL;
	   
	   /* Decompress the block and throw away, but keep track of the
	      total size of the decompressed data */  
	   
	   for ( ; ; )
	     {
	       gotcount = read_bunzip( bd, buffer, BUF_SIZE );
               
              printf("got count %d\n",gotcount); // debug
              printf("got buffer to check \"%s\"\n",buffer); // debug

	       //for ( i=0; i < BUF_SIZE; i ++)  {
               
               if ( gotcount < 0 )
                 {
                   status = gotcount;
                   goto bzip_table_finish;
                 }
               else if ( gotcount == 0 )
                 {
                   break;
                 }
               else
                 {
                   totalcount += gotcount;
                   globalcount += gotcount;
                 }
               
               
	    }; // for each buffer block

	    /* Print the position of the first bit in the block header, the sum of bits, the total count of chars in that block and the global count so far*/
	    fprintf( stdout, "%llu\t%llu\t%d\t%llu\n", position_bytes,position,  totalcount, globalcount );

	}// for the file
    } // status
    
 bzip_table_finish:
    
    /* If we reached the last block, do a CRC check */
    if ( status == RETVAL_LAST_BLOCK && bd->headerCRC == bd->totalCRC )
      {
        status = RETVAL_OK;
      }
    
    /* Free decompression buffer and bzip_data */
    if ( bd->dbuf ) free( bd->dbuf );
    free( bd );
    
    /* Print error if required */
    if ( status )
      {
        fprintf( stderr, "\n%s\n", bunzip_errors[-status] );
      }
    
    return status;
}

