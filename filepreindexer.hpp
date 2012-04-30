using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>

const int blocksize=512;
#include "datafile.hpp"
#include "tagfile.hpp"
#include "wayfile.hpp"

#include <map>
class OSMWorldPreindex
{
public:
  void debug_start_char(char s, int state)
  {
    body << "start:" <<s << "\t" << state << endl;
  }

  void debug_end_string(const char * start,int size)
  {
    //    char buffer[];
    cerr << "got end " << size << endl;
    /*    const char * p=start;
    while (p < (p + size -1))
      {
        body << "debug:" <<*p;
        p++;
      }
    body << endl;
    */
  }

  void debug_node_char(char s, int state)
  {
    body << "node:" <<s << "\t" << state << endl;
  }

  void debug_end_char(char s, int state)
  {
    body << "end:" << s << "\t" << state << endl;
  }
  string currentobject;
  void debug_general_char(const char * type,char s, int state)
  {
    if (s != '\r'){
      currentobject.push_back(s);
    }
    //body << type <<":" << s << "\t" << state << endl;
  }

  void debug_end_line(const string &s)
  {
    body << "end line:" << s << endl;
  }

  enum element_type_t{
    t_none=0,
    t_node,
    t_way,
    t_relation,
  } current_element_type,parent_element_type;

  struct tm current_tm;
  //string laststring;
  long int object_count;
  long int current_id;
  long int parent_id;
  long int current_node;
  int current_inode;
  long int current_way;
  int current_iway;
  long int current_rel;
  int current_irel;
  long int current_uid;
  long int current_cs;
  long int current_ver;
  int      current_vis;
  time_t   current_timestamp;
  string   current_tag_key;
  //const char *   current_tag_key; // lets see if this works
  //string   current_tag_value;
  istream::pos_type marker; // position in the file

  DataFile<istream::pos_type> node_positions;
  DataFile<istream::pos_type> way_positions;
  DataFile<istream::pos_type> rel_positions;

  DataFile<long int> node_ids;
  DataFile<long int> way_ids; 
  DataFile<long int> rel_ids;
 
  /*
  DataFile<double>   node_lon;
  DataFile<double>   node_lat;
  
  DataFile<int>      node_vis;
  DataFile<long int> node_uids;
  DataFile<long int> node_cs;
  DataFile<long int> node_ver;
  TagFile            node_tags;
  DataFile<time_t>   node_timestamp;

  DataFile<int>     way_vis;


  DataFile<long int> way_uids;
  DataFile<long int> way_cs;
  DataFile<time_t>   way_timestamp;
  DataFile<long int> way_ver;
  WayNodeFile  way_nodes;
  
  DataFile<int>     rel_vis;


  DataFile<long int> rel_uids;
  DataFile<long int> rel_cs;
  DataFile<long int> rel_ver;
  DataFile<time_t>   rel_timestamp; 
  typedef std::map<int, int > node_index_t; // node id to node idx
  */
  int scanlines;
  long blockcount;
  ofstream header;
  ofstream footer;
  ofstream body;
  ofstream debug;

  OSMWorldPreindex (const char * dir, long blockcount) :
    blockcount(blockcount),
    current_id(0),
    current_cs(-1),
    current_ver(-1),
    current_uid(-1),
    current_vis(-1),
    current_timestamp(-1),
    current_element_type(t_none),
    parent_element_type(t_none),

    // positions
    node_positions(dir,blockcount,"node_positions"),
    way_positions(dir,blockcount,"way_positions"),
    rel_positions(dir,blockcount,"relation_positions"),

    
    // node lat lon
    //    node_lon("node_lon"),
    //    node_lat("node_lat"),

    //ids
    node_ids(dir,blockcount,"node_ids"),
    way_ids(dir,blockcount,"way_ids"),
    rel_ids(dir,blockcount,"relation_ids"),

    // changesets
    //    node_cs("node_cs"),
    //way_cs("way_cs"),
    //    rel_cs("relation_cs"),

    // version
    //node_ver("node_ver"),
    //way_ver ("way_ver"),
    //rel_ver ("relation_ver"),

    //    node_timestamp("node_timestamp"),
    //    way_timestamp ("way_timestamp"),
    //    rel_timestamp ("rel_timestamp"),

    //    node_uids("node_uids"),
    //    way_uids ("way_uids"),
    // rel_uids ("rel_uids"),

    //    node_user("node_user"),
    //way_user ("way_user"),
    //    rel_user ("rel_user"),

    //    node_vis("node_vis"),
    //    way_vis ("way_vis"),
    //    rel_vis ("rel_vis"),
    //    way_nodes ("way_nodes"),

    //    node_tags("node_tags"), // node tags
    object_count(0),
    scanlines(0)
    
  {
    header.open(string(string(dir) + "header.txt").c_str());
    body.open(string(string(dir) + "body.txt").c_str());
    debug.open(string(string(dir) + "debug.txt").c_str());
    footer.open(string(string(dir) + "footer.txt").c_str());
  }

