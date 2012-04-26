#include <stdio.h>
#include <stdlib.h>

#include "micro-bunzip.h"
#include "fcntl.h"
#include "errno.h"

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

// the user define process function, is not defined, user has to define it to link
int process_line(const char * buffer); // null terminated

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
  else
    {
      printf("no file\n");
      return 0;
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
          char buffer3[BUF_SIZE * 2]={0};

          for ( ; ; )
            {
              gotcount = read_bunzip( bd, buffer, BUF_SIZE );
              const char * pc=0;
              const char * lc=0;
              lc=pc=buffer;

              printf("got count %d\n",gotcount); // debug
              printf("got buffer to check \"%s\"\n",buffer); // debug
              
              int inccount=0;
              while             (
                 (*pc)
                 && (pc < (buffer + BUF_SIZE)) 
                 )
                {

                if ((*pc=='\r') ||(*pc=='\n')) 
                  {
                    
                    //                    printf("Check this last%d\n",lc); //
                    //                    printf("Check this prev%d\n",pc); //
                    //                    printf("Check this curr :%d\n",*pc); //
                    printf("Check this remainder:%d\n",remainder); //
                    printf("Check this size :%d\n",pc-lc); //
                    printf("increment count :%d\n",inccount); //
                    inccount=0;

                    // now we first process the remainder from the previous block		
                    memset(buffer3,0,sizeof(buffer2));
                    strncpy(buffer3,lc,(pc-lc)); 

                    printf("going to add: \"%s\"\n",buffer3); // 

                    if (remainder) {
                      printf("before adding, remainder: \"%s\"\n",buffer2); // debug
                      if (pc-lc>0)    {
                        strncpy(buffer2 +(remainder ),buffer3,strlen(buffer3)); 
                      }
                    }
                    else {
                      strncpy(buffer2,buffer3,strlen(buffer3)); 
                    }

                    printf("after adding \"%s\"\n",buffer2); // debug
                    // process a line
                    process_line(buffer2);
                    remainder=0;
                    memset(buffer2,0,sizeof(buffer2));
                    lc=pc;
                    linecount ++;
                  }

                char buf[2]={0,0};
                buf[0]=*pc;
                //printf("C(%s,%d:%d)\t",buf,*pc,inccount); //
                printf(">%s",buf); //

                pc++;
                inccount++; // the count 
                if(inccount > BUF_SIZE)
                  {
                    printf("To big %d\n",inccount); //
                  }

              } // while there are things in the buffer?

              //are there leftovers?
              //pc--;// backup one

              if ((pc-lc) > 0) {
                memset(buffer2,0,sizeof(buffer2));
                printf("leftover:\"%d\"\n",pc-lc); 
                strncpy(buffer2,lc,pc-lc );
                printf("Check remainder:\"%s\"\n",buffer2); 
                printf("leftover check:\"%d\"\n",strlen(buffer2)); 

                int length=strlen(buffer2); // leftover
                if (length)             {
                  remainder += length;
                  printf("leftover check2:\"%d\"\n",length); 
                }
                lc=0;
                pc=0;
              }

              blockcount++;
	       
              if ( gotcount < 0 ) {
                  status = gotcount;
                  goto bzip_table_finish;
              } else if ( gotcount == 0 ) {
                break;
              } else {
                  //	       totalcount += gotcount;
                  ///	       globalcount += gotcount;

                  printf("linecount %d blockcount %d gotcount %d remainder %d\n",linecount, blockcount, gotcount,remainder);
                }
	   
	    }; // for each buffer block

	}// for the file
    } // status
    
 bzip_table_finish:
  printf("bzip_table_finish\n"); 
  
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
      fprintf( stderr, "ERROR\n%s\n", bunzip_errors[-status] );
    }
    
  return status;
}

