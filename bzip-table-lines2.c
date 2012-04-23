#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <bzlib.h>

#include <stdio.h>
#include <stdlib.h>

//#include "micro-bunzip.h"
#include "fcntl.h"
#include "errno.h"

#define BUF_SIZE 4096 * 100 

/**
 * Read a bzip2 file from stdin and print
 * 1) The block size
 * 2) The starting offset (in BITS) of each block of compressed data
 *
 * This does not completely uncompress the data, so does not do CRC checks,
 * (gaining 60% or so speedup), bzip2 --test can be used to verify files
 * first if desired.
 */

int debug() {return 0;}
// the user define process function, is not defined, user has to define it to link
void process_line(const char * buffer); // null terminated



int
bunzip_one(FILE *f) {
  int bzError=0;
  BZFILE *bzf=0;
  char buf[BUF_SIZE]={0};

  bzf = BZ2_bzReadOpen(&bzError, f, 0, 0, NULL, 0);
  if (bzError != BZ_OK) {
    fprintf(stderr, "E: BZ2_bzReadOpen: %d\n", bzError);
    return -1;
  }
  int blockcount =0;
  int linecount  =0;
  int remainder  =0;
  char buffer2[(BUF_SIZE * 2)+1]={0};
  char buffer3[(BUF_SIZE * 2)+1]={0};
  //memset(buf,0,sizeof(buf)); 
  //  memset(buffer3,0,sizeof(buffer3)); 
  //  memset(buffer2,0,sizeof(buffer2)); 
  
  while (bzError == BZ_OK) {
    int nread = BZ2_bzRead(&bzError, bzf, buf, sizeof buf);
    if (bzError == BZ_OK || bzError == BZ_STREAM_END) {
      const char * pc;
      const char * lc;
      lc=pc=buf;
      printf("got count %d\n",nread); // debug
      //      printf("got buffer to check \"%s\"\n",buf); // debug
      
      ///size_t nwritten = fwrite(buf, 1, nread, stdout);
      // now we look for newlines

      while ( 
             (*pc)
             && (pc < (buf + BUF_SIZE))
              )
        {
         
          if ((*pc=='\r') ||(*pc=='\n')) 
            { 
              /*         if (debug()) { */

      /*         printf("Check this remainder:%d\n",remainder); // */
              //              printf("Check this size :%d\n",pc-lc); //
	      
      /*         } */
      /*         // now we first process the remainder from the previous block		 */
              //memset(buffer3,'0',strlen(buffer3)); 
              strncpy(buffer3,lc,(pc-lc));  
              //              printf("new size :%d\n",strlen(buffer3)); //
              ;  

              
      /*         if (debug()) */
      /*   	printf("going to add : \"%s\" to remainder \"%s\" \n",buffer3,buffer2); //  */
              
              if (remainder) { 
      /*   	if (debug()) */
      /*   	  printf("before adding, remainder: \"%s\"\n",buffer2); // debug */
      /*           if (pc-lc>0)    { */
                //int len=strlen(buffer2);
                //                printf("remainder :%d\n",remainder); 
                //                printf("new len :%d\n",len); 
                //                int len2=strlen(buffer3);
                //                printf("new len2 :%d\n",len2); 
                //                int lenc=len+len2;
                strncpy(buffer2 +(remainder ),buffer3,strlen(buffer3)); 
      /*           } */
                //len=strlen(buffer2);
                //                printf("Check this curr :%.*s\n",80,buffer2); 
                //                printf("new len3 :%d %d\n",len, lenc); 

              } else {
                strncpy(buffer2,buffer3,strlen(buffer3)); 
              } 

              //              printf("Check this curr :%.*s\n",40,buffer2); 
              //              printf("Check this curr2 :%.*s\n",40,buffer3); 
              
              /*         if (debug()) */
              //              printf("after adding \"%.*s\"\n",50, buffer2); // debug */
      /*         // process a line */
              // for valgrind.              
              
              process_line(buffer2);

                 remainder=0;
      /*         memset(buffer2,0,sizeof(buffer2)); */
              buffer2[0]=0;
              buffer3[0]=0;
              lc=pc;
              linecount ++; 
              
            } // end of line

          /*     char buf[2]={0,0}; */
          /*     buf[0]=*pc; */
          
          /*   //printf("C(%s,%d:%d)\t",buf,*pc,inccount); // */
          /*   // printf(">%s",buf); // */
          
          pc++; 
          
        }// end of block  
      

       if ((pc-lc) > 0) {
      /*   memset(buffer2,0,sizeof(buffer2)); */
      /*   //        printf("leftover:\"%d\"\n",pc-lc);  */
         strncpy(buffer2,lc,pc-lc ); 

         //printf("Check remainder:\"%s\"\n",buffer2); 
         //         printf("Check remainder :%.*s\n",40,buffer2); 
         remainder=strlen(buffer2); // leftover 
         //         printf("leftover check:\"%d\"\n",remainder); 
       
         //         if (length)             { */
      /*     remainder += length; */
      /*     //printf("leftover check2:\"%d\"\n",length);  */
      /*   } */
       }      

      blockcount++;


    }
  }

  if (bzError != BZ_STREAM_END) {
    fprintf(stderr, "E: bzip error after read: %d\n", bzError);
    return -1;
  }

  BZ2_bzReadClose(&bzError, bzf);
  return 0;
}

int main(int argc, const char ** argv) {
  FILE *f;
  printf("argc %d\n",argc);
  if (argc>=2)      {
    printf("argv %s\n",argv[1]);
  } else   {
    printf("no file\n");
    return 0;
  }
  
  printf("going to open %s\n",argv[1]);	       
  f=fopen(argv[1], "rb");
  if (f == NULL)
    {
      printf("error %d\n",errno);
      perror(argv[1]);
      return 233;
    }
  else     {
    //    printf("file opened with fd %d\n",fd);
  }

  if (bunzip_one(f) == -1)
    return -1;
  
  fclose(f);
  return 0;
}