  element_type_t  get_current_element_type (){
    return current_element_type;
  }

  element_type_t  get_parent_element_type (){
    return parent_element_type;
  }

  void  set_current_element_type_node (){
    set_current_element_type_none ();

    current_element_type=t_node;  
  }

  void  set_current_element_type_way (){
    //    check_counts_ways();
    set_current_element_type_none ();
    current_element_type=t_way;
  }

  void  set_current_element_type_rel (){
    set_current_element_type_none ();
    current_element_type=t_relation;
  }


  void add_node_position(){
    node_positions.push_back(marker);
  }

  void add_way_position(){
    way_positions.push_back(marker);
  }

  void add_rel_position(){
    rel_positions.push_back(marker);
  }

  void set_current_pos(int pos)
  {
    // cout << "Current pos is " << pos << endl;
    marker =pos;
  }


  bool check_counts_nodes()
  {
    return true;
  }
  
  void set_current_id(long int id) {

    if (id == 0) {
      cerr << "there is no id  "  << endl;
      return ; // 
    }

    //    cerr << "Setting current id  " << id << endl;

    switch (current_element_type )
      {
      case t_node :
      case t_way:
      case t_relation:
        parent_id=0;
        break;

      default:
        // we only care about the parent type if we have a subtype
        switch (parent_element_type )
          {
          case t_node :
          case t_way:
          case t_relation:
            cerr << "Setting parent id to " << parent_id << endl;
            parent_id=current_id;
            break;            
          default:
            break;
          };

        break;
      };

    current_id=id;
    int index=0;

    // write to disk
    switch (get_current_element_type()) {
    case t_node:
      node_ids.push_back(id);
      index=node_ids.count();
      //node_index[id]=index; // save the index for referencing
      //      cerr << "node id:" << id  << "idx: "<< index << endl;
      current_node=id;
      current_inode=index;
      break;
     
    case    t_way:
      way_ids.push_back(id);
      index=way_ids.count();
      //      way_index[id]=index; // save the index for referencing
      current_way=id;
      current_iway=index;
      break;
      
    case    t_relation:
      rel_ids.push_back(id);
      index=rel_ids.count();
      //      rel_index[id]=index; // save the index for referencing
      current_rel=id;
      current_irel=index;
      break;

    default:
      break;

    };

  }

  const char * get_element_type_name(element_type_t t) {
    const char * element_names[] = {
      "none",
      "node",
      "way",
      "relation",
    };    
    return element_names[t];
  }

  const char * get_current_element_type_name() {
    return get_element_type_name(get_current_element_type());
  }

  const char * get_parent_element_type_name() {
    return get_element_type_name(get_parent_element_type());
  }

  void record_start_position() {
    // now we close the previous object if it is not closed
    body << "leftover:" << currentobject << endl;
    currentobject.clear();
    switch (get_current_element_type()) {
    case         t_none:
      //      cout << "This should never happen none" << endl;
      break;      
    case t_node:
      add_node_position();            
      break;      
    case    t_way:
      add_way_position();            
      break;      
    case    t_relation:
      add_rel_position();            
      break;

    default:
      //      cout << "This should never happen other:" << get_current_element_type() << endl;
      break;
    };
  }

  void  set_current_element_type_none (){
    switch (current_element_type )
      {
      case t_node :
      case t_way:
      case t_relation:
        parent_element_type=current_element_type;
        break;

      default:
        break;
      };
    //cerr << "set_current_element_type_none" << endl;
    if (get_current_element_type()!=t_none) {
             current_element_type=t_none;
    }
    
    object_count++;
  }

  bool debug_lines() { 
    return false; 
    //return true; 
  }

  void report_finished() {
    body << "finished:" << currentobject << endl;
  }
  // 
  int scannerstatus(int stat, const char * buffer)
  {
    report_finished();

    if (scanlines++ % 10000 ==0)
      {
	cerr << "L"<< scanlines << endl;
      }
    //    if (debug_lines())
      {
        debug << "stat:"<< stat 
             << "buffer \"" << buffer 
             << "\""<< endl;
      }
    // reset the data
    set_current_element_type_none ();
    // check default values

    if (!check_counts_nodes())
      {
	cerr << "error" << endl;
	//        cerr << "last   \"" << laststring << "\"" << endl;
	//        cerr << "buffer \"" << buffer << "\""<< endl;
        return -1;
        //exit (123);
      }

    //    laststring =buffer;
    return 0;
  }

  void finish_current_object()
  {
    body << "finish:" << currentobject << endl;
    currentobject.clear();

    if (debug_lines())
      {
        cerr << "finish current object" << endl;
      }
    
    // reset the data
    set_current_element_type_none ();


    //    if (!check_counts_nodes())
      {
        //        cerr << "last   \"" << laststring << "\"" << endl;
        //exit (123);
      }

  }
  void set_action_modify (){}
  void set_action_delete (){}
  void set_action_create (){}
};


