// the file ifileindexer_b.cpp was generated from ifileindexer_b.tt and should not be edited
#include "ifileindexer.hpp"
/*
    interface bridge
*/

   
   //record_start_position
   void OSMWorld::record_start_position() {
       cout << "record_start_position" << endl;
}
   
   //set_current_element_type_member
   void OSMWorld::set_current_element_type_member() {
       cout << "set_current_element_type_member" << endl;
}
   
   //set_current_element_type_nd
   void OSMWorld::set_current_element_type_nd() {
       cout << "set_current_element_type_nd" << endl;
}
   
   //set_current_element_type_node
   void OSMWorld::set_current_element_type_node() {
       cout << "set_current_element_type_node" << endl;
}
   
   //set_current_element_type_rel
   void OSMWorld::set_current_element_type_rel() {
       cout << "set_current_element_type_rel" << endl;
}
   
   //set_current_element_type_tag
   void OSMWorld::set_current_element_type_tag() {
       cout << "set_current_element_type_tag" << endl;
}
   
   //set_current_element_type_way
   void OSMWorld::set_current_element_type_way() {
       cout << "set_current_element_type_way" << endl;
}
   


   
    template <> void OSMWorld::set_action<char const*>(char const* const&v) {
        cout << "set_action"<<  v << endl;
}
   
    template <> void OSMWorld::set_current_user<char const*>(char const* const&v) {
        cout << "set_current_user"<<  v << endl;
}
   
    template <> void OSMWorld::set_tag_val<char const*>(char const* const&v) {
        cout << "set_tag_val"<<  v << endl;
}
   
    template <> void OSMWorld::set_tag_key<char const*>(char const* const&v) {
        cout << "set_tag_key"<<  v << endl;
}
   



   
    template <> void OSMWorld::set_current_lat<double>(double const& v) {
cout << "set_current_lat"<<  v << endl;
}
   
    template <> void OSMWorld::set_current_lon<double>(double const& v) {
cout << "set_current_lon"<<  v << endl;
}
   


   
     template <> void OSMWorld::set_current_ts_year<int>( int const & v) {
cout << "set_current_ts_year"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_ts_month<int>( int const & v) {
cout << "set_current_ts_month"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_ts_day<int>( int const & v) {
cout << "set_current_ts_day"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_ts_hour<int>( int const & v) {
cout << "set_current_ts_hour"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_ts_minute<int>( int const & v) {
cout << "set_current_ts_minute"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_ts_second<int>( int const & v) {
cout << "set_current_ts_second"<<  v << endl;
}
   
     template <> void OSMWorld::set_current_vis<int>( int const & v) {
cout << "set_current_vis"<<  v << endl;
}
   



   
   //set_current_cs
    template <> void OSMWorld::set_current_cs<long>(const long & v) {
        cout << "set_current_cs"<<  v << endl;
}
   
   //set_current_id
    template <> void OSMWorld::set_current_id<long>(const long & v) {
        cout << "set_current_id"<<  v << endl;
}
   
   //set_current_lat
    template <> void OSMWorld::set_current_lat<long>(const long & v) {
        cout << "set_current_lat"<<  v << endl;
}
   
   //set_current_lon
    template <> void OSMWorld::set_current_lon<long>(const long & v) {
        cout << "set_current_lon"<<  v << endl;
}
   
   //set_tag_key
    template <> void OSMWorld::set_tag_key<long>(const long & v) {
        cout << "set_tag_key"<<  v << endl;
}
   
   //set_tag_val
    template <> void OSMWorld::set_tag_val<long>(const long & v) {
        cout << "set_tag_val"<<  v << endl;
}
   
   //set_way_node_ref
    template <> void OSMWorld::set_way_node_ref<long>(const long & v) {
        cout << "set_way_node_ref"<<  v << endl;
}
   
   //set_current_ver
    template <> void OSMWorld::set_current_ver<long>(const long & v) {
        cout << "set_current_ver"<<  v << endl;
}
   
   //set_current_uid
    template <> void OSMWorld::set_current_uid<long>(const long & v) {
        cout << "set_current_uid"<<  v << endl;
}
   

