// the file ifileindexer.hpp was generated from ifileindexer.tt and should not be edited
#include <string.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
class OSMWorld
{
public:

  void set_current_position(int pos); 
   //record_start_position
   void record_start_position(); 
   template <class T> void record_start_position(const T &);
   
   //set_action
   void set_action(); 
   template <class T> void set_action(const T &);
   
   //set_current_cs
   void set_current_cs(); 
   template <class T> void set_current_cs(const T &);
   
   //set_current_element_type_member
   void set_current_element_type_member(); 
   template <class T> void set_current_element_type_member(const T &);
   
   //set_current_element_type_nd
   void set_current_element_type_nd(); 
   template <class T> void set_current_element_type_nd(const T &);
   
   //set_current_element_type_node
   void set_current_element_type_node(); 
   template <class T> void set_current_element_type_node(const T &);
   
   //set_current_element_type_rel
   void set_current_element_type_rel(); 
   template <class T> void set_current_element_type_rel(const T &);
   
   //set_current_element_type_tag
   void set_current_element_type_tag(); 
   template <class T> void set_current_element_type_tag(const T &);
   
   //set_current_element_type_way
   void set_current_element_type_way(); 
   template <class T> void set_current_element_type_way(const T &);
   
   //set_current_id
   void set_current_id(); 
   template <class T> void set_current_id(const T &);
   
   //set_current_lat
   void set_current_lat(); 
   template <class T> void set_current_lat(const T &);
   
   //set_current_lon
   void set_current_lon(); 
   template <class T> void set_current_lon(const T &);
   
   //set_current_ts_year
   void set_current_ts_year(); 
   template <class T> void set_current_ts_year(const T &);
   
   //set_current_ts_month
   void set_current_ts_month(); 
   template <class T> void set_current_ts_month(const T &);
   
   //set_current_ts_day
   void set_current_ts_day(); 
   template <class T> void set_current_ts_day(const T &);
   
   //set_current_ts_hour
   void set_current_ts_hour(); 
   template <class T> void set_current_ts_hour(const T &);
   
   //set_current_ts_minute
   void set_current_ts_minute(); 
   template <class T> void set_current_ts_minute(const T &);
   
   //set_current_ts_second
   void set_current_ts_second(); 
   template <class T> void set_current_ts_second(const T &);
   
   //set_current_uid
   void set_current_uid(); 
   template <class T> void set_current_uid(const T &);
   
   //set_current_user
   void set_current_user(); 
   template <class T> void set_current_user(const T &);
   
   //set_current_ver
   void set_current_ver(); 
   template <class T> void set_current_ver(const T &);
   
   //set_current_vis
   void set_current_vis(); 
   template <class T> void set_current_vis(const T &);
   
   //set_tag_key
   void set_tag_key(); 
   template <class T> void set_tag_key(const T &);
   
   //set_tag_val
   void set_tag_val(); 
   template <class T> void set_tag_val(const T &);
   
   //set_way_node_ref
   void set_way_node_ref(); 
   template <class T> void set_way_node_ref(const T &);
   
   //finish_current_object
   void finish_current_object(); 
   template <class T> void finish_current_object(const T &);
   

   void scannerstatus(int s, char const* v);

};
