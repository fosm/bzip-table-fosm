#include <stdio.h>
#include <stdlib.h>

#include "micro-bunzip.h"

#define BUF_SIZE 819200

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
	   int blockcount =0;
	   int linecount  =0;
	   for ( ; ; )
	     {
	       gotcount = read_bunzip( bd, buffer, BUF_SIZE );
	       const char * pc=0;
	       const char * lc=0;
	       char buffer2[BUF_SIZE];
	       lc=pc=buffer;
	       while (pc < buffer + BUF_SIZE) {
		 if (*pc=='\n') {
		   //		   strncpy(buffer2,lc,pc-lc);
		   //		   printf("test %s",buffer2);
		   lc=pc+1;
		   linecount ++;
		 }
		 pc++;
	       }
	       //are there leftovers?
	       pc--;// backup one
	       if (pc-lc) {
		 strncpy(buffer2,lc,pc-lc );
		 if (strlen(buffer2))
		   {
		     printf("test2 %d <%s>\n",strlen(buffer2),buffer2);
		   }
	       }
	       //
	       blockcount++;
	       
	       printf("linecount %d blockcount %d\n",linecount, blockcount);
	    }; // for each buffer block
	   

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

