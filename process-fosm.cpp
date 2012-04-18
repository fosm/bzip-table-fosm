void process_line(const char * buffer); // null terminated
#include <iostream>
using namespace std;

void process_line(const char * buffer)
{
  cerr << "BEGIN " << buffer << "ENDL"<< endl;
}
