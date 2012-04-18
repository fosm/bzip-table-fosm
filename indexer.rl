
%%{
machine osmkeys;

action some_err {
       cerr <<"an error has occured"  << endl;            
       res = 10;
}

el_node = (
'node' @{
       world.set_current_element_type_node();
       }
     );

el_way = (
'way' @{
       world.set_current_element_type_way();
       }
     );

el_relation = (
'relation' @{
       world.set_current_element_type_rel();
       }
     );

el_tag = (
'tag' @{
       world.set_current_element_type_tag();
       }
     );

el_nd = (
'nd' @{
       world.set_current_element_type_nd();
       }
     );
el_member = (
'member' @{
       world.set_current_element_type_member();
       }
     );

tags = (
el_node | 
el_way |
el_relation |
el_nd |
el_member |
el_tag
);

std_attr = (
'uid' |
'user' |
'timestamp' |
'visible' 
);

node_attr = (
'lat' |
'lon' |
std_attr
);

way_attr = (
std_attr
);

nd_attr = (
'ref' 
);

relation_attr = (
              std_attr
);

member_attr = (
'type' |
'ref'  |
'role' 
);



tag_k_names = (
'natural' |
'highway' |
'name'  |
'landuse'  |
'ref'  |
'type'  |
'place'  |
'amenity'

);

coord = (
      /-?\d+\.\d+/ |
      /-?\d+/
      );

attrs = (
      node_attr |
      way_attr  |
      nd_attr  |
      relation_attr  |
      member_attr 
      );

attrs_val = ( attrs '=' '\'' [^']+ '\'' |
              attrs '=' '\"' [^"]+ '\"' 
            );


end_element  = ('/>'
                |'</node>'
                |'</way>'
                |'</relation>'
                ) @{
//		cerr << "end element " << endl;
		world.finish_current_object();

                };

action ActEnterAttribute {
           cout << "enter Attributes \n" ;      
            cout << "str:\'" << fpc << "\'" <<endl;     
           cout << "CS:" << fcurs << endl;     
       }

action ActEndAttribute {
           res = 2; 
           cout << "Attribute CS" << cs << endl;     
       }


action RecordStart {
       // record the start of a type of object
       world.record_start_position();
}
quote = ('\''|'\"' );

action StartValue {
     currenttoken.clear();  
}
action AddChar {
     currenttoken.push_back(fc);
}

action AddChar2 {
       cerr << fc << endl;
     currenttoken.push_back(fc);
}

action DebugChar {
       cerr << fc << endl;
}

# ID Field
action FinishID {
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
id_val_start = ( 'id' '=' quote  @StartValue);
id_val_negvalue = (  '-'?  $AddChar2 );
id_val_value = (  id_val_negvalue digit+  $AddChar );
id_val_end   = (  quote  @ FinishID );
id_val = ( id_val_start id_val_value id_val_end );


#changeset
action FinishChangeset {
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
cs_val_start = ( 'changeset' '=' quote  @StartValue);
cs_val_value = (   digit+  $AddChar );
cs_val_end   = (  quote  @ FinishChangeset );
cs_val = ( cs_val_start cs_val_value cs_val_end );


#versions
action FinishVersion {
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
ver_val_start = ( 'version' '=' quote  @StartValue);
ver_val_value = ( digit+  $AddChar );
ver_val_end   = ( quote  @ FinishVersion );
ver_val       = ( ver_val_start ver_val_value ver_val_end );

#userid
action FinishUid {
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_uid(strtol(currenttoken.c_str(), &endptr, 10));
}
uid_val_start = ( 'uid' '=' quote  @StartValue);
uid_val_value = ( digit+  $AddChar );
uid_val_end   = ( quote  @ FinishUid );
uid_val       = ( uid_val_start uid_val_value uid_val_end );

#timestamp
action FinishTs {
     char *endptr;   // ignore
//     cerr << "timestamp " << currenttoken << endl;
     world.set_current_ts(currenttoken.c_str());
}
ts_val_start = ( 'timestamp' '=' quote  @StartValue);
ts_val_value = ( [0-9TZ:\-]+  $AddChar );
ts_val_end   = ( quote  @ FinishTs );
ts_val       = ( ts_val_start ts_val_value ts_val_end );

#visible
action FinishVisT {
     world.set_current_vis(1);
}
action FinishVisF {
     world.set_current_vis(0);
}
vis_val_start = ( 'visible' '=' quote  @StartValue);
vis_val_valuet = ( 'true'  @ FinishVisT );
vis_val_valuef = ( 'false' @ FinishVisF );
vis_val       = ( vis_val_start (vis_val_valuet|vis_val_valuef) quote );

#user
action FinishUser {
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_user(currenttoken.c_str());
}
user_val_start = ( 'user' '=' quote  @StartValue);
user_val_value = ( [^\']+  $AddChar );
user_val_end   = ( quote  @ FinishUser );
user_val       = ( user_val_start user_val_value user_val_end );

#tag v
action FinishV {
     char *endptr;   // ignore
     world.set_tag_val(currenttoken.c_str());
}
way_tag_val_start = ( 'ref' '=' quote  @StartValue);
way_tag_val_value = ( digit+  $AddChar );
way_tag_val_end   = ( quote  @ FinishV );
way_tag_val       = ( way_tag_val_start way_tag_val_value way_tag_val_end );

#tag k
action FinishK {
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
}
way_tag_key_start = ( 'ref' '=' quote  @StartValue);
way_tag_key_value = ( digit+  $AddChar );
way_tag_key_end   = ( quote  @ FinishK );
way_tag_key       = ( way_tag_key_start way_tag_key_value way_tag_key_end );

# lat lon
latlon_val_value_neg = (  '-' $AddChar );
latlon_val_value_main = (  digit+ $AddChar );
latlon_val_value_dec = ( ( '.' . digit+)  $AddChar );
latlon_val_value = (  latlon_val_value_neg? latlon_val_value_main latlon_val_value_dec?  );

#lat 
action FinishLat {
     char *endptr;   // ignore
     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
lat_val_start = ( 'lat' '=' quote  @StartValue);
lat_val_end   = ( quote  @ FinishLat );
lat_val       = ( lat_val_start latlon_val_value lat_val_end );

#lon 
action FinishLon {
     char *endptr;   // ignore
     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
lon_val_start = ( 'lon' '=' quote  @StartValue);
lon_val_end   = ( quote  @ FinishLon );
lon_val       = ( lon_val_start latlon_val_value lon_val_end );

#

start_element = ( '<' tags @ RecordStart );
attribute =(            
	   id_val     |
            cs_val    |
            ver_val    | 
            uid_val   | 
            ts_val    | 
            vis_val   |         
            user_val  |
            lat_val  |
            lon_val  |
            way_tag_key |
            way_tag_val |
            attrs_val  
	    @{ 
//	       cerr <<"got attribute"  << endl;    
	     }
);


attributes =(            
	 (attribute space* )*  
);

starter = (
 	  start_element     | 	    
	  start_element space+ attributes space+ end_element  | 
	  start_element  attributes   | 	    
          end_element  
          $err (some_err)
           );
           


starter2 = (
         space*  .starter+ space* |
         space*  .starter space*
       );

#debug := (  space* . start_element . any +  $DebugChar );


main := (
     space* .starter |
     starter2+  
     )
     @{ res = 1;      } ;  

}%%

%% write data nofinal;

#define BUFSIZE 128
#include "fileindexer.hpp"
int scanner(OSMWorld & world,const char *s)
{
  int cs;
  int res = 0;
  string currenttoken;
  char *p= (char *)s;
  char *pe = (char *)s + strlen(s) +1 ;

  char *eof = 0;
     
  %% write init;
  %% write exec;


  return res;
}

