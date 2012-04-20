using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>
const int blocksize=1024;
template <class T> class DataFile {
public:
  vector<T> data;
  ofstream  file;
  ofstream  txtfile;
  string    filename;
  long long total_count;
  
  DataFile(const char * filename)
    :file(string(string ("datafiles/") + string(filename) + ".bin").c_str()),
     txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     total_count(0),
     filename(filename)
  {    
  }           

  ~DataFile()
  {
    int count =data.size();
    write(count);
    file.close();
    txtfile.close();
    cout << "Closing file " << filename << ", wrote " << total_count << endl;
  }

  void flush()
  {
    write(data.size());
  }

  long long count()
  {
    return total_count;
  }

  void write(int count)
  {
    // append the data to the file
    file.write((const char*)&data[0], count * sizeof(T));

    typename vector<T>::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        txtfile << *i << endl;
      }
    data.clear(); // erase the data
  }
  
  void push_back (const T& v){
    total_count++;
    //    cout << "pushing " << filename << " value "<< v << endl;
    data.push_back(v);
    int count =data.size();
    if (count > blocksize)    
      {
        write(count);
      }           
  }
       
};

template <class A, class B>
class Pair :
  public pair<A,B>
{
public:
  Pair(const A & a,B & b)
    : pair<A,B>(a,b)
  {

  }
};

template<class T, class T2>
std::ostream& operator<<(std::ostream &out, const Pair<T,T2> &rhs){
  out << rhs.first << "\t" << rhs.second;
  return out;
}

class TagFileEntry
{
public:
  long int id;
  string key;
  string value;
public:
  TagFileEntry(const long int & id,string & k,string & v ):
    id(id),
    key(k),
    value(v)  {      }
  void write (ostream & os) {
    os << id  << "\t" 
        << key << "\t" 
        << value  <<  endl;
  }

};


class TagFile {
public:
  vector< TagFileEntry > data;
  ofstream  txtfile;
  string    filename;
  long long total_count;
  
  TagFile(const char * filename)
    :txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     total_count(0),
     filename(filename)
  {    
  }           

  ~TagFile()
  {
    int count =data.size();
    write(count);
    txtfile.close();
    cout << "Closing file " << filename << ", wrote " << total_count << endl;
  }

  void flush()
  {
    write(data.size());
  }

  long long count()
  {
    return total_count;
  }

  void write(int count)
  {
    // append the data to the file
    // file.write((const char*)&data[0], count * sizeof(T)); // skip the binary file now
    typename vector< TagFileEntry >::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        i->write (txtfile);
      }
    data.clear(); // erase the data
  }
  
  void push_back (long int pos, string & key, string & val){
    total_count++;
    TagFileEntry v (pos,key,val);
    data.push_back(v);
    int count =data.size();
    if (count > blocksize)   {
      write(count);
    }           
  }
       
};

//class WayNodeFile
class WayNodeFileEntry
{
public:
  long int way;
  long int node;
public:
  WayNodeFileEntry(const long int & way,const long int & node):
    way(way),
    node(node)
  {      }

  void write (ostream & os) {
    os << way  << "\t" 
       << node   << endl;
  }

};


class WayNodeFile {
public:
  vector< WayNodeFileEntry > data;
  ofstream  txtfile;
  ofstream  file;
  string    filename;

  long long total_count;
  
  WayNodeFile(const char * filename)
    :txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     file(string(string ("datafiles/") + string(filename) + ".bin").c_str()),
     total_count(0),
     filename(filename)
  {    
  }           

  ~WayNodeFile()
  {
    int count =data.size();
    write(count);
    data.clear();
    txtfile.close();
    cout << "Closing file " << filename << ", wrote " << total_count << endl;
  }

  void flush()
  {
    write(data.size());
  }

  long long count()
  {
    return total_count;
  }

  void write(int count)
  {
    // append the data to the file
    file.write((const char*)&data[0], count * sizeof(WayNodeFileEntry)); // skip the binary file now
    typename vector< WayNodeFileEntry >::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        i->write (txtfile);
      }
    cout << "wrote " << total_count << endl;
    data.clear(); // erase the data
  }
  
  void push_back (long int & way,long int & node ){
    total_count++;
    WayNodeFileEntry v (way,node);
    data.push_back(v);
    int count =data.size();
    if (count > blocksize)   {
      write(count);
    }           
  }
       
};


