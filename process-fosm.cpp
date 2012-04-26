int process_line(const char * buffer); // null terminated
//#include <iostream>
//using namespace std;
#include "ifileindexer.hpp"

OSMWorld iworld; 
int scanner(OSMWorld & world,const char *s);
long int seen=0;
int process_line(const char * buffer)
{
  //  cerr << "BEGIN " << buffer << "ENDL"<< endl;
  iworld.set_current_pos(seen);
  size_t len=strlen(buffer);
  seen +=  len;
  if (len>2)
    {
      int ret= scanner(iworld,buffer);
   
      if (ret != 1)
        {
          
          cerr << "scanner returned ret " << ret << " for len :" << strlen(buffer) << endl;

        }
      else
        {
          //cerr << "OK scanner returned ret " << ret << " for len :" << strlen(buffer) << endl;
        }
      
      if (iworld.scannerstatus(ret,buffer)!=0)
        {
          cerr << "ERROR: status returned ret " << ret << " for \"" << buffer << "\""<< endl;
          //          exit(233);
          return -1;
        }
    }
  return 0;
}
