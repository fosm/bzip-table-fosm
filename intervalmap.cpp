/*
see :
  http://www.boost.org/doc/libs/1_49_0/libs/icl/doc/html/boost_icl/examples/static_interval.html
  http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1057105750&id=1044780608
*/
#define private public
#define protected public
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
//#include "stl_tree.h"
#include <boost/type_traits/is_same.hpp>
#define BOOST_ICL_USE_STATIC_BOUNDED_INTERVALS
#include <boost/icl/interval_set.hpp>
#include <boost/icl/split_interval_set.hpp>

using namespace std;
using namespace boost;
using namespace boost::icl;

typedef const struct std::_Rb_tree_node<boost::icl::right_open_interval<long long, std::less> >  nodet;

void run_tree(const split_interval_set<long long int> &tree) 
{
  ofstream graph ("graph.dot");
  graph << "digraph G {" << endl;
  for (split_interval_set<long long int>::const_iterator __it = tree.begin(); __it != tree.end(); ++__it)
    {
      nodet * __x = (nodet *) __it._M_node;
      nodet* __L = (nodet*)__x->_M_left;
      nodet* __R = (nodet*)__x->_M_right;
      nodet* __P = (nodet*)__x->_M_parent;
     
      char buffer[256];
      sprintf(buffer,"json/node_%p.js",__x);
      //      cerr << "Check" << buffer << endl;
      ofstream out (buffer);

      if (__x->_M_value_field._lwb) {
        //        graph << "\"" << __x << "\""   << " -> "  << "\"L" << __x->_M_value_field._lwb << "\";" << endl;
      }
      if (__x->_M_value_field._upb) {
        //        graph << "\"" << __x << "\""   << " -> "  << "\"U" << __x->_M_value_field._upb << "\";" << endl;
      }
      if(__L)    {
        graph << "\"" << __x << "\""   << " -> "  << "\"" << __L << "\" [label=\"l\"] ;" << endl;
      }
      
      if (__R)    {
        graph << "\"" << __x << "\""   << " -> "  << "\"" << __R << "\" [label=\"r\"];" << endl;
      }
      //      graph <<  "\"" << __x << "\""   << " -> " << "\"COLOR" << __x->_M_color << "\";"<< endl;

      //////

      out << "node("
          << "\"" << __x << "\""   << ","  
          << "\"" << __x->_M_value_field._lwb << "\","
          << "\"" << __x->_M_value_field._upb << "\","
          << "\"" << __x->_M_color << "\","
          << "\"" << __P << "\", " 
          << "\"" << __L << "\", " 
          << "\"" << __R << "\");" << endl;
    }
  graph << "}" << endl;
}

int main (int argc, char ** argv)
{
  ifstream in(argv[1]);

  split_interval_set<long long int> intervals;
  while(in)
    {
      long long int from;
      long long int to;
      char line[255];
      in.getline(line,sizeof(line));
      string sline(line);
      size_t  pos = sline.find("-", 0); //store the position of the delimiter
      string temp = sline.substr(0, pos);      //get the token
      sline.erase(0, pos + 1);          //erase it from the source 
      
      pos = sline.find("-", 0); //store the position of the delimiter
      temp = sline.substr(0, pos);      //get the token
      sline.erase(0, pos + 1);          //erase it from the source 

      //cout << temp << endl;
        char *endptr;   // ignore  
        from =strtol(temp.c_str(), &endptr, 10);

      pos = sline.find(".", 0); //store the position of the delimiter
      temp = sline.substr(0, pos);      //get the token
      sline.erase(0, pos + 1);          //erase it from the source      

      to =strtol(temp.c_str(), &endptr, 10);


      if (from >0)
        {
          interval<long long int>::type ainterval = interval<long long int>::right_open(from,to);
          //cerr << from << ":"<< to << endl;
          intervals += ainterval;
        }
      
    }

  run_tree(intervals);
  return 0;
}
