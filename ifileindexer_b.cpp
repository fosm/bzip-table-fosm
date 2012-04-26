// the file ifileindexer_b.cpp was generated from ifileindexer_b.tt and should not be edited
#include "ifileindexer.hpp"
/*
    interface bridge
*/
#include "fileindexer.hpp"

OSMWorldImp world;

   
   //record_start_position
   void OSMWorld::record_start_position() {
//       cout << "record_start_position:" << endl;
       world.record_start_position();
}
   
   //set_current_element_type_member
   void OSMWorld::set_current_element_type_member() {
//       cout << "set_current_element_type_member:" << endl;
       world.set_current_element_type_member();
}
   
   //set_current_element_type_nd
   void OSMWorld::set_current_element_type_nd() {
//       cout << "set_current_element_type_nd:" << endl;
       world.set_current_element_type_nd();
}
   
   //set_current_element_type_node
   void OSMWorld::set_current_element_type_node() {
//       cout << "set_current_element_type_node:" << endl;
       world.set_current_element_type_node();
}
   
   //set_current_element_type_rel
   void OSMWorld::set_current_element_type_rel() {
//       cout << "set_current_element_type_rel:" << endl;
       world.set_current_element_type_rel();
}
   
   //set_current_element_type_tag
   void OSMWorld::set_current_element_type_tag() {
//       cout << "set_current_element_type_tag:" << endl;
       world.set_current_element_type_tag();
}
   
   //set_current_element_type_way
   void OSMWorld::set_current_element_type_way() {
//       cout << "set_current_element_type_way:" << endl;
       world.set_current_element_type_way();
}
   
   //finish_current_object
   void OSMWorld::finish_current_object() {
//       cout << "finish_current_object:" << endl;
       world.finish_current_object();
}
   


   
    template <> void OSMWorld::set_action<char const*>(char const* const&v) {
//        cout << "set_action"<<  v << endl;
       world.set_action(v);
}
   
    template <> void OSMWorld::set_current_user<char const*>(char const* const&v) {
//        cout << "set_current_user"<<  v << endl;
       world.set_current_user(v);
}
   
    template <> void OSMWorld::set_tag_val<char const*>(char const* const&v) {
//        cout << "set_tag_val"<<  v << endl;
       world.set_tag_val(v);
}
   
    template <> void OSMWorld::set_tag_key<char const*>(char const* const&v) {
//        cout << "set_tag_key"<<  v << endl;
       world.set_tag_key(v);
}
   



   
    template <> void OSMWorld::set_current_lat<double>(double const& v) {
// cout << "set_current_lat"<<  v << endl;
       world.set_current_lat(v);
}
   
    template <> void OSMWorld::set_current_lon<double>(double const& v) {
// cout << "set_current_lon"<<  v << endl;
       world.set_current_lon(v);
}
   


   
     template <> void OSMWorld::set_current_ts_year<int>( int const & v) {
//         cout << "set_current_ts_year"<<  v << endl;
       world.set_current_ts_year(v);
}
   
     template <> void OSMWorld::set_current_ts_month<int>( int const & v) {
//         cout << "set_current_ts_month"<<  v << endl;
       world.set_current_ts_month(v);
}
   
     template <> void OSMWorld::set_current_ts_day<int>( int const & v) {
//         cout << "set_current_ts_day"<<  v << endl;
       world.set_current_ts_day(v);
}
   
     template <> void OSMWorld::set_current_ts_hour<int>( int const & v) {
//         cout << "set_current_ts_hour"<<  v << endl;
       world.set_current_ts_hour(v);
}
   
     template <> void OSMWorld::set_current_ts_minute<int>( int const & v) {
//         cout << "set_current_ts_minute"<<  v << endl;
       world.set_current_ts_minute(v);
}
   
     template <> void OSMWorld::set_current_ts_second<int>( int const & v) {
//         cout << "set_current_ts_second"<<  v << endl;
       world.set_current_ts_second(v);
}
   
     template <> void OSMWorld::set_current_vis<int>( int const & v) {
//         cout << "set_current_vis"<<  v << endl;
       world.set_current_vis(v);
}
   



   
   //set_current_cs
    template <> void OSMWorld::set_current_cs<long>(const long & v) {
//        cout << "set_current_cs"<<  v << endl;
       world.set_current_cs(v);
}


   
   //set_current_id
    template <> void OSMWorld::set_current_id<long>(const long & v) {
//        cout << "set_current_id"<<  v << endl;
       world.set_current_id(v);
}


   
   //set_current_lat
    template <> void OSMWorld::set_current_lat<long>(const long & v) {
//        cout << "set_current_lat"<<  v << endl;
       world.set_current_lat(v);
}


   
   //set_current_lon
    template <> void OSMWorld::set_current_lon<long>(const long & v) {
//        cout << "set_current_lon"<<  v << endl;
       world.set_current_lon(v);
}


   
   //set_way_node_ref
    template <> void OSMWorld::set_way_node_ref<long>(const long & v) {
//        cout << "set_way_node_ref"<<  v << endl;
       world.set_way_node_ref(v);
}


   
   //set_current_ver
    template <> void OSMWorld::set_current_ver<long>(const long & v) {
//        cout << "set_current_ver"<<  v << endl;
       world.set_current_ver(v);
}


   
   //set_current_uid
    template <> void OSMWorld::set_current_uid<long>(const long & v) {
//        cout << "set_current_uid"<<  v << endl;
       world.set_current_uid(v);
}


   


   int OSMWorld::scannerstatus(int s, char const* v){
      return  world.scannerstatus(s, v);
    }

   void OSMWorld::set_current_pos(int p){
    world.set_current_pos(p);
    }

