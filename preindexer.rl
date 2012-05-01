%%{
machine osmkeys;

action RecordStart {      
       world.record_start_position();
}

action Skip {          
       cerr << "Skipping" << endl;
       world.skip();
}

action AddChar {
       world.add_char(fc);   
}

action some_err {
   world.add_char(fc);   
   res = 10;
   fgoto main;         
}


el_node = (
'node' @{
       world.set_current_element_type_node();
       }
     )
     $err(some_err )
     $AddChar;

el_way = (
'way' @{
       world.set_current_element_type_way();
       }
     )
     $err (some_err )
     $AddChar;

el_relation = (
'relation' @{
       world.set_current_element_type_rel();
       }
     )
     $err (some_err )
     $AddChar;

el_delete = (
'delete' @{
       world.set_action_delete();
       }
     )
     $err (some_err )
     $AddChar;

el_modify = (
'modify' @{
       world.set_action_modify();
       }
     )     
     $err (some_err )
     $AddChar;

el_create = (
'create' @{
       world.set_action_create();
       }
     )
     $err (some_err )
     $AddChar;

tags = (
     el_node | 
     el_way |
     el_relation |
     el_delete | 
     el_modify | 
     el_create 
)
$err (some_err  )
$AddChar;

end_element  = (
                '</node>'
                |'</way>'
                |'</relation>'
                )               
                $err(some_err) 
                $AddChar
                @{
                        world.finish_current_object();
                };

start_element = ( '<' tags ) 
              @RecordStart
              $err(some_err) 
              $AddChar;

xmlheader = ('<?xml')  
              @Skip 
              $err(some_err) 
              $AddChar;

osmheader = ('<osm version=\'0.6\' generator=\'fosm 1.0\'>' space* ) 
            @Skip 
            $err(some_err) 
            $AddChar;

content = (
        xmlheader |
        osmheader |
        start_element|
        end_element 
) 
$err(some_err) 
$AddChar;

main := (
     content + 
     )  
        $err(some_err) 
        $AddChar;  
}%%

%% write data nofinal;

#define BUFSIZE 128
#include "filepreindexer.hpp"
int prescanner(OSMWorldPreindex & world,const char *s)
{
  int cs;
  int res = 0;
  char *p= (char *)s;
  char *pe = (char *)s + strlen(s) +1 ;
  char *eof = 0;    
  %% write init;
  %% write exec;

  return res;
}

