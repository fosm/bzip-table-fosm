
%%{
machine osmkeys;

action AddChar {
//       cout << "CS:" << fcurs << endl;          
//        cerr <<  "debug"<< fc << endl;
//       cerr << fcurs << ":" << fc << endl;	
       currenttoken.push_back(fc);
}

action DebugChar {
       cerr << fc << endl;
}

action AddCharDebug {
     cout << "CS:" << fcurs << endl;          
     cerr <<  "debug"<< fc << endl;
     currenttoken.push_back(fc);
}


action some_err {
       cerr <<"an error has occured"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     


       res = 10;
}

action some_err_starter {
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 11;
}

action some_err_node {
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 12;
}

action some_err_attr {
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 13;
}

action some_err_element {
       cerr <<"an error has occured element"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 14;
}

action some_err_attr_uid {
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 131;
}

action some_err_attr_ts {
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << fcurs << endl;     
       cout << "str:\'" << fpc << "\'" <<endl;     
       res = 132;
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
//      cerr << "tag" << endl;
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
        $err (some_err_element  )
);

#member_attr = (
#'type' |
#'ref'  |
#'role' 
#);

coord = (
      /-?\d+\.\d+/ |
      /-?\d+/
      );

end_element  = (
             '>'       
               |'/>'
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
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}

quote = ('\''|'\"' );

action StartValue {
     currenttoken.clear();  
}




# ID Field
action FinishID {
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}

id_val_start = ( 'id' '=' quote  @StartValue);
id_val_negvalue = (  '-'?  $AddChar );
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
uid_val       = ( uid_val_start uid_val_value uid_val_end $err (some_err_attr_uid)              );

#timestamp
action FinishTsYear {
     char *endptr;   // ignore  
     int year=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_year(year);
}

action FinishTsMonth {
     char *endptr;   // ignore  
     int month=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";                       
     world.set_current_ts_month (month);
}

action FinishTsDay {
     char *endptr;   // ignore  
     int day=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_day (day);
}

action FinishTsHour {
     char *endptr;   // ignore  
     int hour=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_hour (hour);
}

action FinishTsMinute {
     char *endptr;   // ignore  
     int minute=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_minute (minute);
}

action FinishTsSecond {
     char *endptr;   // ignore  
     int second=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_second (second);
}

#timestamp="2011-05-16T15:03:45Z"/>"

ts_val_start = ( 'timestamp' '=' quote  @StartValue);
ts_val_value = ( [0-9]+  $AddChar );
ts_val_year_end   = ( '-'  @ FinishTsYear );
ts_val_month_end  = ( '-'  @ FinishTsMonth );
ts_val_day_end    = ( 'T'  @ FinishTsDay );
ts_val_hour_end   = ( ':'  @ FinishTsHour );
ts_val_minute_end = ( ':'  @ FinishTsMinute );
ts_val_sec_end    = ( 'Z'  @ FinishTsSecond );
ts_val_end   = ( quote  @ FinishTsYear );
ts_val       = ( ts_val_start 
                 ts_val_value ts_val_year_end 
                 ts_val_value ts_val_month_end
                 ts_val_value ts_val_day_end                 
                 ts_val_value ts_val_hour_end                 
                 ts_val_value ts_val_minute_end                 
                 ts_val_value ts_val_sec_end                 
                 quote
                  $err (some_err_attr_ts)              
);

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
user_val_value = ( [^\"\']+  $AddChar );
user_val_end   = ( quote  @ FinishUser );
user_val       = ( user_val_start user_val_value user_val_end );

#action
action FinishAction {
     char *endptr;   // ignore
//     cerr << "action " << currenttoken << endl;
     world.set_action(currenttoken.c_str());
}
action_val_start = ( 'action' '=' quote  @StartValue);
action_val_value = ( [^\"\']+  $AddChar );
action_val_end   = ( quote  @ FinishAction );
action_val       = ( action_val_start action_val_value action_val_end );

#tag v
action FinishV {
     char *endptr;   // ignore
//     cerr << "v:"<< currenttoken << endl;
     world.set_tag_val(currenttoken.c_str());
}

#tag k
action FinishK {
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
     currenttoken="";
}


## way tag
add_string_value = ( [^\'\"]+  $AddChar );
way_tag_val_end   = ( quote space*  |
		      quote @ FinishV );
way_tag_val       = ( 'v' space* '=' quote add_string_value way_tag_val_end );
#>{ cerr << "start value\n" << endl;}

way_tag_key_end   = ( quote space* | quote  @ FinishK );
way_tag_key       = ( 'k' space* '=' quote add_string_value way_tag_key_end );


# lat lon
latlon_val_value_neg = (  '-' $AddChar );
latlon_val_value_main = (  digit+ $AddChar );

sci = 'E' '-' digit+;

latlon_val_value_dec = ( ( '.' . digit + sci? )  $AddChar );
latlon_val_value = (  latlon_val_value_neg? latlon_val_value_main latlon_val_value_dec?  );

#lat 
action FinishLat {
     char *endptr;   // ignore
//     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
lat_val_start = ( 'lat' '=' quote  @StartValue);
lat_val_end   = ( quote  @ FinishLat );
lat_val       = ( lat_val_start latlon_val_value lat_val_end );

#lon 
action FinishLon {
     char *endptr;   // ignore
//     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
lon_val_start = ( 'lon' '=' quote  @StartValue);
lon_val_end   = ( quote  @ FinishLon );
lon_val       = ( lon_val_start latlon_val_value lon_val_end );


#way nd ref
action FinishNdRef {
     char *endptr;   // ignore
//     cerr << "way node ref " << currenttoken << endl;
     world.set_way_node_ref(strtol(currenttoken.c_str(), &endptr,10));
     currenttoken ="";
}
way_node_start = ( 'ref' '=' quote  @StartValue);
way_node_end   = ( quote  @ FinishNdRef );
way_node_value_main = (  digit+ $AddChar );
way_node_ref       = ( way_node_start way_node_value_main way_node_end   $err (some_err_node) );

start_element = ( '<' tags @ RecordStart );
attribute =(            
          cs_val    |
          action_val  |        
          ver_val    | 
          uid_val   | 
          ts_val    | 
          vis_val   |         
          user_val  | 
          lat_val  |
          lon_val  |
          way_tag_key |
          way_tag_val |
          way_node_ref |
          id_val     
          $err (some_err_attr)      
#    @{ 
# //	       cerr <<"got attribute"  << endl;    
#     }
);

attributes =(            
	 (attribute space* )*  
);

starter = (
          ( '<bounds'  ) |
 	  start_element     | 	    
	  start_element space+ attributes  | 
	  start_element space+ attributes space* end_element  | 
	  start_element  attributes 
          $err (some_err_starter)
           );



xmlheader = ('<?xml version=\'1.0\' encoding=\'UTF-8\'?>');
#bounds = ('<bounds' 'minlat=\'' \'' minlon='8.8074133' maxlat='50.045240199999995' maxlon='8.8274143' origin='CGImap 0.0.2' />
osmheader = (space* '<osm' . any+ );
starter2 = (
         space*  .starter+ space* |
         space*  .starter space* 
       );

#debug := (  space* . start_element . any +  $DebugChar );


main := (
     xmlheader |
     osmheader |
     space*       |
     space* .starter |
     starter2 + |
     # for 
     space*  starter space* end_element | 
     space*  starter space* end_element space*| 
     end_element  |
     space*  end_element  |
     space*  end_element  space*
     )
     @{ res = 1;      } ;  

}%%

%% write data nofinal;

#define BUFSIZE 128
#include "ifileindexer.hpp"
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

