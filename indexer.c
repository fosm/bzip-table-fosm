
#line 1 "indexer.rl"


#line 227 "indexer.rl"



#line 10 "indexer.c"
static const int osmkeys_start = 1;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 1;


#line 230 "indexer.rl"

#define BUFSIZE 128
#include "fileindexer.hpp"
int scanner(OSMWorld & world,const char *s)
{
  int cs;
  int res = 0;
  string currenttoken;
  char *p= (char *)s;
  char *pe = (char *)s + strlen(s) +1 ;
  
#line 29 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 241 "indexer.rl"
  
#line 36 "indexer.c"
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
	if ( (*p) == 62 )
		goto tr4;
	goto tr1;
case 153:
	goto tr1;
case 3:
	switch( (*p) ) {
		case 47: goto tr5;
		case 109: goto tr6;
		case 110: goto tr7;
		case 114: goto tr8;
		case 116: goto tr9;
		case 119: goto tr10;
	}
	goto tr1;
case 4:
	switch( (*p) ) {
		case 110: goto tr11;
		case 114: goto tr12;
		case 119: goto tr13;
	}
	goto tr1;
case 5:
	if ( (*p) == 111 )
		goto tr14;
	goto tr1;
case 6:
	if ( (*p) == 100 )
		goto tr15;
	goto tr1;
case 7:
	if ( (*p) == 101 )
		goto tr2;
	goto tr1;
case 8:
	if ( (*p) == 101 )
		goto tr16;
	goto tr1;
case 9:
	if ( (*p) == 108 )
		goto tr17;
	goto tr1;
case 10:
	if ( (*p) == 97 )
		goto tr18;
	goto tr1;
case 11:
	if ( (*p) == 116 )
		goto tr19;
	goto tr1;
case 12:
	if ( (*p) == 105 )
		goto tr20;
	goto tr1;
case 13:
	if ( (*p) == 111 )
		goto tr21;
	goto tr1;
case 14:
	if ( (*p) == 110 )
		goto tr2;
	goto tr1;
case 15:
	if ( (*p) == 97 )
		goto tr22;
	goto tr1;
case 16:
	if ( (*p) == 121 )
		goto tr2;
	goto tr1;
case 17:
	if ( (*p) == 101 )
		goto tr23;
	goto tr1;
case 18:
	if ( (*p) == 109 )
		goto tr24;
	goto tr1;
case 19:
	if ( (*p) == 98 )
		goto tr25;
	goto tr1;
case 20:
	if ( (*p) == 101 )
		goto tr26;
	goto tr1;
case 21:
	if ( (*p) == 114 )
		goto tr27;
	goto tr1;
case 154:
	switch( (*p) ) {
		case 32: goto tr160;
		case 99: goto tr161;
		case 105: goto tr162;
		case 107: goto tr117;
		case 108: goto tr163;
		case 114: goto tr164;
		case 116: goto tr165;
		case 117: goto tr166;
		case 118: goto tr167;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr160;
	goto tr1;
case 22:
	switch( (*p) ) {
		case 32: goto tr28;
		case 99: goto tr29;
		case 105: goto tr30;
		case 107: goto tr31;
		case 108: goto tr32;
		case 114: goto tr33;
		case 116: goto tr34;
		case 117: goto tr35;
		case 118: goto tr36;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr28;
	goto tr1;
case 23:
	switch( (*p) ) {
		case 32: goto tr28;
		case 47: goto tr2;
		case 60: goto tr37;
		case 99: goto tr29;
		case 105: goto tr30;
		case 107: goto tr31;
		case 108: goto tr32;
		case 114: goto tr33;
		case 116: goto tr34;
		case 117: goto tr35;
		case 118: goto tr36;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr28;
	goto tr1;
case 24:
	if ( (*p) == 47 )
		goto tr5;
	goto tr1;
case 25:
	if ( (*p) == 104 )
		goto tr38;
	goto tr1;
case 26:
	if ( (*p) == 97 )
		goto tr39;
	goto tr1;
case 27:
	if ( (*p) == 110 )
		goto tr40;
	goto tr1;
case 28:
	if ( (*p) == 103 )
		goto tr41;
	goto tr1;
case 29:
	if ( (*p) == 101 )
		goto tr42;
	goto tr1;
case 30:
	if ( (*p) == 115 )
		goto tr43;
	goto tr1;
case 31:
	if ( (*p) == 101 )
		goto tr44;
	goto tr1;
case 32:
	if ( (*p) == 116 )
		goto tr45;
	goto tr1;
case 33:
	if ( (*p) == 61 )
		goto tr46;
	goto tr1;
case 34:
	switch( (*p) ) {
		case 34: goto tr47;
		case 39: goto tr47;
	}
	goto tr1;
case 35:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr48;
	goto tr1;
case 36:
	switch( (*p) ) {
		case 34: goto tr49;
		case 39: goto tr49;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr48;
	goto tr1;
case 37:
	if ( (*p) == 100 )
		goto tr50;
	goto tr1;
case 38:
	if ( (*p) == 61 )
		goto tr51;
	goto tr1;
case 39:
	switch( (*p) ) {
		case 34: goto tr52;
		case 39: goto tr52;
	}
	goto tr1;
case 40:
	if ( (*p) == 45 )
		goto tr53;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr54;
	goto tr1;
case 41:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr54;
	goto tr1;
case 42:
	switch( (*p) ) {
		case 34: goto tr55;
		case 39: goto tr55;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr54;
	goto tr1;
case 43:
	if ( (*p) == 61 )
		goto tr56;
	goto tr1;
case 44:
	switch( (*p) ) {
		case 34: goto tr57;
		case 39: goto tr58;
	}
	goto tr1;
case 45:
	if ( (*p) == 34 )
		goto tr1;
	goto tr59;
case 46:
	if ( (*p) == 34 )
		goto tr60;
	goto tr59;
case 47:
	if ( (*p) == 39 )
		goto tr1;
	goto tr61;
case 48:
	if ( (*p) == 39 )
		goto tr60;
	goto tr61;
case 49:
	switch( (*p) ) {
		case 97: goto tr62;
		case 111: goto tr63;
	}
	goto tr1;
case 50:
	if ( (*p) == 116 )
		goto tr31;
	goto tr1;
case 51:
	if ( (*p) == 110 )
		goto tr31;
	goto tr1;
case 52:
	switch( (*p) ) {
		case 101: goto tr64;
		case 111: goto tr65;
	}
	goto tr1;
case 53:
	if ( (*p) == 102 )
		goto tr31;
	goto tr1;
case 54:
	if ( (*p) == 108 )
		goto tr66;
	goto tr1;
case 55:
	if ( (*p) == 101 )
		goto tr31;
	goto tr1;
case 56:
	switch( (*p) ) {
		case 105: goto tr67;
		case 121: goto tr68;
	}
	goto tr1;
case 57:
	if ( (*p) == 109 )
		goto tr69;
	goto tr1;
case 58:
	if ( (*p) == 101 )
		goto tr70;
	goto tr1;
case 59:
	if ( (*p) == 115 )
		goto tr71;
	goto tr1;
case 60:
	if ( (*p) == 116 )
		goto tr72;
	goto tr1;
case 61:
	if ( (*p) == 97 )
		goto tr73;
	goto tr1;
case 62:
	if ( (*p) == 109 )
		goto tr74;
	goto tr1;
case 63:
	if ( (*p) == 112 )
		goto tr31;
	goto tr1;
case 64:
	if ( (*p) == 112 )
		goto tr66;
	goto tr1;
case 65:
	switch( (*p) ) {
		case 105: goto tr75;
		case 115: goto tr76;
	}
	goto tr1;
case 66:
	if ( (*p) == 100 )
		goto tr31;
	goto tr1;
case 67:
	if ( (*p) == 101 )
		goto tr77;
	goto tr1;
case 68:
	if ( (*p) == 114 )
		goto tr31;
	goto tr1;
case 69:
	switch( (*p) ) {
		case 61: goto tr56;
		case 101: goto tr78;
		case 105: goto tr79;
	}
	goto tr1;
case 70:
	if ( (*p) == 114 )
		goto tr80;
	goto tr1;
case 71:
	if ( (*p) == 115 )
		goto tr81;
	goto tr1;
case 72:
	if ( (*p) == 105 )
		goto tr82;
	goto tr1;
case 73:
	if ( (*p) == 111 )
		goto tr83;
	goto tr1;
case 74:
	if ( (*p) == 110 )
		goto tr84;
	goto tr1;
case 75:
	if ( (*p) == 61 )
		goto tr85;
	goto tr1;
case 76:
	switch( (*p) ) {
		case 34: goto tr86;
		case 39: goto tr86;
	}
	goto tr1;
case 77:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr87;
	goto tr1;
case 78:
	switch( (*p) ) {
		case 34: goto tr88;
		case 39: goto tr88;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr87;
	goto tr1;
case 79:
	if ( (*p) == 115 )
		goto tr89;
	goto tr1;
case 80:
	if ( (*p) == 105 )
		goto tr90;
	goto tr1;
case 81:
	if ( (*p) == 98 )
		goto tr65;
	goto tr1;
case 82:
	if ( (*p) == 104 )
		goto tr91;
	goto tr1;
case 83:
	if ( (*p) == 97 )
		goto tr92;
	goto tr1;
case 84:
	if ( (*p) == 110 )
		goto tr93;
	goto tr1;
case 85:
	if ( (*p) == 103 )
		goto tr94;
	goto tr1;
case 86:
	if ( (*p) == 101 )
		goto tr95;
	goto tr1;
case 87:
	if ( (*p) == 115 )
		goto tr96;
	goto tr1;
case 88:
	if ( (*p) == 101 )
		goto tr97;
	goto tr1;
case 89:
	if ( (*p) == 116 )
		goto tr98;
	goto tr1;
case 90:
	if ( (*p) == 61 )
		goto tr99;
	goto tr1;
case 91:
	switch( (*p) ) {
		case 34: goto tr100;
		case 39: goto tr100;
	}
	goto tr1;
case 92:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr101;
	goto tr1;
case 93:
	switch( (*p) ) {
		case 34: goto tr102;
		case 39: goto tr102;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr101;
	goto tr1;
case 155:
	switch( (*p) ) {
		case 32: goto tr168;
		case 99: goto tr161;
		case 105: goto tr162;
		case 107: goto tr117;
		case 108: goto tr163;
		case 114: goto tr164;
		case 116: goto tr165;
		case 117: goto tr166;
		case 118: goto tr167;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr168;
	goto tr1;
case 94:
	if ( (*p) == 100 )
		goto tr103;
	goto tr1;
case 95:
	if ( (*p) == 61 )
		goto tr104;
	goto tr1;
case 96:
	switch( (*p) ) {
		case 34: goto tr105;
		case 39: goto tr105;
	}
	goto tr1;
case 97:
	if ( (*p) == 45 )
		goto tr106;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr107;
	goto tr1;
case 98:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr107;
	goto tr1;
case 99:
	switch( (*p) ) {
		case 34: goto tr108;
		case 39: goto tr108;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr107;
	goto tr1;
case 100:
	if ( (*p) == 61 )
		goto tr109;
	goto tr1;
case 101:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr111;
	}
	goto tr1;
case 102:
	if ( (*p) == 34 )
		goto tr1;
	goto tr112;
case 103:
	if ( (*p) == 34 )
		goto tr113;
	goto tr112;
case 104:
	if ( (*p) == 39 )
		goto tr1;
	goto tr114;
case 105:
	if ( (*p) == 39 )
		goto tr113;
	goto tr114;
case 106:
	switch( (*p) ) {
		case 97: goto tr115;
		case 111: goto tr116;
	}
	goto tr1;
case 107:
	if ( (*p) == 116 )
		goto tr117;
	goto tr1;
case 108:
	if ( (*p) == 110 )
		goto tr117;
	goto tr1;
case 109:
	switch( (*p) ) {
		case 101: goto tr118;
		case 111: goto tr119;
	}
	goto tr1;
case 110:
	if ( (*p) == 102 )
		goto tr117;
	goto tr1;
case 111:
	if ( (*p) == 108 )
		goto tr120;
	goto tr1;
case 112:
	if ( (*p) == 101 )
		goto tr117;
	goto tr1;
case 113:
	switch( (*p) ) {
		case 105: goto tr121;
		case 121: goto tr122;
	}
	goto tr1;
case 114:
	if ( (*p) == 109 )
		goto tr123;
	goto tr1;
case 115:
	if ( (*p) == 101 )
		goto tr124;
	goto tr1;
case 116:
	if ( (*p) == 115 )
		goto tr125;
	goto tr1;
case 117:
	if ( (*p) == 116 )
		goto tr126;
	goto tr1;
case 118:
	if ( (*p) == 97 )
		goto tr127;
	goto tr1;
case 119:
	if ( (*p) == 109 )
		goto tr128;
	goto tr1;
case 120:
	if ( (*p) == 112 )
		goto tr117;
	goto tr1;
case 121:
	if ( (*p) == 112 )
		goto tr120;
	goto tr1;
case 122:
	switch( (*p) ) {
		case 105: goto tr129;
		case 115: goto tr130;
	}
	goto tr1;
case 123:
	if ( (*p) == 100 )
		goto tr117;
	goto tr1;
case 124:
	if ( (*p) == 101 )
		goto tr131;
	goto tr1;
case 125:
	if ( (*p) == 114 )
		goto tr117;
	goto tr1;
case 126:
	switch( (*p) ) {
		case 61: goto tr109;
		case 101: goto tr132;
		case 105: goto tr133;
	}
	goto tr1;
case 127:
	if ( (*p) == 114 )
		goto tr134;
	goto tr1;
case 128:
	if ( (*p) == 115 )
		goto tr135;
	goto tr1;
case 129:
	if ( (*p) == 105 )
		goto tr136;
	goto tr1;
case 130:
	if ( (*p) == 111 )
		goto tr137;
	goto tr1;
case 131:
	if ( (*p) == 110 )
		goto tr138;
	goto tr1;
case 132:
	if ( (*p) == 61 )
		goto tr139;
	goto tr1;
case 133:
	switch( (*p) ) {
		case 34: goto tr140;
		case 39: goto tr140;
	}
	goto tr1;
case 134:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr141;
	goto tr1;
case 135:
	switch( (*p) ) {
		case 34: goto tr142;
		case 39: goto tr142;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr141;
	goto tr1;
case 136:
	if ( (*p) == 115 )
		goto tr143;
	goto tr1;
case 137:
	if ( (*p) == 105 )
		goto tr144;
	goto tr1;
case 138:
	if ( (*p) == 98 )
		goto tr119;
	goto tr1;
case 139:
	switch( (*p) ) {
		case 100: goto tr145;
		case 111: goto tr146;
	}
	goto tr1;
case 140:
	if ( (*p) == 100 )
		goto tr147;
	goto tr1;
case 141:
	if ( (*p) == 101 )
		goto tr148;
	goto tr1;
case 142:
	if ( (*p) == 101 )
		goto tr149;
	goto tr1;
case 143:
	if ( (*p) == 108 )
		goto tr150;
	goto tr1;
case 144:
	if ( (*p) == 97 )
		goto tr151;
	goto tr1;
case 145:
	if ( (*p) == 116 )
		goto tr152;
	goto tr1;
case 146:
	if ( (*p) == 105 )
		goto tr153;
	goto tr1;
case 147:
	if ( (*p) == 111 )
		goto tr154;
	goto tr1;
case 148:
	if ( (*p) == 110 )
		goto tr155;
	goto tr1;
case 149:
	if ( (*p) == 97 )
		goto tr156;
	goto tr1;
case 150:
	if ( (*p) == 103 )
		goto tr157;
	goto tr1;
case 151:
	if ( (*p) == 97 )
		goto tr158;
	goto tr1;
case 152:
	if ( (*p) == 121 )
		goto tr159;
	goto tr1;
	}

	tr1: cs = 0; goto _again;
	tr0: cs = 1; goto _again;
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
	tr24: cs = 19; goto _again;
	tr25: cs = 20; goto _again;
	tr26: cs = 21; goto _again;
	tr160: cs = 22; goto _again;
	tr49: cs = 22; goto f4;
	tr55: cs = 22; goto f6;
	tr60: cs = 22; goto f7;
	tr88: cs = 22; goto f8;
	tr28: cs = 23; goto _again;
	tr37: cs = 24; goto _again;
	tr29: cs = 25; goto _again;
	tr38: cs = 26; goto _again;
	tr39: cs = 27; goto _again;
	tr40: cs = 28; goto _again;
	tr41: cs = 29; goto _again;
	tr42: cs = 30; goto _again;
	tr43: cs = 31; goto _again;
	tr44: cs = 32; goto _again;
	tr45: cs = 33; goto _again;
	tr46: cs = 34; goto _again;
	tr47: cs = 35; goto f2;
	tr48: cs = 36; goto f3;
	tr30: cs = 37; goto _again;
	tr50: cs = 38; goto _again;
	tr51: cs = 39; goto _again;
	tr52: cs = 40; goto f2;
	tr53: cs = 41; goto f5;
	tr54: cs = 42; goto f3;
	tr31: cs = 43; goto _again;
	tr56: cs = 44; goto _again;
	tr57: cs = 45; goto _again;
	tr59: cs = 46; goto _again;
	tr58: cs = 47; goto _again;
	tr61: cs = 48; goto _again;
	tr32: cs = 49; goto _again;
	tr62: cs = 50; goto _again;
	tr63: cs = 51; goto _again;
	tr33: cs = 52; goto _again;
	tr64: cs = 53; goto _again;
	tr65: cs = 54; goto _again;
	tr66: cs = 55; goto _again;
	tr34: cs = 56; goto _again;
	tr67: cs = 57; goto _again;
	tr69: cs = 58; goto _again;
	tr70: cs = 59; goto _again;
	tr71: cs = 60; goto _again;
	tr72: cs = 61; goto _again;
	tr73: cs = 62; goto _again;
	tr74: cs = 63; goto _again;
	tr68: cs = 64; goto _again;
	tr35: cs = 65; goto _again;
	tr75: cs = 66; goto _again;
	tr76: cs = 67; goto _again;
	tr77: cs = 68; goto _again;
	tr36: cs = 69; goto _again;
	tr78: cs = 70; goto _again;
	tr80: cs = 71; goto _again;
	tr81: cs = 72; goto _again;
	tr82: cs = 73; goto _again;
	tr83: cs = 74; goto _again;
	tr84: cs = 75; goto _again;
	tr85: cs = 76; goto _again;
	tr86: cs = 77; goto f2;
	tr87: cs = 78; goto f3;
	tr79: cs = 79; goto _again;
	tr89: cs = 80; goto _again;
	tr90: cs = 81; goto _again;
	tr161: cs = 82; goto _again;
	tr91: cs = 83; goto _again;
	tr92: cs = 84; goto _again;
	tr93: cs = 85; goto _again;
	tr94: cs = 86; goto _again;
	tr95: cs = 87; goto _again;
	tr96: cs = 88; goto _again;
	tr97: cs = 89; goto _again;
	tr98: cs = 90; goto _again;
	tr99: cs = 91; goto _again;
	tr100: cs = 92; goto f2;
	tr101: cs = 93; goto f3;
	tr162: cs = 94; goto _again;
	tr103: cs = 95; goto _again;
	tr104: cs = 96; goto _again;
	tr105: cs = 97; goto f2;
	tr106: cs = 98; goto f5;
	tr107: cs = 99; goto f3;
	tr117: cs = 100; goto _again;
	tr109: cs = 101; goto _again;
	tr110: cs = 102; goto _again;
	tr112: cs = 103; goto _again;
	tr111: cs = 104; goto _again;
	tr114: cs = 105; goto _again;
	tr163: cs = 106; goto _again;
	tr115: cs = 107; goto _again;
	tr116: cs = 108; goto _again;
	tr164: cs = 109; goto _again;
	tr118: cs = 110; goto _again;
	tr119: cs = 111; goto _again;
	tr120: cs = 112; goto _again;
	tr165: cs = 113; goto _again;
	tr121: cs = 114; goto _again;
	tr123: cs = 115; goto _again;
	tr124: cs = 116; goto _again;
	tr125: cs = 117; goto _again;
	tr126: cs = 118; goto _again;
	tr127: cs = 119; goto _again;
	tr128: cs = 120; goto _again;
	tr122: cs = 121; goto _again;
	tr166: cs = 122; goto _again;
	tr129: cs = 123; goto _again;
	tr130: cs = 124; goto _again;
	tr131: cs = 125; goto _again;
	tr167: cs = 126; goto _again;
	tr132: cs = 127; goto _again;
	tr134: cs = 128; goto _again;
	tr135: cs = 129; goto _again;
	tr136: cs = 130; goto _again;
	tr137: cs = 131; goto _again;
	tr138: cs = 132; goto _again;
	tr139: cs = 133; goto _again;
	tr140: cs = 134; goto f2;
	tr141: cs = 135; goto f3;
	tr133: cs = 136; goto _again;
	tr143: cs = 137; goto _again;
	tr144: cs = 138; goto _again;
	tr7: cs = 139; goto _again;
	tr146: cs = 140; goto _again;
	tr147: cs = 141; goto _again;
	tr8: cs = 142; goto _again;
	tr149: cs = 143; goto _again;
	tr150: cs = 144; goto _again;
	tr151: cs = 145; goto _again;
	tr152: cs = 146; goto _again;
	tr153: cs = 147; goto _again;
	tr154: cs = 148; goto _again;
	tr9: cs = 149; goto _again;
	tr156: cs = 150; goto _again;
	tr10: cs = 151; goto _again;
	tr158: cs = 152; goto _again;
	tr4: cs = 153; goto f0;
	tr27: cs = 154; goto f1;
	tr145: cs = 154; goto f13;
	tr148: cs = 154; goto f14;
	tr155: cs = 154; goto f15;
	tr157: cs = 154; goto f16;
	tr159: cs = 154; goto f17;
	tr102: cs = 155; goto f9;
	tr108: cs = 155; goto f10;
	tr113: cs = 155; goto f11;
	tr142: cs = 155; goto f12;
	tr168: cs = 155; goto f18;

f2:
#line 145 "indexer.rl"
	{
     currenttoken.clear();  
}
	goto _again;
f3:
#line 148 "indexer.rl"
	{
     currenttoken.push_back((*p));
}
	goto _again;
f5:
#line 152 "indexer.rl"
	{
       cerr << (*p) << endl;
     currenttoken.push_back((*p));
}
	goto _again;
f6:
#line 162 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f4:
#line 175 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f8:
#line 186 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
	goto _again;
f7:
#line 203 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
	goto _again;
f18:
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f0:
#line 121 "indexer.rl"
	{
//		cerr << "end element " << endl;
		world.finish_current_object();

                }
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f10:
#line 162 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f9:
#line 175 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f12:
#line 186 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f11:
#line 203 "indexer.rl"
	{ 
//	       cerr <<"got attribute"  << endl;    
	     }
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 6 "indexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f17:
#line 12 "indexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f15:
#line 18 "indexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f16:
#line 24 "indexer.rl"
	{
       world.set_current_element_type_tag();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f13:
#line 30 "indexer.rl"
	{
       world.set_current_element_type_nd();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;
f1:
#line 35 "indexer.rl"
	{
       world.set_current_element_type_member();
       }
#line 139 "indexer.rl"
	{
       // record the start of a type of object
       world.record_start_position();
}
#line 218 "indexer.rl"
	{ 
//	       cerr <<"got something"  << endl;    
	     }
#line 225 "indexer.rl"
	{ res = 1;      }
	goto _again;

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	_out: {}
	}

#line 242 "indexer.rl"
  
  return res;
}

