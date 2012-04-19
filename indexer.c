
#line 1 "indexer.rl"


#line 314 "indexer.rl"



#line 10 "indexer.c"
static const char _osmkeys_eof_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 21, 21, 21, 21, 21, 
	21, 21, 21, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0
};

static const int osmkeys_start = 1;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 1;


#line 317 "indexer.rl"

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
     
  
#line 71 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 331 "indexer.rl"
  
#line 78 "indexer.c"
	{
	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	switch ( cs ) {
case 1:
	switch( (*p) ) {
		case 32: goto tr0;
		case 47: goto tr2;
		case 60: goto tr3;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr0;
	goto tr1;
case 0:
	goto _out;
case 2:
	switch( (*p) ) {
		case 32: goto tr0;
		case 47: goto tr2;
		case 60: goto tr4;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr0;
	goto tr1;
case 3:
	if ( (*p) == 62 )
		goto tr5;
	goto tr1;
case 267:
	if ( (*p) == 32 )
		goto tr285;
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr285;
	goto tr1;
case 4:
	switch( (*p) ) {
		case 47: goto tr6;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 5:
	switch( (*p) ) {
		case 110: goto tr13;
		case 114: goto tr14;
		case 119: goto tr15;
	}
	goto tr1;
case 6:
	if ( (*p) == 111 )
		goto tr16;
	goto tr1;
case 7:
	if ( (*p) == 100 )
		goto tr17;
	goto tr1;
case 8:
	if ( (*p) == 101 )
		goto tr2;
	goto tr1;
case 9:
	if ( (*p) == 101 )
		goto tr18;
	goto tr1;
case 10:
	if ( (*p) == 108 )
		goto tr19;
	goto tr1;
case 11:
	if ( (*p) == 97 )
		goto tr20;
	goto tr1;
case 12:
	if ( (*p) == 116 )
		goto tr21;
	goto tr1;
case 13:
	if ( (*p) == 105 )
		goto tr22;
	goto tr1;
case 14:
	if ( (*p) == 111 )
		goto tr23;
	goto tr1;
case 15:
	if ( (*p) == 110 )
		goto tr2;
	goto tr1;
case 16:
	if ( (*p) == 97 )
		goto tr24;
	goto tr1;
case 17:
	if ( (*p) == 121 )
		goto tr2;
	goto tr1;
case 18:
	if ( (*p) == 101 )
		goto tr25;
	goto tr1;
case 19:
	if ( (*p) == 109 )
		goto tr26;
	goto tr1;
case 20:
	if ( (*p) == 98 )
		goto tr27;
	goto tr1;
case 21:
	if ( (*p) == 101 )
		goto tr28;
	goto tr1;
case 22:
	if ( (*p) == 114 )
		goto tr29;
	goto tr1;
case 268:
	switch( (*p) ) {
		case 32: goto tr148;
		case 60: goto tr286;
		case 99: goto tr287;
		case 105: goto tr288;
		case 107: goto tr171;
		case 108: goto tr289;
		case 116: goto tr290;
		case 117: goto tr291;
		case 118: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr148;
	goto tr152;
case 269:
	switch( (*p) ) {
		case 32: goto tr293;
		case 60: goto tr286;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr293;
	goto tr1;
case 270:
	switch( (*p) ) {
		case 32: goto tr293;
		case 47: goto tr52;
		case 60: goto tr300;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr293;
	goto tr1;
case 23:
	if ( (*p) == 62 )
		goto tr30;
	goto tr1;
case 271:
	switch( (*p) ) {
		case 32: goto tr301;
		case 60: goto tr286;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr301;
	goto tr1;
case 24:
	switch( (*p) ) {
		case 109: goto tr7;
		case 110: goto tr8;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 25:
	switch( (*p) ) {
		case 100: goto tr31;
		case 111: goto tr32;
	}
	goto tr1;
case 26:
	if ( (*p) == 100 )
		goto tr33;
	goto tr1;
case 27:
	if ( (*p) == 101 )
		goto tr34;
	goto tr1;
case 28:
	if ( (*p) == 101 )
		goto tr35;
	goto tr1;
case 29:
	if ( (*p) == 108 )
		goto tr36;
	goto tr1;
case 30:
	if ( (*p) == 97 )
		goto tr37;
	goto tr1;
case 31:
	if ( (*p) == 116 )
		goto tr38;
	goto tr1;
case 32:
	if ( (*p) == 105 )
		goto tr39;
	goto tr1;
case 33:
	if ( (*p) == 111 )
		goto tr40;
	goto tr1;
case 34:
	if ( (*p) == 110 )
		goto tr41;
	goto tr1;
case 35:
	if ( (*p) == 97 )
		goto tr42;
	goto tr1;
case 36:
	if ( (*p) == 103 )
		goto tr43;
	goto tr1;
case 37:
	if ( (*p) == 97 )
		goto tr44;
	goto tr1;
case 38:
	if ( (*p) == 121 )
		goto tr45;
	goto tr1;
case 39:
	switch( (*p) ) {
		case 47: goto tr46;
		case 109: goto tr7;
		case 110: goto tr8;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 40:
	switch( (*p) ) {
		case 110: goto tr47;
		case 114: goto tr48;
		case 119: goto tr49;
	}
	goto tr1;
case 41:
	if ( (*p) == 111 )
		goto tr50;
	goto tr1;
case 42:
	if ( (*p) == 100 )
		goto tr51;
	goto tr1;
case 43:
	if ( (*p) == 101 )
		goto tr52;
	goto tr1;
case 44:
	if ( (*p) == 101 )
		goto tr53;
	goto tr1;
case 45:
	if ( (*p) == 108 )
		goto tr54;
	goto tr1;
case 46:
	if ( (*p) == 97 )
		goto tr55;
	goto tr1;
case 47:
	if ( (*p) == 116 )
		goto tr56;
	goto tr1;
case 48:
	if ( (*p) == 105 )
		goto tr57;
	goto tr1;
case 49:
	if ( (*p) == 111 )
		goto tr58;
	goto tr1;
case 50:
	if ( (*p) == 110 )
		goto tr52;
	goto tr1;
case 51:
	if ( (*p) == 97 )
		goto tr59;
	goto tr1;
case 52:
	if ( (*p) == 121 )
		goto tr52;
	goto tr1;
case 53:
	if ( (*p) == 104 )
		goto tr60;
	goto tr1;
case 54:
	if ( (*p) == 97 )
		goto tr61;
	goto tr1;
case 55:
	if ( (*p) == 110 )
		goto tr62;
	goto tr1;
case 56:
	if ( (*p) == 103 )
		goto tr63;
	goto tr1;
case 57:
	if ( (*p) == 101 )
		goto tr64;
	goto tr1;
case 58:
	if ( (*p) == 115 )
		goto tr65;
	goto tr1;
case 59:
	if ( (*p) == 101 )
		goto tr66;
	goto tr1;
case 60:
	if ( (*p) == 116 )
		goto tr67;
	goto tr1;
case 61:
	if ( (*p) == 61 )
		goto tr68;
	goto tr1;
case 62:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr1;
case 63:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr70;
	goto tr1;
case 64:
	switch( (*p) ) {
		case 34: goto tr71;
		case 39: goto tr71;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr70;
	goto tr1;
case 65:
	if ( (*p) == 100 )
		goto tr72;
	goto tr1;
case 66:
	if ( (*p) == 61 )
		goto tr73;
	goto tr1;
case 67:
	switch( (*p) ) {
		case 34: goto tr74;
		case 39: goto tr74;
	}
	goto tr1;
case 68:
	if ( (*p) == 45 )
		goto tr75;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr76;
	goto tr1;
case 69:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr76;
	goto tr1;
case 70:
	switch( (*p) ) {
		case 34: goto tr77;
		case 39: goto tr77;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr76;
	goto tr1;
case 71:
	switch( (*p) ) {
		case 32: goto tr78;
		case 61: goto tr79;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr78;
	goto tr1;
case 72:
	switch( (*p) ) {
		case 34: goto tr80;
		case 39: goto tr80;
	}
	goto tr1;
case 73:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr81;
case 74:
	switch( (*p) ) {
		case 34: goto tr82;
		case 39: goto tr82;
	}
	goto tr81;
case 272:
	switch( (*p) ) {
		case 32: goto tr302;
		case 60: goto tr286;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr302;
	goto tr1;
case 273:
	switch( (*p) ) {
		case 32: goto tr302;
		case 47: goto tr52;
		case 60: goto tr300;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr302;
	goto tr1;
case 75:
	switch( (*p) ) {
		case 97: goto tr83;
		case 111: goto tr84;
	}
	goto tr1;
case 76:
	if ( (*p) == 116 )
		goto tr85;
	goto tr1;
case 77:
	if ( (*p) == 61 )
		goto tr86;
	goto tr1;
case 78:
	switch( (*p) ) {
		case 34: goto tr87;
		case 39: goto tr87;
	}
	goto tr1;
case 79:
	if ( (*p) == 45 )
		goto tr88;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr89;
	goto tr1;
case 80:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr89;
	goto tr1;
case 81:
	switch( (*p) ) {
		case 34: goto tr90;
		case 39: goto tr90;
		case 46: goto tr91;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr89;
	goto tr1;
case 82:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr92;
	goto tr1;
case 83:
	switch( (*p) ) {
		case 34: goto tr90;
		case 39: goto tr90;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr92;
	goto tr1;
case 84:
	if ( (*p) == 110 )
		goto tr93;
	goto tr1;
case 85:
	if ( (*p) == 61 )
		goto tr94;
	goto tr1;
case 86:
	switch( (*p) ) {
		case 34: goto tr95;
		case 39: goto tr95;
	}
	goto tr1;
case 87:
	if ( (*p) == 45 )
		goto tr96;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr97;
	goto tr1;
case 88:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr97;
	goto tr1;
case 89:
	switch( (*p) ) {
		case 34: goto tr98;
		case 39: goto tr98;
		case 46: goto tr99;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr97;
	goto tr1;
case 90:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr100;
	goto tr1;
case 91:
	switch( (*p) ) {
		case 34: goto tr98;
		case 39: goto tr98;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr100;
	goto tr1;
case 92:
	if ( (*p) == 105 )
		goto tr101;
	goto tr1;
case 93:
	if ( (*p) == 109 )
		goto tr102;
	goto tr1;
case 94:
	if ( (*p) == 101 )
		goto tr103;
	goto tr1;
case 95:
	if ( (*p) == 115 )
		goto tr104;
	goto tr1;
case 96:
	if ( (*p) == 116 )
		goto tr105;
	goto tr1;
case 97:
	if ( (*p) == 97 )
		goto tr106;
	goto tr1;
case 98:
	if ( (*p) == 109 )
		goto tr107;
	goto tr1;
case 99:
	if ( (*p) == 112 )
		goto tr108;
	goto tr1;
case 100:
	if ( (*p) == 61 )
		goto tr109;
	goto tr1;
case 101:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr110;
	}
	goto tr1;
case 102:
	switch( (*p) ) {
		case 45: goto tr111;
		case 84: goto tr111;
		case 90: goto tr111;
	}
	if ( 48 <= (*p) && (*p) <= 58 )
		goto tr111;
	goto tr1;
case 103:
	switch( (*p) ) {
		case 34: goto tr112;
		case 39: goto tr112;
		case 45: goto tr111;
		case 84: goto tr111;
		case 90: goto tr111;
	}
	if ( 48 <= (*p) && (*p) <= 58 )
		goto tr111;
	goto tr1;
case 104:
	if ( (*p) == 105 )
		goto tr113;
	goto tr1;
case 105:
	if ( (*p) == 100 )
		goto tr114;
	goto tr1;
case 106:
	if ( (*p) == 61 )
		goto tr115;
	goto tr1;
case 107:
	switch( (*p) ) {
		case 34: goto tr116;
		case 39: goto tr116;
	}
	goto tr1;
case 108:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr117;
	goto tr1;
case 109:
	switch( (*p) ) {
		case 34: goto tr118;
		case 39: goto tr118;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr117;
	goto tr1;
case 110:
	switch( (*p) ) {
		case 32: goto tr119;
		case 61: goto tr120;
		case 101: goto tr121;
		case 105: goto tr122;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr119;
	goto tr1;
case 111:
	switch( (*p) ) {
		case 32: goto tr119;
		case 61: goto tr120;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr119;
	goto tr1;
case 112:
	switch( (*p) ) {
		case 34: goto tr123;
		case 39: goto tr123;
	}
	goto tr1;
case 113:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr124;
case 114:
	switch( (*p) ) {
		case 34: goto tr125;
		case 39: goto tr125;
	}
	goto tr124;
case 274:
	switch( (*p) ) {
		case 32: goto tr303;
		case 60: goto tr286;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr303;
	goto tr1;
case 275:
	switch( (*p) ) {
		case 32: goto tr303;
		case 47: goto tr52;
		case 60: goto tr300;
		case 99: goto tr294;
		case 105: goto tr295;
		case 107: goto tr78;
		case 108: goto tr296;
		case 116: goto tr297;
		case 117: goto tr298;
		case 118: goto tr299;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr303;
	goto tr1;
case 115:
	if ( (*p) == 114 )
		goto tr126;
	goto tr1;
case 116:
	if ( (*p) == 115 )
		goto tr127;
	goto tr1;
case 117:
	if ( (*p) == 105 )
		goto tr128;
	goto tr1;
case 118:
	if ( (*p) == 111 )
		goto tr129;
	goto tr1;
case 119:
	if ( (*p) == 110 )
		goto tr130;
	goto tr1;
case 120:
	if ( (*p) == 61 )
		goto tr131;
	goto tr1;
case 121:
	switch( (*p) ) {
		case 34: goto tr132;
		case 39: goto tr132;
	}
	goto tr1;
case 122:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr133;
	goto tr1;
case 123:
	switch( (*p) ) {
		case 34: goto tr134;
		case 39: goto tr134;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr133;
	goto tr1;
case 124:
	if ( (*p) == 115 )
		goto tr135;
	goto tr1;
case 125:
	if ( (*p) == 105 )
		goto tr136;
	goto tr1;
case 126:
	if ( (*p) == 98 )
		goto tr137;
	goto tr1;
case 127:
	if ( (*p) == 108 )
		goto tr138;
	goto tr1;
case 128:
	if ( (*p) == 101 )
		goto tr139;
	goto tr1;
case 129:
	if ( (*p) == 61 )
		goto tr140;
	goto tr1;
case 130:
	switch( (*p) ) {
		case 34: goto tr141;
		case 39: goto tr141;
	}
	goto tr1;
case 131:
	switch( (*p) ) {
		case 102: goto tr142;
		case 116: goto tr143;
	}
	goto tr1;
case 132:
	if ( (*p) == 97 )
		goto tr144;
	goto tr1;
case 133:
	if ( (*p) == 108 )
		goto tr145;
	goto tr1;
case 134:
	if ( (*p) == 115 )
		goto tr146;
	goto tr1;
case 135:
	if ( (*p) == 101 )
		goto tr147;
	goto tr1;
case 136:
	switch( (*p) ) {
		case 34: goto tr148;
		case 39: goto tr148;
	}
	goto tr1;
case 137:
	if ( (*p) == 114 )
		goto tr149;
	goto tr1;
case 138:
	if ( (*p) == 117 )
		goto tr150;
	goto tr1;
case 139:
	if ( (*p) == 101 )
		goto tr151;
	goto tr1;
case 140:
	if ( (*p) == 104 )
		goto tr153;
	goto tr152;
case 141:
	if ( (*p) == 97 )
		goto tr154;
	goto tr152;
case 142:
	if ( (*p) == 110 )
		goto tr155;
	goto tr152;
case 143:
	if ( (*p) == 103 )
		goto tr156;
	goto tr152;
case 144:
	if ( (*p) == 101 )
		goto tr157;
	goto tr152;
case 145:
	if ( (*p) == 115 )
		goto tr158;
	goto tr152;
case 146:
	if ( (*p) == 101 )
		goto tr159;
	goto tr152;
case 147:
	if ( (*p) == 116 )
		goto tr160;
	goto tr152;
case 148:
	if ( (*p) == 61 )
		goto tr161;
	goto tr152;
case 149:
	switch( (*p) ) {
		case 34: goto tr162;
		case 39: goto tr162;
	}
	goto tr152;
case 150:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr163;
	goto tr152;
case 151:
	switch( (*p) ) {
		case 34: goto tr164;
		case 39: goto tr164;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr163;
	goto tr152;
case 276:
	switch( (*p) ) {
		case 32: goto tr241;
		case 60: goto tr286;
		case 99: goto tr287;
		case 105: goto tr288;
		case 107: goto tr171;
		case 108: goto tr289;
		case 116: goto tr290;
		case 117: goto tr291;
		case 118: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr241;
	goto tr152;
case 152:
	if ( (*p) == 100 )
		goto tr165;
	goto tr152;
case 153:
	if ( (*p) == 61 )
		goto tr166;
	goto tr152;
case 154:
	switch( (*p) ) {
		case 34: goto tr167;
		case 39: goto tr167;
	}
	goto tr152;
case 155:
	if ( (*p) == 45 )
		goto tr168;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr169;
	goto tr152;
case 156:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr169;
	goto tr152;
case 157:
	switch( (*p) ) {
		case 34: goto tr170;
		case 39: goto tr170;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr169;
	goto tr152;
case 158:
	switch( (*p) ) {
		case 32: goto tr171;
		case 61: goto tr172;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr171;
	goto tr152;
case 159:
	switch( (*p) ) {
		case 34: goto tr173;
		case 39: goto tr173;
	}
	goto tr152;
case 160:
	switch( (*p) ) {
		case 34: goto tr152;
		case 39: goto tr152;
	}
	goto tr174;
case 161:
	switch( (*p) ) {
		case 34: goto tr175;
		case 39: goto tr175;
	}
	goto tr174;
case 277:
	switch( (*p) ) {
		case 32: goto tr304;
		case 60: goto tr286;
		case 99: goto tr287;
		case 105: goto tr288;
		case 107: goto tr171;
		case 108: goto tr289;
		case 116: goto tr290;
		case 117: goto tr291;
		case 118: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr304;
	goto tr152;
case 162:
	switch( (*p) ) {
		case 97: goto tr176;
		case 111: goto tr177;
	}
	goto tr152;
case 163:
	if ( (*p) == 116 )
		goto tr178;
	goto tr152;
case 164:
	if ( (*p) == 61 )
		goto tr179;
	goto tr152;
case 165:
	switch( (*p) ) {
		case 34: goto tr180;
		case 39: goto tr180;
	}
	goto tr152;
case 166:
	if ( (*p) == 45 )
		goto tr181;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr182;
	goto tr152;
case 167:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr182;
	goto tr152;
case 168:
	switch( (*p) ) {
		case 34: goto tr183;
		case 39: goto tr183;
		case 46: goto tr184;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr182;
	goto tr152;
case 169:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr185;
	goto tr152;
case 170:
	switch( (*p) ) {
		case 34: goto tr183;
		case 39: goto tr183;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr185;
	goto tr152;
case 171:
	if ( (*p) == 110 )
		goto tr186;
	goto tr152;
case 172:
	if ( (*p) == 61 )
		goto tr187;
	goto tr152;
case 173:
	switch( (*p) ) {
		case 34: goto tr188;
		case 39: goto tr188;
	}
	goto tr152;
case 174:
	if ( (*p) == 45 )
		goto tr189;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr190;
	goto tr152;
case 175:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr190;
	goto tr152;
case 176:
	switch( (*p) ) {
		case 34: goto tr191;
		case 39: goto tr191;
		case 46: goto tr192;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr190;
	goto tr152;
case 177:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr193;
	goto tr152;
case 178:
	switch( (*p) ) {
		case 34: goto tr191;
		case 39: goto tr191;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr193;
	goto tr152;
case 179:
	if ( (*p) == 105 )
		goto tr194;
	goto tr152;
case 180:
	if ( (*p) == 109 )
		goto tr195;
	goto tr152;
case 181:
	if ( (*p) == 101 )
		goto tr196;
	goto tr152;
case 182:
	if ( (*p) == 115 )
		goto tr197;
	goto tr152;
case 183:
	if ( (*p) == 116 )
		goto tr198;
	goto tr152;
case 184:
	if ( (*p) == 97 )
		goto tr199;
	goto tr152;
case 185:
	if ( (*p) == 109 )
		goto tr200;
	goto tr152;
case 186:
	if ( (*p) == 112 )
		goto tr201;
	goto tr152;
case 187:
	if ( (*p) == 61 )
		goto tr202;
	goto tr152;
case 188:
	switch( (*p) ) {
		case 34: goto tr203;
		case 39: goto tr203;
	}
	goto tr152;
case 189:
	switch( (*p) ) {
		case 45: goto tr204;
		case 84: goto tr204;
		case 90: goto tr204;
	}
	if ( 48 <= (*p) && (*p) <= 58 )
		goto tr204;
	goto tr152;
case 190:
	switch( (*p) ) {
		case 34: goto tr205;
		case 39: goto tr205;
		case 45: goto tr204;
		case 84: goto tr204;
		case 90: goto tr204;
	}
	if ( 48 <= (*p) && (*p) <= 58 )
		goto tr204;
	goto tr152;
case 191:
	if ( (*p) == 105 )
		goto tr206;
	goto tr152;
case 192:
	if ( (*p) == 100 )
		goto tr207;
	goto tr152;
case 193:
	if ( (*p) == 61 )
		goto tr208;
	goto tr152;
case 194:
	switch( (*p) ) {
		case 34: goto tr209;
		case 39: goto tr209;
	}
	goto tr152;
case 195:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr210;
	goto tr152;
case 196:
	switch( (*p) ) {
		case 34: goto tr211;
		case 39: goto tr211;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr210;
	goto tr152;
case 197:
	switch( (*p) ) {
		case 32: goto tr212;
		case 61: goto tr213;
		case 101: goto tr214;
		case 105: goto tr215;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr212;
	goto tr152;
case 198:
	switch( (*p) ) {
		case 32: goto tr212;
		case 61: goto tr213;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr212;
	goto tr152;
case 199:
	switch( (*p) ) {
		case 34: goto tr216;
		case 39: goto tr216;
	}
	goto tr152;
case 200:
	switch( (*p) ) {
		case 34: goto tr152;
		case 39: goto tr152;
	}
	goto tr217;
case 201:
	switch( (*p) ) {
		case 34: goto tr218;
		case 39: goto tr218;
	}
	goto tr217;
case 278:
	switch( (*p) ) {
		case 32: goto tr305;
		case 60: goto tr286;
		case 99: goto tr287;
		case 105: goto tr288;
		case 107: goto tr171;
		case 108: goto tr289;
		case 116: goto tr290;
		case 117: goto tr291;
		case 118: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr305;
	goto tr152;
case 202:
	if ( (*p) == 114 )
		goto tr219;
	goto tr152;
case 203:
	if ( (*p) == 115 )
		goto tr220;
	goto tr152;
case 204:
	if ( (*p) == 105 )
		goto tr221;
	goto tr152;
case 205:
	if ( (*p) == 111 )
		goto tr222;
	goto tr152;
case 206:
	if ( (*p) == 110 )
		goto tr223;
	goto tr152;
case 207:
	if ( (*p) == 61 )
		goto tr224;
	goto tr152;
case 208:
	switch( (*p) ) {
		case 34: goto tr225;
		case 39: goto tr225;
	}
	goto tr152;
case 209:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr226;
	goto tr152;
case 210:
	switch( (*p) ) {
		case 34: goto tr227;
		case 39: goto tr227;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr226;
	goto tr152;
case 211:
	if ( (*p) == 115 )
		goto tr228;
	goto tr152;
case 212:
	if ( (*p) == 105 )
		goto tr229;
	goto tr152;
case 213:
	if ( (*p) == 98 )
		goto tr230;
	goto tr152;
case 214:
	if ( (*p) == 108 )
		goto tr231;
	goto tr152;
case 215:
	if ( (*p) == 101 )
		goto tr232;
	goto tr152;
case 216:
	if ( (*p) == 61 )
		goto tr233;
	goto tr152;
case 217:
	switch( (*p) ) {
		case 34: goto tr234;
		case 39: goto tr234;
	}
	goto tr152;
case 218:
	switch( (*p) ) {
		case 102: goto tr235;
		case 116: goto tr236;
	}
	goto tr152;
case 219:
	if ( (*p) == 97 )
		goto tr237;
	goto tr152;
case 220:
	if ( (*p) == 108 )
		goto tr238;
	goto tr152;
case 221:
	if ( (*p) == 115 )
		goto tr239;
	goto tr152;
case 222:
	if ( (*p) == 101 )
		goto tr240;
	goto tr152;
case 223:
	switch( (*p) ) {
		case 34: goto tr241;
		case 39: goto tr241;
	}
	goto tr152;
case 224:
	if ( (*p) == 114 )
		goto tr242;
	goto tr152;
case 225:
	if ( (*p) == 117 )
		goto tr243;
	goto tr152;
case 226:
	if ( (*p) == 101 )
		goto tr244;
	goto tr152;
case 227:
	if ( (*p) == 115 )
		goto tr245;
	goto tr1;
case 228:
	if ( (*p) == 109 )
		goto tr246;
	goto tr1;
case 229:
	goto tr247;
case 279:
	goto tr247;
case 230:
	switch( (*p) ) {
		case 47: goto tr6;
		case 63: goto tr248;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 231:
	if ( (*p) == 120 )
		goto tr249;
	goto tr1;
case 232:
	if ( (*p) == 109 )
		goto tr250;
	goto tr1;
case 233:
	if ( (*p) == 108 )
		goto tr251;
	goto tr1;
case 234:
	if ( (*p) == 32 )
		goto tr252;
	goto tr1;
case 235:
	if ( (*p) == 118 )
		goto tr253;
	goto tr1;
case 236:
	if ( (*p) == 101 )
		goto tr254;
	goto tr1;
case 237:
	if ( (*p) == 114 )
		goto tr255;
	goto tr1;
case 238:
	if ( (*p) == 115 )
		goto tr256;
	goto tr1;
case 239:
	if ( (*p) == 105 )
		goto tr257;
	goto tr1;
case 240:
	if ( (*p) == 111 )
		goto tr258;
	goto tr1;
case 241:
	if ( (*p) == 110 )
		goto tr259;
	goto tr1;
case 242:
	if ( (*p) == 61 )
		goto tr260;
	goto tr1;
case 243:
	if ( (*p) == 39 )
		goto tr261;
	goto tr1;
case 244:
	if ( (*p) == 49 )
		goto tr262;
	goto tr1;
case 245:
	if ( (*p) == 46 )
		goto tr263;
	goto tr1;
case 246:
	if ( (*p) == 48 )
		goto tr264;
	goto tr1;
case 247:
	if ( (*p) == 39 )
		goto tr265;
	goto tr1;
case 248:
	if ( (*p) == 32 )
		goto tr266;
	goto tr1;
case 249:
	if ( (*p) == 101 )
		goto tr267;
	goto tr1;
case 250:
	if ( (*p) == 110 )
		goto tr268;
	goto tr1;
case 251:
	if ( (*p) == 99 )
		goto tr269;
	goto tr1;
case 252:
	if ( (*p) == 111 )
		goto tr270;
	goto tr1;
case 253:
	if ( (*p) == 100 )
		goto tr271;
	goto tr1;
case 254:
	if ( (*p) == 105 )
		goto tr272;
	goto tr1;
case 255:
	if ( (*p) == 110 )
		goto tr273;
	goto tr1;
case 256:
	if ( (*p) == 103 )
		goto tr274;
	goto tr1;
case 257:
	if ( (*p) == 61 )
		goto tr275;
	goto tr1;
case 258:
	if ( (*p) == 39 )
		goto tr276;
	goto tr1;
case 259:
	if ( (*p) == 85 )
		goto tr277;
	goto tr1;
case 260:
	if ( (*p) == 84 )
		goto tr278;
	goto tr1;
case 261:
	if ( (*p) == 70 )
		goto tr279;
	goto tr1;
case 262:
	if ( (*p) == 45 )
		goto tr280;
	goto tr1;
case 263:
	if ( (*p) == 56 )
		goto tr281;
	goto tr1;
case 264:
	if ( (*p) == 39 )
		goto tr282;
	goto tr1;
case 265:
	if ( (*p) == 63 )
		goto tr283;
	goto tr1;
case 266:
	if ( (*p) == 62 )
		goto tr284;
	goto tr1;
case 280:
	goto tr1;
	}

	tr1: cs = 0; goto _again;
	tr152: cs = 0; goto f20;
	tr0: cs = 2; goto _again;
	tr2: cs = 3; goto _again;
	tr4: cs = 4; goto _again;
	tr6: cs = 5; goto _again;
	tr13: cs = 6; goto _again;
	tr16: cs = 7; goto _again;
	tr17: cs = 8; goto _again;
	tr14: cs = 9; goto _again;
	tr18: cs = 10; goto _again;
	tr19: cs = 11; goto _again;
	tr20: cs = 12; goto _again;
	tr21: cs = 13; goto _again;
	tr22: cs = 14; goto _again;
	tr23: cs = 15; goto _again;
	tr15: cs = 16; goto _again;
	tr24: cs = 17; goto _again;
	tr7: cs = 18; goto _again;
	tr25: cs = 19; goto _again;
	tr26: cs = 20; goto _again;
	tr27: cs = 21; goto _again;
	tr28: cs = 22; goto _again;
	tr52: cs = 23; goto _again;
	tr286: cs = 24; goto _again;
	tr8: cs = 25; goto _again;
	tr32: cs = 26; goto _again;
	tr33: cs = 27; goto _again;
	tr10: cs = 28; goto _again;
	tr35: cs = 29; goto _again;
	tr36: cs = 30; goto _again;
	tr37: cs = 31; goto _again;
	tr38: cs = 32; goto _again;
	tr39: cs = 33; goto _again;
	tr40: cs = 34; goto _again;
	tr11: cs = 35; goto _again;
	tr42: cs = 36; goto _again;
	tr12: cs = 37; goto _again;
	tr44: cs = 38; goto _again;
	tr300: cs = 39; goto _again;
	tr46: cs = 40; goto _again;
	tr47: cs = 41; goto _again;
	tr50: cs = 42; goto _again;
	tr51: cs = 43; goto _again;
	tr48: cs = 44; goto _again;
	tr53: cs = 45; goto _again;
	tr54: cs = 46; goto _again;
	tr55: cs = 47; goto _again;
	tr56: cs = 48; goto _again;
	tr57: cs = 49; goto _again;
	tr58: cs = 50; goto _again;
	tr49: cs = 51; goto _again;
	tr59: cs = 52; goto _again;
	tr294: cs = 53; goto _again;
	tr60: cs = 54; goto _again;
	tr61: cs = 55; goto _again;
	tr62: cs = 56; goto _again;
	tr63: cs = 57; goto _again;
	tr64: cs = 58; goto _again;
	tr65: cs = 59; goto _again;
	tr66: cs = 60; goto _again;
	tr67: cs = 61; goto _again;
	tr68: cs = 62; goto _again;
	tr69: cs = 63; goto f7;
	tr70: cs = 64; goto f8;
	tr295: cs = 65; goto _again;
	tr72: cs = 66; goto _again;
	tr73: cs = 67; goto _again;
	tr74: cs = 68; goto f7;
	tr75: cs = 69; goto f10;
	tr76: cs = 70; goto f8;
	tr78: cs = 71; goto _again;
	tr79: cs = 72; goto _again;
	tr80: cs = 73; goto _again;
	tr81: cs = 74; goto f8;
	tr296: cs = 75; goto _again;
	tr83: cs = 76; goto _again;
	tr85: cs = 77; goto _again;
	tr86: cs = 78; goto _again;
	tr87: cs = 79; goto f7;
	tr88: cs = 80; goto f8;
	tr89: cs = 81; goto f8;
	tr91: cs = 82; goto f8;
	tr92: cs = 83; goto f8;
	tr84: cs = 84; goto _again;
	tr93: cs = 85; goto _again;
	tr94: cs = 86; goto _again;
	tr95: cs = 87; goto f7;
	tr96: cs = 88; goto f8;
	tr97: cs = 89; goto f8;
	tr99: cs = 90; goto f8;
	tr100: cs = 91; goto f8;
	tr297: cs = 92; goto _again;
	tr101: cs = 93; goto _again;
	tr102: cs = 94; goto _again;
	tr103: cs = 95; goto _again;
	tr104: cs = 96; goto _again;
	tr105: cs = 97; goto _again;
	tr106: cs = 98; goto _again;
	tr107: cs = 99; goto _again;
	tr108: cs = 100; goto _again;
	tr109: cs = 101; goto _again;
	tr110: cs = 102; goto f7;
	tr111: cs = 103; goto f8;
	tr298: cs = 104; goto _again;
	tr113: cs = 105; goto _again;
	tr114: cs = 106; goto _again;
	tr115: cs = 107; goto _again;
	tr116: cs = 108; goto f7;
	tr117: cs = 109; goto f8;
	tr299: cs = 110; goto _again;
	tr119: cs = 111; goto _again;
	tr120: cs = 112; goto _again;
	tr123: cs = 113; goto _again;
	tr124: cs = 114; goto f8;
	tr121: cs = 115; goto _again;
	tr126: cs = 116; goto _again;
	tr127: cs = 117; goto _again;
	tr128: cs = 118; goto _again;
	tr129: cs = 119; goto _again;
	tr130: cs = 120; goto _again;
	tr131: cs = 121; goto _again;
	tr132: cs = 122; goto f7;
	tr133: cs = 123; goto f8;
	tr122: cs = 124; goto _again;
	tr135: cs = 125; goto _again;
	tr136: cs = 126; goto _again;
	tr137: cs = 127; goto _again;
	tr138: cs = 128; goto _again;
	tr139: cs = 129; goto _again;
	tr140: cs = 130; goto _again;
	tr141: cs = 131; goto f7;
	tr142: cs = 132; goto _again;
	tr144: cs = 133; goto _again;
	tr145: cs = 134; goto _again;
	tr146: cs = 135; goto _again;
	tr147: cs = 136; goto f18;
	tr151: cs = 136; goto f19;
	tr143: cs = 137; goto _again;
	tr149: cs = 138; goto _again;
	tr150: cs = 139; goto _again;
	tr287: cs = 140; goto _again;
	tr153: cs = 141; goto _again;
	tr154: cs = 142; goto _again;
	tr155: cs = 143; goto _again;
	tr156: cs = 144; goto _again;
	tr157: cs = 145; goto _again;
	tr158: cs = 146; goto _again;
	tr159: cs = 147; goto _again;
	tr160: cs = 148; goto _again;
	tr161: cs = 149; goto _again;
	tr162: cs = 150; goto f7;
	tr163: cs = 151; goto f8;
	tr288: cs = 152; goto _again;
	tr165: cs = 153; goto _again;
	tr166: cs = 154; goto _again;
	tr167: cs = 155; goto f7;
	tr168: cs = 156; goto f10;
	tr169: cs = 157; goto f8;
	tr171: cs = 158; goto _again;
	tr172: cs = 159; goto _again;
	tr173: cs = 160; goto _again;
	tr174: cs = 161; goto f8;
	tr289: cs = 162; goto _again;
	tr176: cs = 163; goto _again;
	tr178: cs = 164; goto _again;
	tr179: cs = 165; goto _again;
	tr180: cs = 166; goto f7;
	tr181: cs = 167; goto f8;
	tr182: cs = 168; goto f8;
	tr184: cs = 169; goto f8;
	tr185: cs = 170; goto f8;
	tr177: cs = 171; goto _again;
	tr186: cs = 172; goto _again;
	tr187: cs = 173; goto _again;
	tr188: cs = 174; goto f7;
	tr189: cs = 175; goto f8;
	tr190: cs = 176; goto f8;
	tr192: cs = 177; goto f8;
	tr193: cs = 178; goto f8;
	tr290: cs = 179; goto _again;
	tr194: cs = 180; goto _again;
	tr195: cs = 181; goto _again;
	tr196: cs = 182; goto _again;
	tr197: cs = 183; goto _again;
	tr198: cs = 184; goto _again;
	tr199: cs = 185; goto _again;
	tr200: cs = 186; goto _again;
	tr201: cs = 187; goto _again;
	tr202: cs = 188; goto _again;
	tr203: cs = 189; goto f7;
	tr204: cs = 190; goto f8;
	tr291: cs = 191; goto _again;
	tr206: cs = 192; goto _again;
	tr207: cs = 193; goto _again;
	tr208: cs = 194; goto _again;
	tr209: cs = 195; goto f7;
	tr210: cs = 196; goto f8;
	tr292: cs = 197; goto _again;
	tr212: cs = 198; goto _again;
	tr213: cs = 199; goto _again;
	tr216: cs = 200; goto _again;
	tr217: cs = 201; goto f8;
	tr214: cs = 202; goto _again;
	tr219: cs = 203; goto _again;
	tr220: cs = 204; goto _again;
	tr221: cs = 205; goto _again;
	tr222: cs = 206; goto _again;
	tr223: cs = 207; goto _again;
	tr224: cs = 208; goto _again;
	tr225: cs = 209; goto f7;
	tr226: cs = 210; goto f8;
	tr215: cs = 211; goto _again;
	tr228: cs = 212; goto _again;
	tr229: cs = 213; goto _again;
	tr230: cs = 214; goto _again;
	tr231: cs = 215; goto _again;
	tr232: cs = 216; goto _again;
	tr233: cs = 217; goto _again;
	tr234: cs = 218; goto f7;
	tr235: cs = 219; goto _again;
	tr237: cs = 220; goto _again;
	tr238: cs = 221; goto _again;
	tr239: cs = 222; goto _again;
	tr240: cs = 223; goto f18;
	tr244: cs = 223; goto f19;
	tr236: cs = 224; goto _again;
	tr242: cs = 225; goto _again;
	tr243: cs = 226; goto _again;
	tr9: cs = 227; goto _again;
	tr245: cs = 228; goto _again;
	tr246: cs = 229; goto _again;
	tr3: cs = 230; goto _again;
	tr248: cs = 231; goto _again;
	tr249: cs = 232; goto _again;
	tr250: cs = 233; goto _again;
	tr251: cs = 234; goto _again;
	tr252: cs = 235; goto _again;
	tr253: cs = 236; goto _again;
	tr254: cs = 237; goto _again;
	tr255: cs = 238; goto _again;
	tr256: cs = 239; goto _again;
	tr257: cs = 240; goto _again;
	tr258: cs = 241; goto _again;
	tr259: cs = 242; goto _again;
	tr260: cs = 243; goto _again;
	tr261: cs = 244; goto _again;
	tr262: cs = 245; goto _again;
	tr263: cs = 246; goto _again;
	tr264: cs = 247; goto _again;
	tr265: cs = 248; goto _again;
	tr266: cs = 249; goto _again;
	tr267: cs = 250; goto _again;
	tr268: cs = 251; goto _again;
	tr269: cs = 252; goto _again;
	tr270: cs = 253; goto _again;
	tr271: cs = 254; goto _again;
	tr272: cs = 255; goto _again;
	tr273: cs = 256; goto _again;
	tr274: cs = 257; goto _again;
	tr275: cs = 258; goto _again;
	tr276: cs = 259; goto _again;
	tr277: cs = 260; goto _again;
	tr278: cs = 261; goto _again;
	tr279: cs = 262; goto _again;
	tr280: cs = 263; goto _again;
	tr281: cs = 264; goto _again;
	tr282: cs = 265; goto _again;
	tr283: cs = 266; goto _again;
	tr5: cs = 267; goto f0;
	tr285: cs = 267; goto f12;
	tr29: cs = 268; goto f1;
	tr31: cs = 268; goto f2;
	tr34: cs = 268; goto f3;
	tr41: cs = 268; goto f4;
	tr43: cs = 268; goto f5;
	tr45: cs = 268; goto f6;
	tr71: cs = 269; goto f9;
	tr77: cs = 269; goto f11;
	tr148: cs = 269; goto f12;
	tr90: cs = 269; goto f13;
	tr98: cs = 269; goto f14;
	tr112: cs = 269; goto f15;
	tr118: cs = 269; goto f16;
	tr134: cs = 269; goto f17;
	tr293: cs = 270; goto f12;
	tr30: cs = 271; goto f0;
	tr301: cs = 271; goto f12;
	tr82: cs = 272; goto f12;
	tr302: cs = 273; goto f21;
	tr125: cs = 274; goto f12;
	tr303: cs = 275; goto f22;
	tr164: cs = 276; goto f9;
	tr170: cs = 276; goto f11;
	tr241: cs = 276; goto f12;
	tr183: cs = 276; goto f13;
	tr191: cs = 276; goto f14;
	tr205: cs = 276; goto f15;
	tr211: cs = 276; goto f16;
	tr227: cs = 276; goto f17;
	tr175: cs = 277; goto f12;
	tr304: cs = 277; goto f21;
	tr218: cs = 278; goto f12;
	tr305: cs = 278; goto f22;
	tr247: cs = 279; goto f12;
	tr284: cs = 280; goto f12;

f20:
#line 5 "indexer.rl"
	{
       cerr <<"an error has occured"  << endl;            
       res = 10;
}
	goto _again;
f7:
#line 109 "indexer.rl"
	{
     currenttoken.clear();  
}
	goto _again;
f8:
#line 113 "indexer.rl"
	{
     currenttoken.push_back((*p));
}
	goto _again;
f10:
#line 117 "indexer.rl"
	{
       cerr << (*p) << endl;
     currenttoken.push_back((*p));
}
	goto _again;
f19:
#line 185 "indexer.rl"
	{
     world.set_current_vis(1);
}
	goto _again;
f18:
#line 188 "indexer.rl"
	{
     world.set_current_vis(0);
}
	goto _again;
f12:
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f0:
#line 84 "indexer.rl"
	{
//		cerr << "end element " << endl;
		world.finish_current_object();

                }
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f9:
#line 141 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f17:
#line 152 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f16:
#line 163 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_uid(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f15:
#line 174 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "timestamp " << currenttoken << endl;
     world.set_current_ts(currenttoken.c_str());
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f22:
#line 208 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_val(currenttoken.c_str());
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f21:
#line 214 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f13:
#line 240 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 250 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f3:
#line 11 "indexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f6:
#line 17 "indexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f4:
#line 23 "indexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f5:
#line 29 "indexer.rl"
	{
       world.set_current_element_type_tag();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f2:
#line 35 "indexer.rl"
	{
       world.set_current_element_type_nd();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f1:
#line 40 "indexer.rl"
	{
       world.set_current_element_type_member();
       }
#line 101 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 312 "indexer.rl"
	{ res = 1;      }
	goto _again;
f11:
#line 127 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 274 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
#line 312 "indexer.rl"
	{ res = 1;      }
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
	case 21:
#line 5 "indexer.rl"
	{
       cerr <<"an error has occured"  << endl;            
       res = 10;
}
	break;
#line 2118 "indexer.c"
	}
	}

	_out: {}
	}

#line 332 "indexer.rl"


  return res;
}

