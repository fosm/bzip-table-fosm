int process_block(const char * buf)
{
  int linecount  =0;
  int remainder  =0;
  
  char buffer2[(BUF_SIZE * 2)+1]={0};
  char buffer3[(BUF_SIZE * 2)+1]={0};
  char buffer_last[(BUF_SIZE * 2)+1]={0};

  const char * pc;
  const char * lc;
  lc=pc=buf;
  
  while ( 
         (*pc)
         && (pc < (buf + BUF_SIZE))
          )
    {      
      if ((*pc=='\r') ||(*pc=='\n')) 
        { 
          strncpy(buffer3,lc,(pc-lc));  
          if (remainder) { 
            strcpy(buffer2 +(remainder ),buffer3); 
            remainder=0;
          } else {
            strcpy(buffer2,buffer3); 
          } 
          int ok =0;
          //            TODO ://int ok = process_line(buffer2);
          if(ok==0) {
            
          }else {               
            printf("error last buffer \"%s\"\n",buffer_last); // debug */
            printf("current buffer \"%s\"\n",buffer2); // debug */
            return (233);
          }
          strcpy(buffer_last, buffer2);
          memset(buffer2,0,sizeof(buffer2)); 
          memset(buffer3,0,sizeof(buffer3)); 
          lc=pc;
          linecount ++; 
          
        } // end of line
      
      pc++; 
      while ( 
             (*pc)
             && (pc < (buf + BUF_SIZE))
              )
        {
          
          if ((*pc=='\r') ||(*pc=='\n')) 
            { 
              strncpy(buffer3,lc,(pc-lc));  
              if (remainder) { 
                strcpy(buffer2 +(remainder ),buffer3); 
                remainder=0;
              } else {
                strcpy(buffer2,buffer3); 
              } 
              int ok =0;
              //            TODO ://int ok = process_line(buffer2);
              if(ok==0) {
                
              }else {               
                printf("error last buffer \"%s\"\n",buffer_last); // debug */
                printf("current buffer \"%s\"\n",buffer2); // debug */
                return (233);
              }
              strcpy(buffer_last, buffer2);
              memset(buffer2,0,sizeof(buffer2)); 
              memset(buffer3,0,sizeof(buffer3)); 
              lc=pc;
              linecount ++; 
              
            } // end of line
          
          pc++; 
        }// end of block  
      if ((pc-lc) > 0) {
        strncpy(buffer2,lc,pc-lc ); 
        remainder=strlen(buffer2); // leftover 
      }       
    }
}
