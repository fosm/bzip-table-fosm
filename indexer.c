
#line 1 "indexer.rl"


#line 242 "indexer.rl"



#line 10 "indexer.c"
static const char _osmkeys_eof_actions[] = {
	0, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 0, 0, 0, 0, 0, 0, 0, 
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
	0, 0, 0
};

static const int osmkeys_start = 1;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 1;


#line 245 "indexer.rl"

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
     
  
#line 57 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 259 "indexer.rl"
  
#line 64 "indexer.c"
	{
	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	switch ( cs ) {
case 1:
	switch( (*p) ) {
		case 32: goto tr1;
		case 47: goto tr2;
		case 60: goto tr3;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1;
	goto tr0;
case 0:
	goto _out;
case 2:
	if ( (*p) == 62 )
		goto tr4;
	goto tr0;
case 167:
	switch( (*p) ) {
		case 32: goto tr175;
		case 47: goto tr2;
		case 60: goto tr3;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr175;
	goto tr0;
case 3:
	switch( (*p) ) {
		case 47: goto tr5;
		case 109: goto tr6;
		case 110: goto tr7;
		case 114: goto tr8;
		case 116: goto tr9;
		case 119: goto tr10;
	}
	goto tr0;
case 4:
	switch( (*p) ) {
		case 110: goto tr11;
		case 114: goto tr12;
		case 119: goto tr13;
	}
	goto tr0;
case 5:
	if ( (*p) == 111 )
		goto tr14;
	goto tr0;
case 6:
	if ( (*p) == 100 )
		goto tr15;
	goto tr0;
case 7:
	if ( (*p) == 101 )
		goto tr2;
	goto tr0;
case 8:
	if ( (*p) == 101 )
		goto tr16;
	goto tr0;
case 9:
	if ( (*p) == 108 )
		goto tr17;
	goto tr0;
case 10:
	if ( (*p) == 97 )
		goto tr18;
	goto tr0;
case 11:
	if ( (*p) == 116 )
		goto tr19;
	goto tr0;
case 12:
	if ( (*p) == 105 )
		goto tr20;
	goto tr0;
case 13:
	if ( (*p) == 111 )
		goto tr21;
	goto tr0;
case 14:
	if ( (*p) == 110 )
		goto tr2;
	goto tr0;
case 15:
	if ( (*p) == 97 )
		goto tr22;
	goto tr0;
case 16:
	if ( (*p) == 121 )
		goto tr2;
	goto tr0;
case 17:
	if ( (*p) == 101 )
		goto tr23;
	goto tr24;
case 18:
	if ( (*p) == 109 )
		goto tr25;
	goto tr24;
case 19:
	if ( (*p) == 98 )
		goto tr26;
	goto tr24;
case 20:
	if ( (*p) == 101 )
		goto tr27;
	goto tr24;
case 21:
	if ( (*p) == 114 )
		goto tr28;
	goto tr24;
case 168:
	switch( (*p) ) {
		case 32: goto tr176;
		case 47: goto tr2;
		case 60: goto tr3;
		case 99: goto tr177;
		case 105: goto tr178;
		case 107: goto tr132;
		case 108: goto tr179;
		case 114: goto tr180;
		case 116: goto tr181;
		case 117: goto tr182;
		case 118: goto tr183;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr176;
	goto tr0;
case 169:
	switch( (*p) ) {
		case 32: goto tr176;
		case 47: goto tr2;
		case 60: goto tr3;
		case 99: goto tr42;
		case 105: goto tr43;
		case 107: goto tr44;
		case 108: goto tr45;
		case 114: goto tr46;
		case 116: goto tr47;
		case 117: goto tr48;
		case 118: goto tr49;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr176;
	goto tr0;
case 22:
	if ( (*p) == 104 )
		goto tr29;
	goto tr24;
case 23:
	if ( (*p) == 97 )
		goto tr30;
	goto tr24;
case 24:
	if ( (*p) == 110 )
		goto tr31;
	goto tr24;
case 25:
	if ( (*p) == 103 )
		goto tr32;
	goto tr24;
case 26:
	if ( (*p) == 101 )
		goto tr33;
	goto tr24;
case 27:
	if ( (*p) == 115 )
		goto tr34;
	goto tr24;
case 28:
	if ( (*p) == 101 )
		goto tr35;
	goto tr24;
case 29:
	if ( (*p) == 116 )
		goto tr36;
	goto tr24;
case 30:
	if ( (*p) == 61 )
		goto tr37;
	goto tr24;
case 31:
	switch( (*p) ) {
		case 34: goto tr38;
		case 39: goto tr38;
	}
	goto tr24;
case 32:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr39;
	goto tr24;
case 33:
	switch( (*p) ) {
		case 34: goto tr40;
		case 39: goto tr40;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr39;
	goto tr24;
case 34:
	switch( (*p) ) {
		case 32: goto tr41;
		case 99: goto tr42;
		case 105: goto tr43;
		case 107: goto tr44;
		case 108: goto tr45;
		case 114: goto tr46;
		case 116: goto tr47;
		case 117: goto tr48;
		case 118: goto tr49;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr41;
	goto tr24;
case 35:
	switch( (*p) ) {
		case 32: goto tr41;
		case 47: goto tr50;
		case 60: goto tr51;
		case 99: goto tr42;
		case 105: goto tr43;
		case 107: goto tr44;
		case 108: goto tr45;
		case 114: goto tr46;
		case 116: goto tr47;
		case 117: goto tr48;
		case 118: goto tr49;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr41;
	goto tr24;
case 36:
	if ( (*p) == 62 )
		goto tr4;
	goto tr24;
case 37:
	if ( (*p) == 47 )
		goto tr52;
	goto tr24;
case 38:
	switch( (*p) ) {
		case 110: goto tr53;
		case 114: goto tr54;
		case 119: goto tr55;
	}
	goto tr24;
case 39:
	if ( (*p) == 111 )
		goto tr56;
	goto tr24;
case 40:
	if ( (*p) == 100 )
		goto tr57;
	goto tr24;
case 41:
	if ( (*p) == 101 )
		goto tr50;
	goto tr24;
case 42:
	if ( (*p) == 101 )
		goto tr58;
	goto tr24;
case 43:
	if ( (*p) == 108 )
		goto tr59;
	goto tr24;
case 44:
	if ( (*p) == 97 )
		goto tr60;
	goto tr24;
case 45:
	if ( (*p) == 116 )
		goto tr61;
	goto tr24;
case 46:
	if ( (*p) == 105 )
		goto tr62;
	goto tr24;
case 47:
	if ( (*p) == 111 )
		goto tr63;
	goto tr24;
case 48:
	if ( (*p) == 110 )
		goto tr50;
	goto tr24;
case 49:
	if ( (*p) == 97 )
		goto tr64;
	goto tr24;
case 50:
	if ( (*p) == 121 )
		goto tr50;
	goto tr24;
case 51:
	if ( (*p) == 100 )
		goto tr65;
	goto tr24;
case 52:
	if ( (*p) == 61 )
		goto tr66;
	goto tr24;
case 53:
	switch( (*p) ) {
		case 34: goto tr67;
		case 39: goto tr67;
	}
	goto tr24;
case 54:
	if ( (*p) == 45 )
		goto tr68;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr69;
	goto tr24;
case 55:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr69;
	goto tr24;
case 56:
	switch( (*p) ) {
		case 34: goto tr70;
		case 39: goto tr70;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr69;
	goto tr24;
case 57:
	if ( (*p) == 61 )
		goto tr71;
	goto tr24;
case 58:
	switch( (*p) ) {
		case 34: goto tr72;
		case 39: goto tr73;
	}
	goto tr24;
case 59:
	if ( (*p) == 34 )
		goto tr24;
	goto tr74;
case 60:
	if ( (*p) == 34 )
		goto tr75;
	goto tr74;
case 61:
	if ( (*p) == 39 )
		goto tr24;
	goto tr76;
case 62:
	if ( (*p) == 39 )
		goto tr75;
	goto tr76;
case 63:
	switch( (*p) ) {
		case 97: goto tr77;
		case 111: goto tr78;
	}
	goto tr24;
case 64:
	if ( (*p) == 116 )
		goto tr44;
	goto tr24;
case 65:
	if ( (*p) == 110 )
		goto tr44;
	goto tr24;
case 66:
	switch( (*p) ) {
		case 101: goto tr79;
		case 111: goto tr80;
	}
	goto tr24;
case 67:
	if ( (*p) == 102 )
		goto tr44;
	goto tr24;
case 68:
	if ( (*p) == 108 )
		goto tr81;
	goto tr24;
case 69:
	if ( (*p) == 101 )
		goto tr44;
	goto tr24;
case 70:
	switch( (*p) ) {
		case 105: goto tr82;
		case 121: goto tr83;
	}
	goto tr24;
case 71:
	if ( (*p) == 109 )
		goto tr84;
	goto tr24;
case 72:
	if ( (*p) == 101 )
		goto tr85;
	goto tr24;
case 73:
	if ( (*p) == 115 )
		goto tr86;
	goto tr24;
case 74:
	if ( (*p) == 116 )
		goto tr87;
	goto tr24;
case 75:
	if ( (*p) == 97 )
		goto tr88;
	goto tr24;
case 76:
	if ( (*p) == 109 )
		goto tr89;
	goto tr24;
case 77:
	if ( (*p) == 112 )
		goto tr44;
	goto tr24;
case 78:
	if ( (*p) == 112 )
		goto tr81;
	goto tr24;
case 79:
	switch( (*p) ) {
		case 105: goto tr90;
		case 115: goto tr91;
	}
	goto tr24;
case 80:
	if ( (*p) == 100 )
		goto tr44;
	goto tr24;
case 81:
	if ( (*p) == 101 )
		goto tr92;
	goto tr24;
case 82:
	if ( (*p) == 114 )
		goto tr44;
	goto tr24;
case 83:
	switch( (*p) ) {
		case 61: goto tr71;
		case 101: goto tr93;
		case 105: goto tr94;
	}
	goto tr24;
case 84:
	if ( (*p) == 114 )
		goto tr95;
	goto tr24;
case 85:
	if ( (*p) == 115 )
		goto tr96;
	goto tr24;
case 86:
	if ( (*p) == 105 )
		goto tr97;
	goto tr24;
case 87:
	if ( (*p) == 111 )
		goto tr98;
	goto tr24;
case 88:
	if ( (*p) == 110 )
		goto tr99;
	goto tr24;
case 89:
	if ( (*p) == 61 )
		goto tr100;
	goto tr24;
case 90:
	switch( (*p) ) {
		case 34: goto tr101;
		case 39: goto tr101;
	}
	goto tr24;
case 91:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr102;
	goto tr24;
case 92:
	switch( (*p) ) {
		case 34: goto tr103;
		case 39: goto tr103;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr102;
	goto tr24;
case 93:
	if ( (*p) == 115 )
		goto tr104;
	goto tr24;
case 94:
	if ( (*p) == 105 )
		goto tr105;
	goto tr24;
case 95:
	if ( (*p) == 98 )
		goto tr80;
	goto tr24;
case 96:
	if ( (*p) == 104 )
		goto tr106;
	goto tr24;
case 97:
	if ( (*p) == 97 )
		goto tr107;
	goto tr24;
case 98:
	if ( (*p) == 110 )
		goto tr108;
	goto tr24;
case 99:
	if ( (*p) == 103 )
		goto tr109;
	goto tr24;
case 100:
	if ( (*p) == 101 )
		goto tr110;
	goto tr24;
case 101:
	if ( (*p) == 115 )
		goto tr111;
	goto tr24;
case 102:
	if ( (*p) == 101 )
		goto tr112;
	goto tr24;
case 103:
	if ( (*p) == 116 )
		goto tr113;
	goto tr24;
case 104:
	if ( (*p) == 61 )
		goto tr114;
	goto tr24;
case 105:
	switch( (*p) ) {
		case 34: goto tr115;
		case 39: goto tr115;
	}
	goto tr24;
case 106:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr116;
	goto tr24;
case 107:
	switch( (*p) ) {
		case 34: goto tr117;
		case 39: goto tr117;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr116;
	goto tr24;
case 170:
	switch( (*p) ) {
		case 32: goto tr184;
		case 47: goto tr2;
		case 60: goto tr3;
		case 99: goto tr177;
		case 105: goto tr178;
		case 107: goto tr132;
		case 108: goto tr179;
		case 114: goto tr180;
		case 116: goto tr181;
		case 117: goto tr182;
		case 118: goto tr183;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr184;
	goto tr0;
case 108:
	if ( (*p) == 100 )
		goto tr118;
	goto tr24;
case 109:
	if ( (*p) == 61 )
		goto tr119;
	goto tr24;
case 110:
	switch( (*p) ) {
		case 34: goto tr120;
		case 39: goto tr120;
	}
	goto tr24;
case 111:
	if ( (*p) == 45 )
		goto tr121;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr122;
	goto tr24;
case 112:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr122;
	goto tr24;
case 113:
	switch( (*p) ) {
		case 34: goto tr123;
		case 39: goto tr123;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr122;
	goto tr24;
case 114:
	if ( (*p) == 61 )
		goto tr124;
	goto tr24;
case 115:
	switch( (*p) ) {
		case 34: goto tr125;
		case 39: goto tr126;
	}
	goto tr24;
case 116:
	if ( (*p) == 34 )
		goto tr24;
	goto tr127;
case 117:
	if ( (*p) == 34 )
		goto tr128;
	goto tr127;
case 118:
	if ( (*p) == 39 )
		goto tr24;
	goto tr129;
case 119:
	if ( (*p) == 39 )
		goto tr128;
	goto tr129;
case 120:
	switch( (*p) ) {
		case 97: goto tr130;
		case 111: goto tr131;
	}
	goto tr24;
case 121:
	if ( (*p) == 116 )
		goto tr132;
	goto tr24;
case 122:
	if ( (*p) == 110 )
		goto tr132;
	goto tr24;
case 123:
	switch( (*p) ) {
		case 101: goto tr133;
		case 111: goto tr134;
	}
	goto tr24;
case 124:
	if ( (*p) == 102 )
		goto tr132;
	goto tr24;
case 125:
	if ( (*p) == 108 )
		goto tr135;
	goto tr24;
case 126:
	if ( (*p) == 101 )
		goto tr132;
	goto tr24;
case 127:
	switch( (*p) ) {
		case 105: goto tr136;
		case 121: goto tr137;
	}
	goto tr24;
case 128:
	if ( (*p) == 109 )
		goto tr138;
	goto tr24;
case 129:
	if ( (*p) == 101 )
		goto tr139;
	goto tr24;
case 130:
	if ( (*p) == 115 )
		goto tr140;
	goto tr24;
case 131:
	if ( (*p) == 116 )
		goto tr141;
	goto tr24;
case 132:
	if ( (*p) == 97 )
		goto tr142;
	goto tr24;
case 133:
	if ( (*p) == 109 )
		goto tr143;
	goto tr24;
case 134:
	if ( (*p) == 112 )
		goto tr132;
	goto tr24;
case 135:
	if ( (*p) == 112 )
		goto tr135;
	goto tr24;
case 136:
	switch( (*p) ) {
		case 105: goto tr144;
		case 115: goto tr145;
	}
	goto tr24;
case 137:
	if ( (*p) == 100 )
		goto tr132;
	goto tr24;
case 138:
	if ( (*p) == 101 )
		goto tr146;
	goto tr24;
case 139:
	if ( (*p) == 114 )
		goto tr132;
	goto tr24;
case 140:
	switch( (*p) ) {
		case 61: goto tr124;
		case 101: goto tr147;
		case 105: goto tr148;
	}
	goto tr24;
case 141:
	if ( (*p) == 114 )
		goto tr149;
	goto tr24;
case 142:
	if ( (*p) == 115 )
		goto tr150;
	goto tr24;
case 143:
	if ( (*p) == 105 )
		goto tr151;
	goto tr24;
case 144:
	if ( (*p) == 111 )
		goto tr152;
	goto tr24;
case 145:
	if ( (*p) == 110 )
		goto tr153;
	goto tr24;
case 146:
	if ( (*p) == 61 )
		goto tr154;
	goto tr24;
case 147:
	switch( (*p) ) {
		case 34: goto tr155;
		case 39: goto tr155;
	}
	goto tr24;
case 148:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr156;
	goto tr24;
case 149:
	switch( (*p) ) {
		case 34: goto tr157;
		case 39: goto tr157;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr156;
	goto tr24;
case 150:
	if ( (*p) == 115 )
		goto tr158;
	goto tr24;
case 151:
	if ( (*p) == 105 )
		goto tr159;
	goto tr24;
case 152:
	if ( (*p) == 98 )
		goto tr134;
	goto tr24;
case 153:
	switch( (*p) ) {
		case 100: goto tr160;
		case 111: goto tr161;
	}
	goto tr24;
case 154:
	if ( (*p) == 100 )
		goto tr162;
	goto tr24;
case 155:
	if ( (*p) == 101 )
		goto tr163;
	goto tr24;
case 156:
	if ( (*p) == 101 )
		goto tr164;
	goto tr24;
case 157:
	if ( (*p) == 108 )
		goto tr165;
	goto tr24;
case 158:
	if ( (*p) == 97 )
		goto tr166;
	goto tr24;
case 159:
	if ( (*p) == 116 )
		goto tr167;
	goto tr24;
case 160:
	if ( (*p) == 105 )
		goto tr168;
	goto tr24;
case 161:
	if ( (*p) == 111 )
		goto tr169;
	goto tr24;
case 162:
	if ( (*p) == 110 )
		goto tr170;
	goto tr24;
case 163:
	if ( (*p) == 97 )
		goto tr171;
	goto tr24;
case 164:
	if ( (*p) == 103 )
		goto tr172;
	goto tr24;
case 165:
	if ( (*p) == 97 )
		goto tr173;
	goto tr24;
case 166:
	if ( (*p) == 121 )
		goto tr174;
	goto tr24;
	}

	tr24: cs = 0; goto _again;
	tr0: cs = 0; goto f0;
	tr1: cs = 1; goto _again;
	tr2: cs = 2; goto _again;
	tr3: cs = 3; goto _again;
	tr5: cs = 4; goto _again;
	tr11: cs = 5; goto _again;
	tr14: cs = 6; goto _again;
	tr15: cs = 7; goto _again;
	tr12: cs = 8; goto _again;
	tr16: cs = 9; goto _again;
	tr17: cs = 10; goto _again;
	tr18: cs = 11; goto _again;
	tr19: cs = 12; goto _again;
	tr20: cs = 13; goto _again;
	tr21: cs = 14; goto _again;
	tr13: cs = 15; goto _again;
	tr22: cs = 16; goto _again;
	tr6: cs = 17; goto _again;
	tr23: cs = 18; goto _again;
	tr25: cs = 19; goto _again;
	tr26: cs = 20; goto _again;
	tr27: cs = 21; goto _again;
	tr42: cs = 22; goto _again;
	tr29: cs = 23; goto _again;
	tr30: cs = 24; goto _again;
	tr31: cs = 25; goto _again;
	tr32: cs = 26; goto _again;
	tr33: cs = 27; goto _again;
	tr34: cs = 28; goto _again;
	tr35: cs = 29; goto _again;
	tr36: cs = 30; goto _again;
	tr37: cs = 31; goto _again;
	tr38: cs = 32; goto f3;
	tr39: cs = 33; goto f4;
	tr40: cs = 34; goto f5;
	tr70: cs = 34; goto f7;
	tr75: cs = 34; goto f8;
	tr103: cs = 34; goto f9;
	tr41: cs = 35; goto _again;
	tr50: cs = 36; goto _again;
	tr51: cs = 37; goto _again;
	tr52: cs = 38; goto _again;
	tr53: cs = 39; goto _again;
	tr56: cs = 40; goto _again;
	tr57: cs = 41; goto _again;
	tr54: cs = 42; goto _again;
	tr58: cs = 43; goto _again;
	tr59: cs = 44; goto _again;
	tr60: cs = 45; goto _again;
	tr61: cs = 46; goto _again;
	tr62: cs = 47; goto _again;
	tr63: cs = 48; goto _again;
	tr55: cs = 49; goto _again;
	tr64: cs = 50; goto _again;
	tr43: cs = 51; goto _again;
	tr65: cs = 52; goto _again;
	tr66: cs = 53; goto _again;
	tr67: cs = 54; goto f3;
	tr68: cs = 55; goto f6;
	tr69: cs = 56; goto f4;
	tr44: cs = 57; goto _again;
	tr71: cs = 58; goto _again;
	tr72: cs = 59; goto _again;
	tr74: cs = 60; goto _again;
	tr73: cs = 61; goto _again;
	tr76: cs = 62; goto _again;
	tr45: cs = 63; goto _again;
	tr77: cs = 64; goto _again;
	tr78: cs = 65; goto _again;
	tr46: cs = 66; goto _again;
	tr79: cs = 67; goto _again;
	tr80: cs = 68; goto _again;
	tr81: cs = 69; goto _again;
	tr47: cs = 70; goto _again;
	tr82: cs = 71; goto _again;
	tr84: cs = 72; goto _again;
	tr85: cs = 73; goto _again;
	tr86: cs = 74; goto _again;
	tr87: cs = 75; goto _again;
	tr88: cs = 76; goto _again;
	tr89: cs = 77; goto _again;
	tr83: cs = 78; goto _again;
	tr48: cs = 79; goto _again;
	tr90: cs = 80; goto _again;
	tr91: cs = 81; goto _again;
	tr92: cs = 82; goto _again;
	tr49: cs = 83; goto _again;
	tr93: cs = 84; goto _again;
	tr95: cs = 85; goto _again;
	tr96: cs = 86; goto _again;
	tr97: cs = 87; goto _again;
	tr98: cs = 88; goto _again;
	tr99: cs = 89; goto _again;
	tr100: cs = 90; goto _again;
	tr101: cs = 91; goto f3;
	tr102: cs = 92; goto f4;
	tr94: cs = 93; goto _again;
	tr104: cs = 94; goto _again;
	tr105: cs = 95; goto _again;
	tr177: cs = 96; goto _again;
	tr106: cs = 97; goto _again;
	tr107: cs = 98; goto _again;
	tr108: cs = 99; goto _again;
	tr109: cs = 100; goto _again;
	tr110: cs = 101; goto _again;
	tr111: cs = 102; goto _again;
	tr112: cs = 103; goto _again;
	tr113: cs = 104; goto _again;
	tr114: cs = 105; goto _again;
	tr115: cs = 106; goto f3;
	tr116: cs = 107; goto f4;
	tr178: cs = 108; goto _again;
	tr118: cs = 109; goto _again;
	tr119: cs = 110; goto _again;
	tr120: cs = 111; goto f3;
	tr121: cs = 112; goto f6;
	tr122: cs = 113; goto f4;
	tr132: cs = 114; goto _again;
	tr124: cs = 115; goto _again;
	tr125: cs = 116; goto _again;
	tr127: cs = 117; goto _again;
	tr126: cs = 118; goto _again;
	tr129: cs = 119; goto _again;
	tr179: cs = 120; goto _again;
	tr130: cs = 121; goto _again;
	tr131: cs = 122; goto _again;
	tr180: cs = 123; goto _again;
	tr133: cs = 124; goto _again;
	tr134: cs = 125; goto _again;
	tr135: cs = 126; goto _again;
	tr181: cs = 127; goto _again;
	tr136: cs = 128; goto _again;
	tr138: cs = 129; goto _again;
	tr139: cs = 130; goto _again;
	tr140: cs = 131; goto _again;
	tr141: cs = 132; goto _again;
	tr142: cs = 133; goto _again;
	tr143: cs = 134; goto _again;
	tr137: cs = 135; goto _again;
	tr182: cs = 136; goto _again;
	tr144: cs = 137; goto _again;
	tr145: cs = 138; goto _again;
	tr146: cs = 139; goto _again;
	tr183: cs = 140; goto _again;
	tr147: cs = 141; goto _again;
	tr149: cs = 142; goto _again;
	tr150: cs = 143; goto _again;
	tr151: cs = 144; goto _again;
	tr152: cs = 145; goto _again;
	tr153: cs = 146; goto _again;
	tr154: cs = 147; goto _again;
	tr155: cs = 148; goto f3;
	tr156: cs = 149; goto f4;
	tr148: cs = 150; goto _again;
	tr158: cs = 151; goto _again;
	tr159: cs = 152; goto _again;
	tr7: cs = 153; goto _again;
	tr161: cs = 154; goto _again;
	tr162: cs = 155; goto _again;
	tr8: cs = 156; goto _again;
	tr164: cs = 157; goto _again;
	tr165: cs = 158; goto _again;
	tr166: cs = 159; goto _again;
	tr167: cs = 160; goto _again;
	tr168: cs = 161; goto _again;
	tr169: cs = 162; goto _again;
	tr9: cs = 163; goto _again;
	tr171: cs = 164; goto _again;
	tr10: cs = 165; goto _again;
	tr173: cs = 166; goto _again;
	tr4: cs = 167; goto f1;
	tr175: cs = 167; goto f19;
	tr28: cs = 168; goto f2;
	tr160: cs = 168; goto f14;
	tr163: cs = 168; goto f15;
	tr170: cs = 168; goto f16;
	tr172: cs = 168; goto f17;
	tr174: cs = 168; goto f18;
	tr176: cs = 169; goto f19;
	tr117: cs = 170; goto f10;
	tr123: cs = 170; goto f11;
	tr128: cs = 170; goto f12;
	tr157: cs = 170; goto f13;
	tr184: cs = 170; goto f19;

f0:
#line 5 "indexer.rl"
	{
       cerr <<"an error has occured"  << endl;            
       res = 10;
}
	goto _again;
f3:
#line 150 "indexer.rl"
	{
     currenttoken.clear();  
}
	goto _again;
f4:
#line 153 "indexer.rl"
	{
     currenttoken.push_back((*p));
}
	goto _again;
f6:
#line 157 "indexer.rl"
	{
       cerr << (*p) << endl;
     currenttoken.push_back((*p));
}
	goto _again;
f7:
#line 167 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f5:
#line 180 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f9:
#line 191 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f8:
#line 208 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
	goto _again;
f19:
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f1:
#line 126 "indexer.rl"
	{
//		cerr << "end element " << endl;
		world.finish_current_object();

                }
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f11:
#line 167 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f10:
#line 180 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f13:
#line 191 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f12:
#line 208 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f15:
#line 11 "indexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f18:
#line 17 "indexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f16:
#line 23 "indexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f17:
#line 29 "indexer.rl"
	{
       world.set_current_element_type_tag();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 35 "indexer.rl"
	{
       world.set_current_element_type_nd();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
	{ res = 1;      }
	goto _again;
f2:
#line 40 "indexer.rl"
	{
       world.set_current_element_type_member();
       }
#line 144 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 240 "indexer.rl"
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
	case 1:
#line 5 "indexer.rl"
	{
       cerr <<"an error has occured"  << endl;            
       res = 10;
}
	break;
#line 1296 "indexer.c"
	}
	}

	_out: {}
	}

#line 260 "indexer.rl"


  return res;
}

