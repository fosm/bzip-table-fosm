
#line 1 "indexer.rl"


#line 367 "indexer.rl"



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
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 27, 27, 27, 27, 27, 
	27, 27, 27, 0, 0, 0, 0, 0, 
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


#line 370 "indexer.rl"

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
     
  
#line 75 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 384 "indexer.rl"
  
#line 82 "indexer.c"
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
case 299:
	if ( (*p) == 32 )
		goto tr319;
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr319;
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
case 300:
	switch( (*p) ) {
		case 32: goto tr165;
		case 60: goto tr320;
		case 99: goto tr321;
		case 105: goto tr322;
		case 107: goto tr188;
		case 108: goto tr323;
		case 116: goto tr324;
		case 117: goto tr325;
		case 118: goto tr326;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr165;
	goto tr169;
case 301:
	switch( (*p) ) {
		case 32: goto tr327;
		case 60: goto tr320;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr327;
	goto tr1;
case 302:
	switch( (*p) ) {
		case 32: goto tr327;
		case 47: goto tr52;
		case 60: goto tr334;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr327;
	goto tr1;
case 23:
	if ( (*p) == 62 )
		goto tr30;
	goto tr1;
case 303:
	switch( (*p) ) {
		case 32: goto tr335;
		case 60: goto tr320;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr335;
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
case 304:
	switch( (*p) ) {
		case 32: goto tr336;
		case 60: goto tr320;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr336;
	goto tr1;
case 305:
	switch( (*p) ) {
		case 32: goto tr336;
		case 47: goto tr52;
		case 60: goto tr334;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr336;
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
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr111;
	goto tr1;
case 103:
	if ( (*p) == 45 )
		goto tr112;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr111;
	goto tr1;
case 104:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr113;
	goto tr1;
case 105:
	if ( (*p) == 45 )
		goto tr114;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr113;
	goto tr1;
case 106:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr115;
	goto tr1;
case 107:
	if ( (*p) == 84 )
		goto tr116;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr115;
	goto tr1;
case 108:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr117;
	goto tr1;
case 109:
	if ( (*p) == 58 )
		goto tr118;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr117;
	goto tr1;
case 110:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr119;
	goto tr1;
case 111:
	if ( (*p) == 58 )
		goto tr120;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr119;
	goto tr1;
case 112:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr121;
	goto tr1;
case 113:
	if ( (*p) == 90 )
		goto tr122;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr121;
	goto tr1;
case 114:
	switch( (*p) ) {
		case 105: goto tr123;
		case 115: goto tr124;
	}
	goto tr1;
case 115:
	if ( (*p) == 100 )
		goto tr125;
	goto tr1;
case 116:
	if ( (*p) == 61 )
		goto tr126;
	goto tr1;
case 117:
	switch( (*p) ) {
		case 34: goto tr127;
		case 39: goto tr127;
	}
	goto tr1;
case 118:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr128;
	goto tr1;
case 119:
	switch( (*p) ) {
		case 34: goto tr129;
		case 39: goto tr129;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr128;
	goto tr1;
case 120:
	if ( (*p) == 101 )
		goto tr130;
	goto tr1;
case 121:
	if ( (*p) == 114 )
		goto tr131;
	goto tr1;
case 122:
	if ( (*p) == 61 )
		goto tr132;
	goto tr1;
case 123:
	switch( (*p) ) {
		case 34: goto tr133;
		case 39: goto tr133;
	}
	goto tr1;
case 124:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr134;
case 125:
	switch( (*p) ) {
		case 34: goto tr135;
		case 39: goto tr135;
	}
	goto tr134;
case 126:
	switch( (*p) ) {
		case 32: goto tr136;
		case 61: goto tr137;
		case 101: goto tr138;
		case 105: goto tr139;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr136;
	goto tr1;
case 127:
	switch( (*p) ) {
		case 32: goto tr136;
		case 61: goto tr137;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr136;
	goto tr1;
case 128:
	switch( (*p) ) {
		case 34: goto tr140;
		case 39: goto tr140;
	}
	goto tr1;
case 129:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr141;
case 130:
	switch( (*p) ) {
		case 34: goto tr142;
		case 39: goto tr142;
	}
	goto tr141;
case 306:
	switch( (*p) ) {
		case 32: goto tr337;
		case 60: goto tr320;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr337;
	goto tr1;
case 307:
	switch( (*p) ) {
		case 32: goto tr337;
		case 47: goto tr52;
		case 60: goto tr334;
		case 99: goto tr328;
		case 105: goto tr329;
		case 107: goto tr78;
		case 108: goto tr330;
		case 116: goto tr331;
		case 117: goto tr332;
		case 118: goto tr333;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr337;
	goto tr1;
case 131:
	if ( (*p) == 114 )
		goto tr143;
	goto tr1;
case 132:
	if ( (*p) == 115 )
		goto tr144;
	goto tr1;
case 133:
	if ( (*p) == 105 )
		goto tr145;
	goto tr1;
case 134:
	if ( (*p) == 111 )
		goto tr146;
	goto tr1;
case 135:
	if ( (*p) == 110 )
		goto tr147;
	goto tr1;
case 136:
	if ( (*p) == 61 )
		goto tr148;
	goto tr1;
case 137:
	switch( (*p) ) {
		case 34: goto tr149;
		case 39: goto tr149;
	}
	goto tr1;
case 138:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr150;
	goto tr1;
case 139:
	switch( (*p) ) {
		case 34: goto tr151;
		case 39: goto tr151;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr150;
	goto tr1;
case 140:
	if ( (*p) == 115 )
		goto tr152;
	goto tr1;
case 141:
	if ( (*p) == 105 )
		goto tr153;
	goto tr1;
case 142:
	if ( (*p) == 98 )
		goto tr154;
	goto tr1;
case 143:
	if ( (*p) == 108 )
		goto tr155;
	goto tr1;
case 144:
	if ( (*p) == 101 )
		goto tr156;
	goto tr1;
case 145:
	if ( (*p) == 61 )
		goto tr157;
	goto tr1;
case 146:
	switch( (*p) ) {
		case 34: goto tr158;
		case 39: goto tr158;
	}
	goto tr1;
case 147:
	switch( (*p) ) {
		case 102: goto tr159;
		case 116: goto tr160;
	}
	goto tr1;
case 148:
	if ( (*p) == 97 )
		goto tr161;
	goto tr1;
case 149:
	if ( (*p) == 108 )
		goto tr162;
	goto tr1;
case 150:
	if ( (*p) == 115 )
		goto tr163;
	goto tr1;
case 151:
	if ( (*p) == 101 )
		goto tr164;
	goto tr1;
case 152:
	switch( (*p) ) {
		case 34: goto tr165;
		case 39: goto tr165;
	}
	goto tr1;
case 153:
	if ( (*p) == 114 )
		goto tr166;
	goto tr1;
case 154:
	if ( (*p) == 117 )
		goto tr167;
	goto tr1;
case 155:
	if ( (*p) == 101 )
		goto tr168;
	goto tr1;
case 156:
	if ( (*p) == 104 )
		goto tr170;
	goto tr169;
case 157:
	if ( (*p) == 97 )
		goto tr171;
	goto tr169;
case 158:
	if ( (*p) == 110 )
		goto tr172;
	goto tr169;
case 159:
	if ( (*p) == 103 )
		goto tr173;
	goto tr169;
case 160:
	if ( (*p) == 101 )
		goto tr174;
	goto tr169;
case 161:
	if ( (*p) == 115 )
		goto tr175;
	goto tr169;
case 162:
	if ( (*p) == 101 )
		goto tr176;
	goto tr169;
case 163:
	if ( (*p) == 116 )
		goto tr177;
	goto tr169;
case 164:
	if ( (*p) == 61 )
		goto tr178;
	goto tr169;
case 165:
	switch( (*p) ) {
		case 34: goto tr179;
		case 39: goto tr179;
	}
	goto tr169;
case 166:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr180;
	goto tr169;
case 167:
	switch( (*p) ) {
		case 34: goto tr181;
		case 39: goto tr181;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr180;
	goto tr169;
case 308:
	switch( (*p) ) {
		case 32: goto tr275;
		case 60: goto tr320;
		case 99: goto tr321;
		case 105: goto tr322;
		case 107: goto tr188;
		case 108: goto tr323;
		case 116: goto tr324;
		case 117: goto tr325;
		case 118: goto tr326;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr275;
	goto tr169;
case 168:
	if ( (*p) == 100 )
		goto tr182;
	goto tr169;
case 169:
	if ( (*p) == 61 )
		goto tr183;
	goto tr169;
case 170:
	switch( (*p) ) {
		case 34: goto tr184;
		case 39: goto tr184;
	}
	goto tr169;
case 171:
	if ( (*p) == 45 )
		goto tr185;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr186;
	goto tr169;
case 172:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr186;
	goto tr169;
case 173:
	switch( (*p) ) {
		case 34: goto tr187;
		case 39: goto tr187;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr186;
	goto tr169;
case 174:
	switch( (*p) ) {
		case 32: goto tr188;
		case 61: goto tr189;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr188;
	goto tr169;
case 175:
	switch( (*p) ) {
		case 34: goto tr190;
		case 39: goto tr190;
	}
	goto tr169;
case 176:
	switch( (*p) ) {
		case 34: goto tr169;
		case 39: goto tr169;
	}
	goto tr191;
case 177:
	switch( (*p) ) {
		case 34: goto tr192;
		case 39: goto tr192;
	}
	goto tr191;
case 309:
	switch( (*p) ) {
		case 32: goto tr338;
		case 60: goto tr320;
		case 99: goto tr321;
		case 105: goto tr322;
		case 107: goto tr188;
		case 108: goto tr323;
		case 116: goto tr324;
		case 117: goto tr325;
		case 118: goto tr326;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr338;
	goto tr169;
case 178:
	switch( (*p) ) {
		case 97: goto tr193;
		case 111: goto tr194;
	}
	goto tr169;
case 179:
	if ( (*p) == 116 )
		goto tr195;
	goto tr169;
case 180:
	if ( (*p) == 61 )
		goto tr196;
	goto tr169;
case 181:
	switch( (*p) ) {
		case 34: goto tr197;
		case 39: goto tr197;
	}
	goto tr169;
case 182:
	if ( (*p) == 45 )
		goto tr198;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr199;
	goto tr169;
case 183:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr199;
	goto tr169;
case 184:
	switch( (*p) ) {
		case 34: goto tr200;
		case 39: goto tr200;
		case 46: goto tr201;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr199;
	goto tr169;
case 185:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr202;
	goto tr169;
case 186:
	switch( (*p) ) {
		case 34: goto tr200;
		case 39: goto tr200;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr202;
	goto tr169;
case 187:
	if ( (*p) == 110 )
		goto tr203;
	goto tr169;
case 188:
	if ( (*p) == 61 )
		goto tr204;
	goto tr169;
case 189:
	switch( (*p) ) {
		case 34: goto tr205;
		case 39: goto tr205;
	}
	goto tr169;
case 190:
	if ( (*p) == 45 )
		goto tr206;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr207;
	goto tr169;
case 191:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr207;
	goto tr169;
case 192:
	switch( (*p) ) {
		case 34: goto tr208;
		case 39: goto tr208;
		case 46: goto tr209;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr207;
	goto tr169;
case 193:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr210;
	goto tr169;
case 194:
	switch( (*p) ) {
		case 34: goto tr208;
		case 39: goto tr208;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr210;
	goto tr169;
case 195:
	if ( (*p) == 105 )
		goto tr211;
	goto tr169;
case 196:
	if ( (*p) == 109 )
		goto tr212;
	goto tr169;
case 197:
	if ( (*p) == 101 )
		goto tr213;
	goto tr169;
case 198:
	if ( (*p) == 115 )
		goto tr214;
	goto tr169;
case 199:
	if ( (*p) == 116 )
		goto tr215;
	goto tr169;
case 200:
	if ( (*p) == 97 )
		goto tr216;
	goto tr169;
case 201:
	if ( (*p) == 109 )
		goto tr217;
	goto tr169;
case 202:
	if ( (*p) == 112 )
		goto tr218;
	goto tr169;
case 203:
	if ( (*p) == 61 )
		goto tr219;
	goto tr169;
case 204:
	switch( (*p) ) {
		case 34: goto tr220;
		case 39: goto tr220;
	}
	goto tr169;
case 205:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr221;
	goto tr169;
case 206:
	if ( (*p) == 45 )
		goto tr222;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr221;
	goto tr169;
case 207:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr223;
	goto tr169;
case 208:
	if ( (*p) == 45 )
		goto tr224;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr223;
	goto tr169;
case 209:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr225;
	goto tr169;
case 210:
	if ( (*p) == 84 )
		goto tr226;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr225;
	goto tr169;
case 211:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr227;
	goto tr169;
case 212:
	if ( (*p) == 58 )
		goto tr228;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr227;
	goto tr169;
case 213:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr229;
	goto tr169;
case 214:
	if ( (*p) == 58 )
		goto tr230;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr229;
	goto tr169;
case 215:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr231;
	goto tr169;
case 216:
	if ( (*p) == 90 )
		goto tr232;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr231;
	goto tr169;
case 217:
	switch( (*p) ) {
		case 105: goto tr233;
		case 115: goto tr234;
	}
	goto tr169;
case 218:
	if ( (*p) == 100 )
		goto tr235;
	goto tr169;
case 219:
	if ( (*p) == 61 )
		goto tr236;
	goto tr169;
case 220:
	switch( (*p) ) {
		case 34: goto tr237;
		case 39: goto tr237;
	}
	goto tr169;
case 221:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr238;
	goto tr169;
case 222:
	switch( (*p) ) {
		case 34: goto tr239;
		case 39: goto tr239;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr238;
	goto tr169;
case 223:
	if ( (*p) == 101 )
		goto tr240;
	goto tr169;
case 224:
	if ( (*p) == 114 )
		goto tr241;
	goto tr169;
case 225:
	if ( (*p) == 61 )
		goto tr242;
	goto tr169;
case 226:
	switch( (*p) ) {
		case 34: goto tr243;
		case 39: goto tr243;
	}
	goto tr169;
case 227:
	switch( (*p) ) {
		case 34: goto tr169;
		case 39: goto tr169;
	}
	goto tr244;
case 228:
	switch( (*p) ) {
		case 34: goto tr245;
		case 39: goto tr245;
	}
	goto tr244;
case 229:
	switch( (*p) ) {
		case 32: goto tr246;
		case 61: goto tr247;
		case 101: goto tr248;
		case 105: goto tr249;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr246;
	goto tr169;
case 230:
	switch( (*p) ) {
		case 32: goto tr246;
		case 61: goto tr247;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr246;
	goto tr169;
case 231:
	switch( (*p) ) {
		case 34: goto tr250;
		case 39: goto tr250;
	}
	goto tr169;
case 232:
	switch( (*p) ) {
		case 34: goto tr169;
		case 39: goto tr169;
	}
	goto tr251;
case 233:
	switch( (*p) ) {
		case 34: goto tr252;
		case 39: goto tr252;
	}
	goto tr251;
case 310:
	switch( (*p) ) {
		case 32: goto tr339;
		case 60: goto tr320;
		case 99: goto tr321;
		case 105: goto tr322;
		case 107: goto tr188;
		case 108: goto tr323;
		case 116: goto tr324;
		case 117: goto tr325;
		case 118: goto tr326;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr339;
	goto tr169;
case 234:
	if ( (*p) == 114 )
		goto tr253;
	goto tr169;
case 235:
	if ( (*p) == 115 )
		goto tr254;
	goto tr169;
case 236:
	if ( (*p) == 105 )
		goto tr255;
	goto tr169;
case 237:
	if ( (*p) == 111 )
		goto tr256;
	goto tr169;
case 238:
	if ( (*p) == 110 )
		goto tr257;
	goto tr169;
case 239:
	if ( (*p) == 61 )
		goto tr258;
	goto tr169;
case 240:
	switch( (*p) ) {
		case 34: goto tr259;
		case 39: goto tr259;
	}
	goto tr169;
case 241:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr260;
	goto tr169;
case 242:
	switch( (*p) ) {
		case 34: goto tr261;
		case 39: goto tr261;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr260;
	goto tr169;
case 243:
	if ( (*p) == 115 )
		goto tr262;
	goto tr169;
case 244:
	if ( (*p) == 105 )
		goto tr263;
	goto tr169;
case 245:
	if ( (*p) == 98 )
		goto tr264;
	goto tr169;
case 246:
	if ( (*p) == 108 )
		goto tr265;
	goto tr169;
case 247:
	if ( (*p) == 101 )
		goto tr266;
	goto tr169;
case 248:
	if ( (*p) == 61 )
		goto tr267;
	goto tr169;
case 249:
	switch( (*p) ) {
		case 34: goto tr268;
		case 39: goto tr268;
	}
	goto tr169;
case 250:
	switch( (*p) ) {
		case 102: goto tr269;
		case 116: goto tr270;
	}
	goto tr169;
case 251:
	if ( (*p) == 97 )
		goto tr271;
	goto tr169;
case 252:
	if ( (*p) == 108 )
		goto tr272;
	goto tr169;
case 253:
	if ( (*p) == 115 )
		goto tr273;
	goto tr169;
case 254:
	if ( (*p) == 101 )
		goto tr274;
	goto tr169;
case 255:
	switch( (*p) ) {
		case 34: goto tr275;
		case 39: goto tr275;
	}
	goto tr169;
case 256:
	if ( (*p) == 114 )
		goto tr276;
	goto tr169;
case 257:
	if ( (*p) == 117 )
		goto tr277;
	goto tr169;
case 258:
	if ( (*p) == 101 )
		goto tr278;
	goto tr169;
case 259:
	if ( (*p) == 115 )
		goto tr279;
	goto tr1;
case 260:
	if ( (*p) == 109 )
		goto tr280;
	goto tr1;
case 261:
	goto tr281;
case 311:
	goto tr281;
case 262:
	switch( (*p) ) {
		case 47: goto tr6;
		case 63: goto tr282;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 263:
	if ( (*p) == 120 )
		goto tr283;
	goto tr1;
case 264:
	if ( (*p) == 109 )
		goto tr284;
	goto tr1;
case 265:
	if ( (*p) == 108 )
		goto tr285;
	goto tr1;
case 266:
	if ( (*p) == 32 )
		goto tr286;
	goto tr1;
case 267:
	if ( (*p) == 118 )
		goto tr287;
	goto tr1;
case 268:
	if ( (*p) == 101 )
		goto tr288;
	goto tr1;
case 269:
	if ( (*p) == 114 )
		goto tr289;
	goto tr1;
case 270:
	if ( (*p) == 115 )
		goto tr290;
	goto tr1;
case 271:
	if ( (*p) == 105 )
		goto tr291;
	goto tr1;
case 272:
	if ( (*p) == 111 )
		goto tr292;
	goto tr1;
case 273:
	if ( (*p) == 110 )
		goto tr293;
	goto tr1;
case 274:
	if ( (*p) == 61 )
		goto tr294;
	goto tr1;
case 275:
	if ( (*p) == 39 )
		goto tr295;
	goto tr1;
case 276:
	if ( (*p) == 49 )
		goto tr296;
	goto tr1;
case 277:
	if ( (*p) == 46 )
		goto tr297;
	goto tr1;
case 278:
	if ( (*p) == 48 )
		goto tr298;
	goto tr1;
case 279:
	if ( (*p) == 39 )
		goto tr299;
	goto tr1;
case 280:
	if ( (*p) == 32 )
		goto tr300;
	goto tr1;
case 281:
	if ( (*p) == 101 )
		goto tr301;
	goto tr1;
case 282:
	if ( (*p) == 110 )
		goto tr302;
	goto tr1;
case 283:
	if ( (*p) == 99 )
		goto tr303;
	goto tr1;
case 284:
	if ( (*p) == 111 )
		goto tr304;
	goto tr1;
case 285:
	if ( (*p) == 100 )
		goto tr305;
	goto tr1;
case 286:
	if ( (*p) == 105 )
		goto tr306;
	goto tr1;
case 287:
	if ( (*p) == 110 )
		goto tr307;
	goto tr1;
case 288:
	if ( (*p) == 103 )
		goto tr308;
	goto tr1;
case 289:
	if ( (*p) == 61 )
		goto tr309;
	goto tr1;
case 290:
	if ( (*p) == 39 )
		goto tr310;
	goto tr1;
case 291:
	if ( (*p) == 85 )
		goto tr311;
	goto tr1;
case 292:
	if ( (*p) == 84 )
		goto tr312;
	goto tr1;
case 293:
	if ( (*p) == 70 )
		goto tr313;
	goto tr1;
case 294:
	if ( (*p) == 45 )
		goto tr314;
	goto tr1;
case 295:
	if ( (*p) == 56 )
		goto tr315;
	goto tr1;
case 296:
	if ( (*p) == 39 )
		goto tr316;
	goto tr1;
case 297:
	if ( (*p) == 63 )
		goto tr317;
	goto tr1;
case 298:
	if ( (*p) == 62 )
		goto tr318;
	goto tr1;
case 312:
	goto tr1;
	}

	tr1: cs = 0; goto _again;
	tr169: cs = 0; goto f26;
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
	tr320: cs = 24; goto _again;
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
	tr334: cs = 39; goto _again;
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
	tr328: cs = 53; goto _again;
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
	tr329: cs = 65; goto _again;
	tr72: cs = 66; goto _again;
	tr73: cs = 67; goto _again;
	tr74: cs = 68; goto f7;
	tr75: cs = 69; goto f10;
	tr76: cs = 70; goto f8;
	tr78: cs = 71; goto _again;
	tr79: cs = 72; goto _again;
	tr80: cs = 73; goto _again;
	tr81: cs = 74; goto f8;
	tr330: cs = 75; goto _again;
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
	tr331: cs = 92; goto _again;
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
	tr112: cs = 104; goto f15;
	tr113: cs = 105; goto f8;
	tr114: cs = 106; goto f16;
	tr115: cs = 107; goto f8;
	tr116: cs = 108; goto f17;
	tr117: cs = 109; goto f8;
	tr118: cs = 110; goto f18;
	tr119: cs = 111; goto f8;
	tr120: cs = 112; goto f19;
	tr121: cs = 113; goto f8;
	tr332: cs = 114; goto _again;
	tr123: cs = 115; goto _again;
	tr125: cs = 116; goto _again;
	tr126: cs = 117; goto _again;
	tr127: cs = 118; goto f7;
	tr128: cs = 119; goto f8;
	tr124: cs = 120; goto _again;
	tr130: cs = 121; goto _again;
	tr131: cs = 122; goto _again;
	tr132: cs = 123; goto _again;
	tr133: cs = 124; goto f7;
	tr134: cs = 125; goto f8;
	tr333: cs = 126; goto _again;
	tr136: cs = 127; goto _again;
	tr137: cs = 128; goto _again;
	tr140: cs = 129; goto _again;
	tr141: cs = 130; goto f8;
	tr138: cs = 131; goto _again;
	tr143: cs = 132; goto _again;
	tr144: cs = 133; goto _again;
	tr145: cs = 134; goto _again;
	tr146: cs = 135; goto _again;
	tr147: cs = 136; goto _again;
	tr148: cs = 137; goto _again;
	tr149: cs = 138; goto f7;
	tr150: cs = 139; goto f8;
	tr139: cs = 140; goto _again;
	tr152: cs = 141; goto _again;
	tr153: cs = 142; goto _again;
	tr154: cs = 143; goto _again;
	tr155: cs = 144; goto _again;
	tr156: cs = 145; goto _again;
	tr157: cs = 146; goto _again;
	tr158: cs = 147; goto f7;
	tr159: cs = 148; goto _again;
	tr161: cs = 149; goto _again;
	tr162: cs = 150; goto _again;
	tr163: cs = 151; goto _again;
	tr164: cs = 152; goto f24;
	tr168: cs = 152; goto f25;
	tr160: cs = 153; goto _again;
	tr166: cs = 154; goto _again;
	tr167: cs = 155; goto _again;
	tr321: cs = 156; goto _again;
	tr170: cs = 157; goto _again;
	tr171: cs = 158; goto _again;
	tr172: cs = 159; goto _again;
	tr173: cs = 160; goto _again;
	tr174: cs = 161; goto _again;
	tr175: cs = 162; goto _again;
	tr176: cs = 163; goto _again;
	tr177: cs = 164; goto _again;
	tr178: cs = 165; goto _again;
	tr179: cs = 166; goto f7;
	tr180: cs = 167; goto f8;
	tr322: cs = 168; goto _again;
	tr182: cs = 169; goto _again;
	tr183: cs = 170; goto _again;
	tr184: cs = 171; goto f7;
	tr185: cs = 172; goto f10;
	tr186: cs = 173; goto f8;
	tr188: cs = 174; goto _again;
	tr189: cs = 175; goto _again;
	tr190: cs = 176; goto _again;
	tr191: cs = 177; goto f8;
	tr323: cs = 178; goto _again;
	tr193: cs = 179; goto _again;
	tr195: cs = 180; goto _again;
	tr196: cs = 181; goto _again;
	tr197: cs = 182; goto f7;
	tr198: cs = 183; goto f8;
	tr199: cs = 184; goto f8;
	tr201: cs = 185; goto f8;
	tr202: cs = 186; goto f8;
	tr194: cs = 187; goto _again;
	tr203: cs = 188; goto _again;
	tr204: cs = 189; goto _again;
	tr205: cs = 190; goto f7;
	tr206: cs = 191; goto f8;
	tr207: cs = 192; goto f8;
	tr209: cs = 193; goto f8;
	tr210: cs = 194; goto f8;
	tr324: cs = 195; goto _again;
	tr211: cs = 196; goto _again;
	tr212: cs = 197; goto _again;
	tr213: cs = 198; goto _again;
	tr214: cs = 199; goto _again;
	tr215: cs = 200; goto _again;
	tr216: cs = 201; goto _again;
	tr217: cs = 202; goto _again;
	tr218: cs = 203; goto _again;
	tr219: cs = 204; goto _again;
	tr220: cs = 205; goto f7;
	tr221: cs = 206; goto f8;
	tr222: cs = 207; goto f15;
	tr223: cs = 208; goto f8;
	tr224: cs = 209; goto f16;
	tr225: cs = 210; goto f8;
	tr226: cs = 211; goto f17;
	tr227: cs = 212; goto f8;
	tr228: cs = 213; goto f18;
	tr229: cs = 214; goto f8;
	tr230: cs = 215; goto f19;
	tr231: cs = 216; goto f8;
	tr325: cs = 217; goto _again;
	tr233: cs = 218; goto _again;
	tr235: cs = 219; goto _again;
	tr236: cs = 220; goto _again;
	tr237: cs = 221; goto f7;
	tr238: cs = 222; goto f8;
	tr234: cs = 223; goto _again;
	tr240: cs = 224; goto _again;
	tr241: cs = 225; goto _again;
	tr242: cs = 226; goto _again;
	tr243: cs = 227; goto f7;
	tr244: cs = 228; goto f8;
	tr326: cs = 229; goto _again;
	tr246: cs = 230; goto _again;
	tr247: cs = 231; goto _again;
	tr250: cs = 232; goto _again;
	tr251: cs = 233; goto f8;
	tr248: cs = 234; goto _again;
	tr253: cs = 235; goto _again;
	tr254: cs = 236; goto _again;
	tr255: cs = 237; goto _again;
	tr256: cs = 238; goto _again;
	tr257: cs = 239; goto _again;
	tr258: cs = 240; goto _again;
	tr259: cs = 241; goto f7;
	tr260: cs = 242; goto f8;
	tr249: cs = 243; goto _again;
	tr262: cs = 244; goto _again;
	tr263: cs = 245; goto _again;
	tr264: cs = 246; goto _again;
	tr265: cs = 247; goto _again;
	tr266: cs = 248; goto _again;
	tr267: cs = 249; goto _again;
	tr268: cs = 250; goto f7;
	tr269: cs = 251; goto _again;
	tr271: cs = 252; goto _again;
	tr272: cs = 253; goto _again;
	tr273: cs = 254; goto _again;
	tr274: cs = 255; goto f24;
	tr278: cs = 255; goto f25;
	tr270: cs = 256; goto _again;
	tr276: cs = 257; goto _again;
	tr277: cs = 258; goto _again;
	tr9: cs = 259; goto _again;
	tr279: cs = 260; goto _again;
	tr280: cs = 261; goto _again;
	tr3: cs = 262; goto _again;
	tr282: cs = 263; goto _again;
	tr283: cs = 264; goto _again;
	tr284: cs = 265; goto _again;
	tr285: cs = 266; goto _again;
	tr286: cs = 267; goto _again;
	tr287: cs = 268; goto _again;
	tr288: cs = 269; goto _again;
	tr289: cs = 270; goto _again;
	tr290: cs = 271; goto _again;
	tr291: cs = 272; goto _again;
	tr292: cs = 273; goto _again;
	tr293: cs = 274; goto _again;
	tr294: cs = 275; goto _again;
	tr295: cs = 276; goto _again;
	tr296: cs = 277; goto _again;
	tr297: cs = 278; goto _again;
	tr298: cs = 279; goto _again;
	tr299: cs = 280; goto _again;
	tr300: cs = 281; goto _again;
	tr301: cs = 282; goto _again;
	tr302: cs = 283; goto _again;
	tr303: cs = 284; goto _again;
	tr304: cs = 285; goto _again;
	tr305: cs = 286; goto _again;
	tr306: cs = 287; goto _again;
	tr307: cs = 288; goto _again;
	tr308: cs = 289; goto _again;
	tr309: cs = 290; goto _again;
	tr310: cs = 291; goto _again;
	tr311: cs = 292; goto _again;
	tr312: cs = 293; goto _again;
	tr313: cs = 294; goto _again;
	tr314: cs = 295; goto _again;
	tr315: cs = 296; goto _again;
	tr316: cs = 297; goto _again;
	tr317: cs = 298; goto _again;
	tr5: cs = 299; goto f0;
	tr319: cs = 299; goto f12;
	tr29: cs = 300; goto f1;
	tr31: cs = 300; goto f2;
	tr34: cs = 300; goto f3;
	tr41: cs = 300; goto f4;
	tr43: cs = 300; goto f5;
	tr45: cs = 300; goto f6;
	tr71: cs = 301; goto f9;
	tr77: cs = 301; goto f11;
	tr165: cs = 301; goto f12;
	tr90: cs = 301; goto f13;
	tr98: cs = 301; goto f14;
	tr122: cs = 301; goto f20;
	tr129: cs = 301; goto f21;
	tr135: cs = 301; goto f22;
	tr151: cs = 301; goto f23;
	tr327: cs = 302; goto f12;
	tr30: cs = 303; goto f0;
	tr335: cs = 303; goto f12;
	tr82: cs = 304; goto f12;
	tr336: cs = 305; goto f27;
	tr142: cs = 306; goto f12;
	tr337: cs = 307; goto f28;
	tr181: cs = 308; goto f9;
	tr187: cs = 308; goto f11;
	tr275: cs = 308; goto f12;
	tr200: cs = 308; goto f13;
	tr208: cs = 308; goto f14;
	tr232: cs = 308; goto f20;
	tr239: cs = 308; goto f21;
	tr245: cs = 308; goto f22;
	tr261: cs = 308; goto f23;
	tr192: cs = 309; goto f12;
	tr338: cs = 309; goto f27;
	tr252: cs = 310; goto f12;
	tr339: cs = 310; goto f28;
	tr281: cs = 311; goto f12;
	tr318: cs = 312; goto f12;

f26:
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
f15:
#line 174 "indexer.rl"
	{
     char *endptr;   // ignore  
     int year=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_year(year);
}
	goto _again;
f16:
#line 181 "indexer.rl"
	{
     char *endptr;   // ignore  
     int month=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";                       
     world.set_current_ts_month (month);
}
	goto _again;
f17:
#line 188 "indexer.rl"
	{
     char *endptr;   // ignore  
     int day=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_day (day);
}
	goto _again;
f18:
#line 195 "indexer.rl"
	{
     char *endptr;   // ignore  
     int hour=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_hour (hour);
}
	goto _again;
f19:
#line 202 "indexer.rl"
	{
     char *endptr;   // ignore  
     int minute=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_minute (minute);
}
	goto _again;
f25:
#line 237 "indexer.rl"
	{
     world.set_current_vis(1);
}
	goto _again;
f24:
#line 240 "indexer.rl"
	{
     world.set_current_vis(0);
}
	goto _again;
f12:
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f0:
#line 84 "indexer.rl"
	{
//		cerr << "end element " << endl;
		world.finish_current_object();

                }
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f9:
#line 141 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f23:
#line 152 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f21:
#line 163 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_uid(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f20:
#line 209 "indexer.rl"
	{
     char *endptr;   // ignore  
     int second=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_second (second);
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f22:
#line 249 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_user(currenttoken.c_str());
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f28:
#line 260 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_val(currenttoken.c_str());
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f27:
#line 266 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
     currenttoken="";
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f13:
#line 293 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 303 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
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
#line 365 "indexer.rl"
	{ res = 1;      }
	goto _again;
f11:
#line 127 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 327 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
#line 365 "indexer.rl"
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
	case 27:
#line 5 "indexer.rl"
	{
       cerr <<"an error has occured"  << endl;            
       res = 10;
}
	break;
#line 2357 "indexer.c"
	}
	}

	_out: {}
	}

#line 385 "indexer.rl"


  return res;
}