class OSMWorld
{
public:
  enum element_type_t{
    t_none=0,
    t_node,
    t_way,
    t_relation,
    ///subobjects
    t_tag,
    t_nd,
    t_member   
  } current_element_type,parent_element_type;

  struct tm current_tm;
  string laststring;
  long int object_count;
  long int current_id;
  long int parent_id;
  long int current_node;
  long int current_way;
  long int current_rel;
  long int current_uid;
  long int current_cs;
  long int current_ver;
  int      current_vis;
  time_t   current_timestamp;
  string   current_tag_key;
  string   current_tag_value;
  istream::pos_type marker; // position in the file

  DataFile<long int> node_positions;
  DataFile<double>   node_lon;
  DataFile<double>   node_lat;
  DataFile<long int> node_ids;
  DataFile<int>      node_vis;
  DataFile<long int> node_uids;
  DataFile<long int> node_cs;
  DataFile<long int> node_ver;
  TagFile            node_tags;
  DataFile<time_t>   node_timestamp;

  DataFile<int>     way_vis;
  DataFile<long int> way_positions;
  DataFile<long int> way_ids;
  DataFile<long int> way_uids;
  DataFile<long int> way_cs;
  DataFile<time_t>   way_timestamp;
  DataFile<long int> way_ver;
  WayNodeFile  way_nodes;
  
  DataFile<int>     rel_vis;
  DataFile<long int> rel_positions;
  DataFile<long int> rel_ids;
  DataFile<long int> rel_uids;
  DataFile<long int> rel_cs;
  DataFile<long int> rel_ver;
  DataFile<time_t>   rel_timestamp; 
  

  
  OSMWorld () :
    current_id(0),
    current_cs(-1),
    current_ver(-1),
    current_uid(-1),
    current_vis(-1),
    current_element_type(t_none),
    parent_element_type(t_none),

    // positions
    node_positions("node_positions"),
    way_positions("way_positions"),
    rel_positions("relation_positions"),

    
    // node lat lon
    node_lon("node_lon"),
    node_lat("node_lat"),

    //ids
    node_ids("node_ids"),
    way_ids("way_ids"),
    rel_ids("relation_ids"),

    // changesets
    node_cs("node_cs"),
    way_cs("way_cs"),
    rel_cs("relation_cs"),

    // version
    node_ver("node_ver"),
    way_ver ("way_ver"),
    rel_ver ("relation_ver"),

    node_timestamp("node_timestamp"),
    way_timestamp ("way_timestamp"),
    rel_timestamp ("rel_timestamp"),

    node_uids("node_uids"),
    way_uids ("way_uids"),
    rel_uids ("rel_uids"),

    //    node_user("node_user"),
    //way_user ("way_user"),
    //    rel_user ("rel_user"),

    node_vis("node_vis"),
    way_vis ("way_vis"),
    rel_vis ("rel_vis"),
    way_nodes ("way_nodes"),

    node_tags("node_tags"), // node tags
    object_count(0)
  {

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
    check_counts_ways();
    set_current_element_type_none ();
    current_element_type=t_way;
  }

  void  set_current_element_type_rel (){
    set_current_element_type_none ();
    current_element_type=t_relation;
  }

  void  set_current_element_type_tag (){
    set_current_element_type_none ();
    current_element_type=t_tag;
  }

  void  set_current_element_type_nd (){
    set_current_element_type_none ();
    current_element_type=t_nd;
  }

