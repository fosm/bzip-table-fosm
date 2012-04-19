void process_line(const char * buffer); // null terminated
//#include <iostream>
//using namespace std;
#include "fileindexer.hpp"

OSMWorld world; 
int scanner(OSMWorld & world,const char *s);

void process_line(const char * buffer)
{
//  cerr << "BEGIN " << buffer << "ENDL"<< endl;
   int ret= scanner(world,buffer);

   //   if (ret == 10)
   {
     cerr << "scanner returned ret " << ret << " for \"" << buffer << "\""<< endl;
   }
}
