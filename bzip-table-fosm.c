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
	   
	   double lat[2] = {0,0}; //first last
	   double lon[2] = {0,0}; //first last
	   
	   for ( ; ; )
	     {
	       gotcount = read_bunzip( bd, buffer, BUF_SIZE );
	       
	       
	       // now lets extract the lat and the lon, first and last in that block
	       
	       int state=0;
	       //<node id='1571162048' lat='71.5624482' lon='-179.7077975'
	       char matched[25]; // what did we find?
	       int  matchedpos=0; // where
	       int i;
	       for ( i=0; i < BUF_SIZE; i ++)  {
		 //		  printf("%c,%d\n",buffer[i],state);
		 switch(state) {
		 case 0: 
		    matchedpos=0;
		    if (buffer[i] == 'l')    {	  state=1;    };    
		    break;
		  case 1: 
		    if (buffer[i] == 'a')    {      state=2;    }
		    else if (buffer[i] == 'o')    {   state=3;    }// lon
		    else   {   state=0;    }   
		    break;		    
		  case 2: if (buffer[i] == 't')    {	  state=4;   } else   {   state=0;    };   	    break; // lat
		  case 4: if (buffer[i] == '=')    {	  state=6;   } else   {   state=0;    };   	    break; // lat=
		  case 6: if (buffer[i] == '\'')    {	  state=8;   } else   {   state=0;    };   	    break; // lat='   

		  case 3: if (buffer[i] == 'n')    {	  state=20;   } else   {   state=0;    };   	    break; // lon
		  case 20: if (buffer[i] == '=')    {	  state=21;   } else   {   state=0;    };   	    break; // lon=
		  case 21: if (buffer[i] == '\'')    {	  state=22;   } else   {   state=0;    };   	    break; // lon='   

		  case 8 :
		  case 22 : // for both lat an lon
		    switch (buffer[i]) 
		      {
		      case  '0' :
		      case  '1' :
		      case  '2' :
		      case  '3' :
		      case  '4' :
		      case  '5' :
		      case  '6' :
		      case  '7' :
		      case  '8' :
		      case  '9' :
		      case  '.' :
		      case  '-' :
			if(matchedpos<25)    {
			  matched[matchedpos]=buffer[i];
			  //printf("%d",buffer[i]);

			}
			matchedpos++;
			break;
		      case  '\'' :
			matched[matchedpos]=0;
			// got a string
			//printf("lat=%s\n",matched);
			double tmp= atof ( matched );
			if (state ==8)
			  {
			    if (lat[0])
			      {
				lat[1]=tmp;// store the last
			      }else {
			      lat[0]=tmp;// store the first
			    }
			  }
			else {
			  // lon
			  if (lon[0])
			    {
			      lon[1]=tmp;// store the last
			    }else {
			    lon[0]=tmp;// store the first
			  }
			}
			state=0;

			break;
		      default:
			state=0;
			break;
		      }
		    break;; // state stays

		    //		  case 3: if (buffer[i] == 'n')    {	  state=5;   } else   {   state=0;    };   	    break;// lon
		   
		  default :
		    state=0;
		  }
		}
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
	    fprintf( stdout, "%llu\t%llu\t%d\t%llu\t%f\t%f\t%f\t%f\n", position_bytes,position,  totalcount, globalcount, lat[0],lat[1], lon[0],lon[1] );

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