  void  set_current_element_type_member (){
    set_current_element_type_none ();
    current_element_type=t_member;
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

  void set_cur_position(int pos)
  {
    // cout << "Current pos is " << pos << endl;
    marker =pos;
  }

  bool check_counts_nodes()
  {
    // make sure they all have the same count
    if (!(
             (node_ids.count() ==  node_positions.count())
          && (node_ids.count() ==  node_cs.count())
          && (node_ids.count() ==  node_ver.count())
          && (node_ids.count() ==  node_lat.count())
          && (node_ids.count() ==  node_lon.count())
          && (node_ids.count() ==  node_uids.count())
          && (node_ids.count() ==  node_vis.count())
          ))
      {
        cerr << "current id " << current_id << endl;
        cerr << "node counts are not aligned"    << endl;
        cerr << "ids :" << node_ids.count()      << endl;
        cerr << "pos :" << node_positions.count()<< endl;
        cerr << "cs  :" << node_cs.count()       << endl;
        cerr << "ver :" << node_ver.count()      << endl;
        cerr << "lat :" << node_lat.count()      << endl;
        cerr << "lon :" << node_lon.count()      << endl;
        cerr <<"uids :" << node_uids.count()     << endl;
        cerr << "vis :" << node_vis.count()      << endl;

        // write the files
        node_positions.flush();
        node_ids.flush();
        node_cs.flush();
        node_ver.flush();

        //exit (233);
        return false;
      }
    return true;
  }

  void check_counts_ways()
  {
    // make sure they all have the same count
    if (!
        (
         (way_positions.count() ==  way_ids.count())
         &&
         (way_ids.count() ==  way_cs.count()
          )
         )
        )      
      {
        cerr << current_id << endl;
        cerr << "way counts not aligned" << endl;
        cerr << way_positions.count() << endl;
        cerr << way_ids.count()       << endl;
        cerr << way_cs.count()       << endl;
        exit (233);
      }
  }

  void check_counts_rels()
  {
    // make sure they all have the same count
    if (!
        (rel_positions.count() ==  rel_ids.count() 
         &&
         rel_ids.count()  ==  rel_cs.count()
         &&
         rel_cs.count() == rel_ver.count()
         )
        )
      {
        cerr << current_id << endl;
        cerr << "rel counts not aligned" << endl;
        cerr << rel_positions.count() << endl;
        cerr << rel_ids.count()       << endl;
        cerr << rel_cs.count()       << endl;
        cerr << rel_ver.count()       << endl;
        exit (233);
      }
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

    // write to disk
    switch (get_current_element_type()) {
    case t_node:
      node_ids.push_back(id);
      current_node=id;
      break;
     
    case    t_way:
      way_ids.push_back(id);
      current_way=id;
      break;
      
    case    t_relation:
      rel_ids.push_back(id);
      current_rel=id;
      break;

    default:
      break;

    };
  }

  void set_current_uid(long int uid) {
    current_uid=uid;
    // write to disk
    switch (get_current_element_type()) {
    case t_node:
      node_uids.push_back(uid);
      break;     
    case t_way:
      way_uids.push_back(uid);
      break;     
    case t_relation:
      rel_uids.push_back(uid);
      break;
    default:
      break;
    };
  }

  void set_current_vis(int vis) {
    //    cerr << " vis " << vis << endl;
    current_vis=vis;
    switch (get_current_element_type()) {
    case t_node:
      node_vis.push_back(vis);
      break;     
    case t_way:
      way_vis.push_back(vis);
      break;     
    case t_relation:
      rel_vis.push_back(vis);
      break;
    default:
      break;
    };
  }

  void set_current_lat(double lat) {
    switch (get_current_element_type()) {
    case t_node:
      node_lat.push_back(lat);
      break;     
    default:
      break;
    };
  }

  void set_current_lon(double lon) {
    switch (get_current_element_type()) {
    case t_node:
      node_lon.push_back(lon);
      break;     
    default:
      break;
    };
  }

  void set_way_node_ref(long int ref) {
    

    switch (get_parent_element_type()) {
    
    case t_way:
      way_nodes.push_back(current_way,ref);

      break;     
      
    default:
      cerr << "bad type:" << get_parent_element_type() << endl;
      break;
    };
  }

  void set_current_user(string user) { // we dont need this, the uid should be ok
    return;
  }

  void set_current_ts_year(int year) {
    //    cerr << "year " << year << endl;
    current_tm.tm_year= year-1900;

  }

  void set_current_ts_month(int month) {
    //    cerr << "month " << month << endl;
    current_tm.tm_mon= month-1;
  }

  void set_current_ts_day(int day) {
    //    cerr << "day " << day << endl;
    current_tm.tm_mday= day;
  }

  void set_current_ts_hour(int hour) {
    //    cerr << "hour " << hour << endl;
    current_tm.tm_hour= hour;
  }

  void set_current_ts_minute(int min) {
    //    cerr << "min " << min << endl;
    current_tm.tm_min=min;
  }

  void set_current_ts_second(int sec) {

    current_tm.tm_sec=sec;

    // check this before
    /*
    cerr << "year "     <<   current_tm.tm_year << endl;
    cerr << "month "    <<   current_tm.tm_mon << endl;
    cerr << "day "      <<   current_tm.tm_mday << endl;
    cerr << "hour "     <<   current_tm.tm_hour << endl;
    cerr << "min "      <<   current_tm.tm_min  << endl;    
    cerr << "sec "      <<   current_tm.tm_sec  << endl;
    */
    time_t ts= mktime ( &current_tm );
    set_current_ts(ts);
  }

  void set_current_ts(time_t ts) {
    current_timestamp=ts;
    switch (get_current_element_type()) {
    case t_node:
      node_timestamp.push_back(ts);
      break;     
    case t_way:
      way_timestamp.push_back(ts);
      break;     
    case t_relation:
      rel_timestamp.push_back(ts);
      break;
    default:
      break;
    };
  }

void set_current_ver(long int id) {
    current_ver=id;
    switch (get_current_element_type()) {
    case t_node:
      node_ver.push_back(id);
      break;      
    case t_way:
      way_ver.push_back(id);
      break;      
    case t_relation:
      rel_ver.push_back(id);
      break;
    default:
      break;
    };
  }


  void set_current_cs(long int cs) {
    current_cs=cs;
    // write to disk
    switch (get_current_element_type()) {
    case t_node:
      node_cs.push_back(cs);
      break;      
    case    t_way:
      way_cs.push_back(cs);
      break;      
    case    t_relation:
      rel_cs.push_back(cs);
      break;

    case t_tag:
    case t_nd:
    case t_member:
      //      cerr << "these types dont have changesets type: " << get_current_element_type() << " cs "<< cs << endl;
      break;

    default:
      //      cerr << "wrong type for cs " << cs << endl;
      break;
    };   
  }

  const char * get_element_type_name(element_type_t t) {
    const char * element_names[] = {
      "none",
      "node",
      "way",
      "relation",
      "tag",
      "nd",
      "member",
    };    
    return element_names[t];
  }

  const char * get_current_element_type_name() {
    return get_element_type_name(get_current_element_type());
  }

  const char * get_parent_element_type_name() {
    return get_element_type_name(get_parent_element_type());
  }


  void set_tag_key(const char * s) {
    /*
      cout << "current id" << current_id << " current type:" 
         << get_current_element_type_name()

         << "parent id" << parent_id 
         << " parent type: "
         << get_parent_element_type_name()
         << " tag key:" << s  << endl;
    */
    current_tag_key =s;
  }

  void set_tag_val(const char * s) {

    current_tag_value =s;
    if(current_id ==0)   {
      cout << "no current id! bailing" << endl;
      exit(0); //
    }

    node_tags.push_back(current_id,current_tag_key,current_tag_value);
  }


  void record_start_position() {
    // now we close the previous object if it is not closed

    switch (get_current_element_type()) {
    case         t_none:
      cout << "This should never happen none" << endl;
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
    case    t_tag :
      break;
    case    t_nd :
      break;
    case    t_member :
      break;
    default:
      cout << "This should never happen other:" << get_current_element_type() << endl;
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

  bool debug_lines() { return false; }
  
  // 
  void scannerstatus(int stat, const char * buffer)
  {
    if (debug_lines())
      {
        cerr << "stat:"<< stat 
             << "buffer \"" << buffer 
             << "\""<< endl;
      }
    if (current_cs==-1)    { set_current_cs(-4);    }
    if (current_uid ==-1)  { set_current_uid(-4);   }
    if (current_ver==-1)   { set_current_ver(-4);   }
    if (current_vis==-1)   { set_current_vis(1);   } // default yes visible
    
    // reset the data
    set_current_element_type_none ();
    // check default values
    current_cs=-1;// set the current value back to 0
    current_ver=-1;// set the current value back to 0
    current_uid=-1;
    current_vis=-1;
    //current_id=0;// set the current value back to 0

    if (!check_counts_nodes())
      {
        cerr << "last   \"" << laststring << "\"" << endl;
        cerr << "buffer \"" << buffer << "\""<< endl;
        exit (123);
      }

    laststring =buffer;
  }

};


