#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
//#include <dir.h>
using namespace std;

class Geography
{
public:
  typedef std::map<int, std::vector<int> > component_map_t;
  typedef std::map<int, std::vector<int> > way_nodes_t;
  typedef std::map<int, std::vector<int> > nodes_ways_t;
  typedef std::map<int, int > way_component_t; // a way can be a member of many components, we need to figure out how and way
  vector<int> node_components;
  vector<double> node_lat;
  vector<double> node_lon;
  vector<int> node_id;
  vector<int> way_id;
  component_map_t component_map;
  way_nodes_t  way_nodes;
  nodes_ways_t node_ways;
  way_component_t way_components;
  int debug;

public:

  Geography();
  int read_way_nodes();
  template <class T> int read_data (const char * filename,vector<T> & vdata);
  template <class T> void emit(vector<T> & data);
  void reverse_components () ;
  void emit_ways_components();
  void read_data();
  void read_components();
  void read_node_lat();
  void read_node_lon();
  void read_node_id();
  void read_way_id();
  void report();

};

