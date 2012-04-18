#include <stdio.h>
#include <stdlib.h>

#include "micro-bunzip.h"
#include "fcntl.h"
#include "errno.h"

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

// the user define process function, is not defined, user has to define it to link
void process_line(const char * buffer); // null terminated

int main( int argc, char*argv[] ) {
    bunzip_data *bd;
    int status;
    unsigned long long position; // in bits
	unsigned long long position_bytes; // in bits
	
	char * c;
    char buffer[BUF_SIZE];
int gotcount;
    int totalcount;
    unsigned long long globalcount=0;
    printf("argc %d\n",argc);
    if (argc>=2)      {
      printf("argv %s\n",argv[1]);
    }

printf("going to open %s\n",argv[1]);	       
int fd=open(argv[1], O_RDONLY);

if (fd == -1)
  {
printf("error %d\n",errno);
return 233;
}
 else     {
printf("file opened with fd %d\n",fd);
}

    /* Attempt to open the bzip2 file, if successfull this consumes the
     * entire header and moves us to the start of the first block.
     */
    if ( ! ( status = start_bunzip( &bd, fd, 0, 0 ) ) )
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
	   int remainder  =0;
	   char buffer2[BUF_SIZE * 2]={0};

	   for ( ; ; )
	     {
	       gotcount = read_bunzip( bd, buffer, BUF_SIZE );
	       const char * pc=0;
	       const char * lc=0;
	       lc=pc=buffer;

	       while (pc < buffer + BUF_SIZE) {

		 if (*pc=='\r') {
		   // now we first process the remainder from the previous block		  
		   if (pc-lc>0)    {
		     strncpy(buffer2 +(remainder ),lc,(pc-lc)); //  append the res, strip off the \r 
		   }
		   // process a line
		   process_line(buffer2);
		   remainder=0;
		   //		   buffer2[0]=0;// clear it out.
		   //		   buffer2[1]=0;// clear it out.
		   //		   buffer2[remainder]=0;// clear it out.    	   		   
		   //		   buffer2[remainder+1]=0;// clear it out.    	   		   
		   memset(buffer2,0,sizeof(buffer2));
		   lc=pc;
		   linecount ++;
		 }
		 pc++;
	       }

	       //are there leftovers?
	       pc--;// backup one
	       if (pc-lc > 0) {
		 
		 strncpy(buffer2,lc,pc-lc );
		 int length=strlen(buffer2); // leftover
		 if (length)
		   {
		     remainder += length;
		   }
		 lc=0;
		 pc=0;
	       }
	       //
	       blockcount++;
	       

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
	       //	       totalcount += gotcount;
	       ///	       globalcount += gotcount;

	       printf("linecount %d blockcount %d gotcount %d remainder %d\n",linecount, blockcount, gotcount,remainder);
	     }
	   


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

