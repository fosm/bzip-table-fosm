void process_line(const char * buffer); // null terminated
//#include <iostream>
//using namespace std;
#include "ifileindexer.hpp"

OSMWorld iworld; 
int scanner(OSMWorld & world,const char *s);
long int seen=0;
void process_line(const char * buffer)
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
          //     cerr << "scanner returned ret " << ret << " for \"" << buffer << "\""<< endl;
          cerr << "scanner returned ret " << ret << " for len :" << strlen(buffer) << endl;
        }
      else
        {
          ///      cerr << "scanner returned ret " << ret << " for len :" << strlen(buffer) << endl;
        }
      
      iworld.scannerstatus(ret,buffer);
    }

}
