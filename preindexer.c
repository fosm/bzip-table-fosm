
#line 1 "preindexer.rl"

#line 147 "preindexer.rl"



#line 9 "preindexer.c"
static const char _osmkeys_eof_actions[] = {
	0, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 0, 0
};

static const int osmkeys_start = 1;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 1;


#line 150 "preindexer.rl"

#define BUFSIZE 128
#include "filepreindexer.hpp"
int prescanner(OSMWorldPreindex & world,const char *s)
{
  int cs;
  int res = 0;
  string currenttoken;
  char *p= (char *)s;
  char *pe = (char *)s + strlen(s) +1 ;
  char *eof = 0;    
  
#line 44 "preindexer.c"
	{
	cs = osmkeys_start;
	}

#line 162 "preindexer.rl"
  
#line 51 "preindexer.c"
	{
	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	switch ( cs ) {
case 1:
	if ( (*p) == 60 )
		goto tr1;
	goto tr0;
case 0:
	goto _out;
case 2:
	switch( (*p) ) {
		case 47: goto tr2;
		case 63: goto tr3;
		case 99: goto tr4;
		case 100: goto tr5;
		case 109: goto tr6;
		case 110: goto tr7;
		case 111: goto tr8;
		case 114: goto tr9;
		case 119: goto tr10;
	}
	goto tr0;
case 3:
	switch( (*p) ) {
		case 110: goto tr11;
		case 114: goto tr12;
		case 119: goto tr13;
	}
	goto tr0;
case 4:
	if ( (*p) == 111 )
		goto tr14;
	goto tr0;
case 5:
	if ( (*p) == 100 )
		goto tr15;
	goto tr0;
case 6:
	if ( (*p) == 101 )
		goto tr16;
	goto tr0;
case 7:
	if ( (*p) == 62 )
		goto tr17;
	goto tr0;
case 93:
	if ( (*p) == 60 )
		goto tr1;
	goto tr0;
case 8:
	if ( (*p) == 101 )
		goto tr18;
	goto tr0;
case 9:
	if ( (*p) == 108 )
		goto tr19;
	goto tr0;
case 10:
	if ( (*p) == 97 )
		goto tr20;
	goto tr0;
case 11:
	if ( (*p) == 116 )
		goto tr21;
	goto tr0;
case 12:
	if ( (*p) == 105 )
		goto tr22;
	goto tr0;
case 13:
	if ( (*p) == 111 )
		goto tr23;
	goto tr0;
case 14:
	if ( (*p) == 110 )
		goto tr16;
	goto tr0;
case 15:
	if ( (*p) == 97 )
		goto tr24;
	goto tr0;
case 16:
	if ( (*p) == 121 )
		goto tr16;
	goto tr0;
case 17:
	if ( (*p) == 120 )
		goto tr25;
	goto tr0;
case 18:
	if ( (*p) == 109 )
		goto tr26;
	goto tr0;
case 19:
	if ( (*p) == 108 )
		goto tr27;
	goto tr0;
case 20:
	if ( (*p) == 114 )
		goto tr28;
	goto tr0;
case 21:
	if ( (*p) == 101 )
		goto tr29;
	goto tr0;
case 22:
	if ( (*p) == 97 )
		goto tr30;
	goto tr0;
case 23:
	if ( (*p) == 116 )
		goto tr31;
	goto tr0;
case 24:
	if ( (*p) == 101 )
		goto tr32;
	goto tr0;
case 25:
	if ( (*p) == 32 )
		goto tr33;
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr33;
	goto tr0;
case 26:
	switch( (*p) ) {
		case 32: goto tr33;
		case 105: goto tr34;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr33;
	goto tr0;
case 27:
	if ( (*p) == 100 )
		goto tr35;
	goto tr0;
case 28:
	if ( (*p) == 61 )
		goto tr36;
	goto tr0;
case 29:
	switch( (*p) ) {
		case 34: goto tr37;
		case 39: goto tr37;
	}
	goto tr0;
case 30:
	if ( (*p) == 45 )
		goto tr38;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr39;
	goto tr0;
case 31:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr39;
	goto tr0;
case 32:
	switch( (*p) ) {
		case 34: goto tr40;
		case 39: goto tr40;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr39;
	goto tr0;
case 33:
	if ( (*p) == 101 )
		goto tr41;
	goto tr0;
case 34:
	if ( (*p) == 108 )
		goto tr42;
	goto tr0;
case 35:
	if ( (*p) == 101 )
		goto tr43;
	goto tr0;
case 36:
	if ( (*p) == 116 )
		goto tr44;
	goto tr0;
case 37:
	if ( (*p) == 101 )
		goto tr45;
	goto tr0;
case 38:
	if ( (*p) == 111 )
		goto tr46;
	goto tr0;
case 39:
	if ( (*p) == 100 )
		goto tr47;
	goto tr0;
case 40:
	if ( (*p) == 105 )
		goto tr48;
	goto tr0;
case 41:
	if ( (*p) == 102 )
		goto tr49;
	goto tr0;
case 42:
	if ( (*p) == 121 )
		goto tr50;
	goto tr0;
case 43:
	if ( (*p) == 111 )
		goto tr51;
	goto tr0;
case 44:
	if ( (*p) == 100 )
		goto tr52;
	goto tr0;
case 45:
	if ( (*p) == 101 )
		goto tr53;
	goto tr0;
case 46:
	if ( (*p) == 115 )
		goto tr54;
	goto tr0;
case 47:
	if ( (*p) == 109 )
		goto tr55;
	goto tr0;
case 48:
	if ( (*p) == 32 )
		goto tr56;
	goto tr0;
case 49:
	if ( (*p) == 118 )
		goto tr57;
	goto tr0;
case 50:
	if ( (*p) == 101 )
		goto tr58;
	goto tr0;
case 51:
	if ( (*p) == 114 )
		goto tr59;
	goto tr0;
case 52:
	if ( (*p) == 115 )
		goto tr60;
	goto tr0;
case 53:
	if ( (*p) == 105 )
		goto tr61;
	goto tr0;
case 54:
	if ( (*p) == 111 )
		goto tr62;
	goto tr0;
case 55:
	if ( (*p) == 110 )
		goto tr63;
	goto tr0;
case 56:
	if ( (*p) == 61 )
		goto tr64;
	goto tr0;
case 57:
	if ( (*p) == 39 )
		goto tr65;
	goto tr0;
case 58:
	if ( (*p) == 48 )
		goto tr66;
	goto tr0;
case 59:
	if ( (*p) == 46 )
		goto tr67;
	goto tr0;
case 60:
	if ( (*p) == 54 )
		goto tr68;
	goto tr0;
case 61:
	if ( (*p) == 39 )
		goto tr69;
	goto tr0;
case 62:
	if ( (*p) == 32 )
		goto tr70;
	goto tr0;
case 63:
	if ( (*p) == 103 )
		goto tr71;
	goto tr0;
case 64:
	if ( (*p) == 101 )
		goto tr72;
	goto tr0;
case 65:
	if ( (*p) == 110 )
		goto tr73;
	goto tr0;
case 66:
	if ( (*p) == 101 )
		goto tr74;
	goto tr0;
case 67:
	if ( (*p) == 114 )
		goto tr75;
	goto tr0;
case 68:
	if ( (*p) == 97 )
		goto tr76;
	goto tr0;
case 69:
	if ( (*p) == 116 )
		goto tr77;
	goto tr0;
case 70:
	if ( (*p) == 111 )
		goto tr78;
	goto tr0;
case 71:
	if ( (*p) == 114 )
		goto tr79;
	goto tr0;
case 72:
	if ( (*p) == 61 )
		goto tr80;
	goto tr0;
case 73:
	if ( (*p) == 39 )
		goto tr81;
	goto tr0;
case 74:
	if ( (*p) == 102 )
		goto tr82;
	goto tr0;
case 75:
	if ( (*p) == 111 )
		goto tr83;
	goto tr0;
case 76:
	if ( (*p) == 115 )
		goto tr84;
	goto tr0;
case 77:
	if ( (*p) == 109 )
		goto tr85;
	goto tr0;
case 78:
	if ( (*p) == 32 )
		goto tr86;
	goto tr0;
case 79:
	if ( (*p) == 49 )
		goto tr87;
	goto tr0;
case 80:
	if ( (*p) == 46 )
		goto tr88;
	goto tr0;
case 81:
	if ( (*p) == 48 )
		goto tr89;
	goto tr0;
case 82:
	if ( (*p) == 39 )
		goto tr90;
	goto tr0;
case 83:
	if ( (*p) == 62 )
		goto tr91;
	goto tr0;
case 94:
	switch( (*p) ) {
		case 32: goto tr91;
		case 60: goto tr1;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr91;
	goto tr0;
case 84:
	if ( (*p) == 101 )
		goto tr92;
	goto tr0;
case 85:
	if ( (*p) == 108 )
		goto tr93;
	goto tr0;
case 86:
	if ( (*p) == 97 )
		goto tr94;
	goto tr0;
case 87:
	if ( (*p) == 116 )
		goto tr95;
	goto tr0;
case 88:
	if ( (*p) == 105 )
		goto tr96;
	goto tr0;
case 89:
	if ( (*p) == 111 )
		goto tr97;
	goto tr0;
case 90:
	if ( (*p) == 110 )
		goto tr98;
	goto tr0;
case 91:
	if ( (*p) == 97 )
		goto tr99;
	goto tr0;
case 92:
	if ( (*p) == 121 )
		goto tr100;
	goto tr0;
	}

	tr0: cs = 0; goto f0;
	tr1: cs = 2; goto f1;
	tr2: cs = 3; goto f1;
	tr11: cs = 4; goto f1;
	tr14: cs = 5; goto f1;
	tr15: cs = 6; goto f1;
	tr16: cs = 7; goto f1;
	tr12: cs = 8; goto f1;
	tr18: cs = 9; goto f1;
	tr19: cs = 10; goto f1;
	tr20: cs = 11; goto f1;
	tr21: cs = 12; goto f1;
	tr22: cs = 13; goto f1;
	tr23: cs = 14; goto f1;
	tr13: cs = 15; goto f1;
	tr24: cs = 16; goto f1;
	tr3: cs = 17; goto f1;
	tr25: cs = 18; goto f1;
	tr26: cs = 19; goto f1;
	tr4: cs = 20; goto f1;
	tr28: cs = 21; goto f1;
	tr29: cs = 22; goto f1;
	tr30: cs = 23; goto f1;
	tr31: cs = 24; goto f1;
	tr32: cs = 25; goto f4;
	tr45: cs = 25; goto f8;
	tr50: cs = 25; goto f9;
	tr53: cs = 25; goto f10;
	tr98: cs = 25; goto f11;
	tr100: cs = 25; goto f12;
	tr33: cs = 26; goto f1;
	tr34: cs = 27; goto f1;
	tr35: cs = 28; goto f1;
	tr36: cs = 29; goto f1;
	tr37: cs = 30; goto f5;
	tr38: cs = 31; goto f6;
	tr39: cs = 32; goto f6;
	tr5: cs = 33; goto f1;
	tr41: cs = 34; goto f1;
	tr42: cs = 35; goto f1;
	tr43: cs = 36; goto f1;
	tr44: cs = 37; goto f1;
	tr6: cs = 38; goto f1;
	tr46: cs = 39; goto f1;
	tr47: cs = 40; goto f1;
	tr48: cs = 41; goto f1;
	tr49: cs = 42; goto f1;
	tr7: cs = 43; goto f1;
	tr51: cs = 44; goto f1;
	tr52: cs = 45; goto f1;
	tr8: cs = 46; goto f1;
	tr54: cs = 47; goto f1;
	tr55: cs = 48; goto f1;
	tr56: cs = 49; goto f1;
	tr57: cs = 50; goto f1;
	tr58: cs = 51; goto f1;
	tr59: cs = 52; goto f1;
	tr60: cs = 53; goto f1;
	tr61: cs = 54; goto f1;
	tr62: cs = 55; goto f1;
	tr63: cs = 56; goto f1;
	tr64: cs = 57; goto f1;
	tr65: cs = 58; goto f1;
	tr66: cs = 59; goto f1;
	tr67: cs = 60; goto f1;
	tr68: cs = 61; goto f1;
	tr69: cs = 62; goto f1;
	tr70: cs = 63; goto f1;
	tr71: cs = 64; goto f1;
	tr72: cs = 65; goto f1;
	tr73: cs = 66; goto f1;
	tr74: cs = 67; goto f1;
	tr75: cs = 68; goto f1;
	tr76: cs = 69; goto f1;
	tr77: cs = 70; goto f1;
	tr78: cs = 71; goto f1;
	tr79: cs = 72; goto f1;
	tr80: cs = 73; goto f1;
	tr81: cs = 74; goto f1;
	tr82: cs = 75; goto f1;
	tr83: cs = 76; goto f1;
	tr84: cs = 77; goto f1;
	tr85: cs = 78; goto f1;
	tr86: cs = 79; goto f1;
	tr87: cs = 80; goto f1;
	tr88: cs = 81; goto f1;
	tr89: cs = 82; goto f1;
	tr90: cs = 83; goto f1;
	tr9: cs = 84; goto f1;
	tr92: cs = 85; goto f1;
	tr93: cs = 86; goto f1;
	tr94: cs = 87; goto f1;
	tr95: cs = 88; goto f1;
	tr96: cs = 89; goto f1;
	tr97: cs = 90; goto f1;
	tr10: cs = 91; goto f1;
	tr99: cs = 92; goto f1;
	tr17: cs = 93; goto f2;
	tr27: cs = 93; goto f3;
	tr40: cs = 93; goto f7;
	tr91: cs = 94; goto f3;

f1:
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f0:
#line 26 "preindexer.rl"
	{
   world.add_char((*p));   
   res = 10;
   {cs = 1; goto _again;}         
}
	goto _again;
f5:
#line 8 "preindexer.rl"
	{
     currenttoken.clear();  
}
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f3:
#line 12 "preindexer.rl"
	{          
//       cerr << "Skipping" << endl;
       world.skip();
}
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f2:
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
#line 114 "preindexer.rl"
	{
                        world.finish_current_object();
                }
	goto _again;
f6:
#line 21 "preindexer.rl"
	{
//       world.add_char(fc);   
       currenttoken.push_back((*p));
}
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f10:
#line 34 "preindexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f12:
#line 42 "preindexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f11:
#line 50 "preindexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f8:
#line 58 "preindexer.rl"
	{
       world.set_action_delete();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f9:
#line 66 "preindexer.rl"
	{
       world.set_action_modify();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f4:
#line 74 "preindexer.rl"
	{
       world.set_action_create();
       }
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;
f7:
#line 83 "preindexer.rl"
	{
     char *endptr;   // ignore  
  //   cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 4 "preindexer.rl"
	{      
       world.record_start_position();
}
#line 17 "preindexer.rl"
	{
       world.add_char((*p));   
}
	goto _again;

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	switch ( _osmkeys_eof_actions[cs] ) {
	case 1:
#line 26 "preindexer.rl"
	{
   world.add_char((*p));   
   res = 10;
   {cs = 1; goto _again;}         
}
	break;
#line 721 "preindexer.c"
	}
	}

	_out: {}
	}

#line 163 "preindexer.rl"

  return res;
}

