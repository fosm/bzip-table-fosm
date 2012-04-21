void process_line(const char * buffer); // null terminated
//#include <iostream>
//using namespace std;
#include "ifileindexer.hpp"

OSMWorld iworld; 
int scanner(OSMWorld & world,const char *s);

void process_line(const char * buffer)
{
//  cerr << "BEGIN " << buffer << "ENDL"<< endl;
   int ret= scanner(iworld,buffer);
   
   if (ret != 1)
   {
     cerr << "scanner returned ret " << ret << " for \"" << buffer << "\""<< endl;
   }
   iworld.scannerstatus(ret,buffer);
}
