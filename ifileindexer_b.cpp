// the file ifileindexer_b.cpp was generated from ifileindexer_b.tt and should not be edited
#include "ifileindexer.hpp"
/*
    interface bridge
*/

   
   //record_start_position
   void OSMWorld::record_start_position() {}
   
   //set_current_element_type_member
   void OSMWorld::set_current_element_type_member() {}
   
   //set_current_element_type_nd
   void OSMWorld::set_current_element_type_nd() {}
   
   //set_current_element_type_node
   void OSMWorld::set_current_element_type_node() {}
   
   //set_current_element_type_rel
   void OSMWorld::set_current_element_type_rel() {}
   
   //set_current_element_type_tag
   void OSMWorld::set_current_element_type_tag() {}
   
   //set_current_element_type_way
   void OSMWorld::set_current_element_type_way() {}
   


   
    template <> void OSMWorld::set_action<char const*>(char const* const&) {}
   
    template <> void OSMWorld::set_current_user<char const*>(char const* const&) {}
   
    template <> void OSMWorld::set_tag_val<char const*>(char const* const&) {}
   
    template <> void OSMWorld::set_tag_key<char const*>(char const* const&) {}
   



   
    template <> void OSMWorld::set_current_lat<double>(double const&) {}
   
    template <> void OSMWorld::set_current_lon<double>(double const&) {}
   


   
     template <> void OSMWorld::set_current_ts_year<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_ts_month<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_ts_day<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_ts_hour<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_ts_minute<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_ts_second<int>( int const & v) {}
   
     template <> void OSMWorld::set_current_vis<int>( int const & v) {}
   



   
   //set_current_cs
   template <> void OSMWorld::set_current_cs<long>(const long & l) {}
   
   //set_current_id
   template <> void OSMWorld::set_current_id<long>(const long & l) {}
   
   //set_current_lat
   template <> void OSMWorld::set_current_lat<long>(const long & l) {}
   
   //set_current_lon
   template <> void OSMWorld::set_current_lon<long>(const long & l) {}
   
   //set_tag_key
   template <> void OSMWorld::set_tag_key<long>(const long & l) {}
   
   //set_tag_val
   template <> void OSMWorld::set_tag_val<long>(const long & l) {}
   
   //set_way_node_ref
   template <> void OSMWorld::set_way_node_ref<long>(const long & l) {}
   
   //set_current_ver
   template <> void OSMWorld::set_current_ver<long>(const long & l) {}
   
   //set_current_uid
   template <> void OSMWorld::set_current_uid<long>(const long & l) {}
   

