
#line 1 "indexer.rl"


#line 470 "indexer.rl"



#line 10 "indexer.c"
static const unsigned char _osmkeys_eof_actions[] = {
	0, 0, 2, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 2, 0, 0, 
	0, 0, 0, 2, 2, 2, 2, 2, 
	2, 0, 2, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 11, 11, 11, 11, 11, 11, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	16, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 24, 
	6, 6, 6, 6, 6, 25, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 39, 39, 
	39, 39, 39, 39, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 40, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 41, 0, 0, 0, 0, 
	0, 42, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 2, 2, 
	2, 2, 2, 0, 2, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 39, 
	39, 39, 39, 39, 39, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 40, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 41, 0, 0, 0, 
	0, 0, 42, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 11, 11, 11, 11, 
	11, 11, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 16, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 24, 6, 6, 6, 6, 6, 25, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 2, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0
};

static const int osmkeys_start = 664;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 664;


#line 473 "indexer.rl"

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
  
#line 120 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 485 "indexer.rl"
  
#line 127 "indexer.c"
	{
	int _ps = 0;
	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	switch ( cs ) {
case 664:
	switch( (*p) ) {
		case 32: goto tr717;
		case 47: goto tr18;
		case 60: goto tr718;
		case 62: goto tr0;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr717;
	goto tr1;
case 0:
	goto _out;
case 665:
	switch( (*p) ) {
		case 32: goto tr717;
		case 47: goto tr18;
		case 60: goto tr719;
		case 62: goto tr0;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr717;
	goto tr1;
case 1:
	if ( (*p) == 62 )
		goto tr0;
	goto tr1;
case 666:
	if ( (*p) == 32 )
		goto tr720;
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr720;
	goto tr1;
case 2:
	switch( (*p) ) {
		case 47: goto tr3;
		case 98: goto tr4;
		case 99: goto tr5;
		case 100: goto tr6;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr2;
case 3:
	switch( (*p) ) {
		case 110: goto tr13;
		case 114: goto tr14;
		case 119: goto tr15;
	}
	goto tr1;
case 4:
	if ( (*p) == 111 )
		goto tr16;
	goto tr1;
case 5:
	if ( (*p) == 100 )
		goto tr17;
	goto tr1;
case 6:
	if ( (*p) == 101 )
		goto tr18;
	goto tr1;
case 7:
	if ( (*p) == 101 )
		goto tr19;
	goto tr1;
case 8:
	if ( (*p) == 108 )
		goto tr20;
	goto tr1;
case 9:
	if ( (*p) == 97 )
		goto tr21;
	goto tr1;
case 10:
	if ( (*p) == 116 )
		goto tr22;
	goto tr1;
case 11:
	if ( (*p) == 105 )
		goto tr23;
	goto tr1;
case 12:
	if ( (*p) == 111 )
		goto tr24;
	goto tr1;
case 13:
	if ( (*p) == 110 )
		goto tr18;
	goto tr1;
case 14:
	if ( (*p) == 97 )
		goto tr25;
	goto tr1;
case 15:
	if ( (*p) == 121 )
		goto tr18;
	goto tr1;
case 16:
	if ( (*p) == 111 )
		goto tr26;
	goto tr1;
case 17:
	if ( (*p) == 117 )
		goto tr27;
	goto tr1;
case 18:
	if ( (*p) == 110 )
		goto tr28;
	goto tr1;
case 19:
	if ( (*p) == 100 )
		goto tr29;
	goto tr1;
case 20:
	if ( (*p) == 115 )
		goto tr30;
	goto tr1;
case 667:
	switch( (*p) ) {
		case 32: goto tr30;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr30;
	goto tr1;
case 21:
	switch( (*p) ) {
		case 47: goto tr3;
		case 98: goto tr31;
		case 99: goto tr32;
		case 100: goto tr33;
		case 109: goto tr34;
		case 110: goto tr35;
		case 114: goto tr36;
		case 116: goto tr37;
		case 119: goto tr38;
	}
	goto tr2;
case 22:
	if ( (*p) == 111 )
		goto tr39;
	goto tr1;
case 23:
	if ( (*p) == 117 )
		goto tr40;
	goto tr1;
case 24:
	if ( (*p) == 110 )
		goto tr41;
	goto tr1;
case 25:
	if ( (*p) == 100 )
		goto tr42;
	goto tr1;
case 26:
	if ( (*p) == 115 )
		goto tr43;
	goto tr1;
case 668:
	switch( (*p) ) {
		case 32: goto tr43;
		case 60: goto tr722;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr43;
	goto tr1;
case 27:
	switch( (*p) ) {
		case 98: goto tr31;
		case 99: goto tr32;
		case 100: goto tr33;
		case 109: goto tr34;
		case 110: goto tr35;
		case 114: goto tr36;
		case 116: goto tr37;
		case 119: goto tr38;
	}
	goto tr2;
case 28:
	if ( (*p) == 114 )
		goto tr44;
	goto tr2;
case 29:
	if ( (*p) == 101 )
		goto tr45;
	goto tr2;
case 30:
	if ( (*p) == 97 )
		goto tr46;
	goto tr2;
case 31:
	if ( (*p) == 116 )
		goto tr47;
	goto tr2;
case 32:
	if ( (*p) == 101 )
		goto tr48;
	goto tr2;
case 669:
	switch( (*p) ) {
		case 32: goto tr355;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr723;
case 670:
	switch( (*p) ) {
		case 32: goto tr355;
		case 47: goto tr56;
		case 60: goto tr732;
		case 62: goto tr49;
		case 97: goto tr733;
		case 99: goto tr734;
		case 105: goto tr735;
		case 107: goto tr258;
		case 108: goto tr736;
		case 114: goto tr737;
		case 116: goto tr738;
		case 117: goto tr739;
		case 118: goto tr740;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr251;
case 33:
	if ( (*p) == 62 )
		goto tr49;
	goto tr1;
case 34:
	switch( (*p) ) {
		case 47: goto tr50;
		case 98: goto tr31;
		case 99: goto tr32;
		case 100: goto tr33;
		case 109: goto tr34;
		case 110: goto tr35;
		case 114: goto tr36;
		case 116: goto tr37;
		case 119: goto tr38;
	}
	goto tr2;
case 35:
	switch( (*p) ) {
		case 110: goto tr51;
		case 114: goto tr52;
		case 119: goto tr53;
	}
	goto tr1;
case 36:
	if ( (*p) == 111 )
		goto tr54;
	goto tr1;
case 37:
	if ( (*p) == 100 )
		goto tr55;
	goto tr1;
case 38:
	if ( (*p) == 101 )
		goto tr56;
	goto tr1;
case 39:
	if ( (*p) == 101 )
		goto tr57;
	goto tr1;
case 40:
	if ( (*p) == 108 )
		goto tr58;
	goto tr1;
case 41:
	if ( (*p) == 97 )
		goto tr59;
	goto tr1;
case 42:
	if ( (*p) == 116 )
		goto tr60;
	goto tr1;
case 43:
	if ( (*p) == 105 )
		goto tr61;
	goto tr1;
case 44:
	if ( (*p) == 111 )
		goto tr62;
	goto tr1;
case 45:
	if ( (*p) == 110 )
		goto tr56;
	goto tr1;
case 46:
	if ( (*p) == 97 )
		goto tr63;
	goto tr1;
case 47:
	if ( (*p) == 121 )
		goto tr56;
	goto tr1;
case 48:
	if ( (*p) == 101 )
		goto tr64;
	goto tr1;
case 49:
	if ( (*p) == 108 )
		goto tr65;
	goto tr1;
case 50:
	if ( (*p) == 101 )
		goto tr66;
	goto tr1;
case 51:
	if ( (*p) == 116 )
		goto tr67;
	goto tr1;
case 52:
	if ( (*p) == 101 )
		goto tr68;
	goto tr1;
case 671:
	switch( (*p) ) {
		case 32: goto tr355;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr91;
case 53:
	if ( (*p) == 99 )
		goto tr70;
	goto tr69;
case 54:
	if ( (*p) == 116 )
		goto tr71;
	goto tr69;
case 55:
	if ( (*p) == 105 )
		goto tr72;
	goto tr69;
case 56:
	if ( (*p) == 111 )
		goto tr73;
	goto tr69;
case 57:
	if ( (*p) == 110 )
		goto tr74;
	goto tr69;
case 58:
	if ( (*p) == 61 )
		goto tr75;
	goto tr69;
case 59:
	switch( (*p) ) {
		case 34: goto tr76;
		case 39: goto tr76;
	}
	goto tr69;
case 60:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr77;
case 61:
	switch( (*p) ) {
		case 34: goto tr78;
		case 39: goto tr78;
	}
	goto tr77;
case 672:
	switch( (*p) ) {
		case 32: goto tr195;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr195;
	goto tr91;
case 62:
	if ( (*p) == 104 )
		goto tr79;
	goto tr69;
case 63:
	if ( (*p) == 97 )
		goto tr80;
	goto tr69;
case 64:
	if ( (*p) == 110 )
		goto tr81;
	goto tr69;
case 65:
	if ( (*p) == 103 )
		goto tr82;
	goto tr69;
case 66:
	if ( (*p) == 101 )
		goto tr83;
	goto tr69;
case 67:
	if ( (*p) == 115 )
		goto tr84;
	goto tr69;
case 68:
	if ( (*p) == 101 )
		goto tr85;
	goto tr69;
case 69:
	if ( (*p) == 116 )
		goto tr86;
	goto tr69;
case 70:
	if ( (*p) == 61 )
		goto tr87;
	goto tr69;
case 71:
	switch( (*p) ) {
		case 34: goto tr88;
		case 39: goto tr88;
	}
	goto tr69;
case 72:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr89;
	goto tr69;
case 73:
	switch( (*p) ) {
		case 34: goto tr90;
		case 39: goto tr90;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr89;
	goto tr69;
case 74:
	if ( (*p) == 100 )
		goto tr92;
	goto tr91;
case 75:
	if ( (*p) == 61 )
		goto tr93;
	goto tr91;
case 76:
	switch( (*p) ) {
		case 34: goto tr94;
		case 39: goto tr94;
	}
	goto tr91;
case 77:
	if ( (*p) == 45 )
		goto tr95;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr96;
	goto tr91;
case 78:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr96;
	goto tr91;
case 79:
	switch( (*p) ) {
		case 34: goto tr97;
		case 39: goto tr97;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr96;
	goto tr91;
case 80:
	switch( (*p) ) {
		case 32: goto tr98;
		case 61: goto tr99;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr98;
	goto tr69;
case 81:
	switch( (*p) ) {
		case 34: goto tr100;
		case 39: goto tr100;
	}
	goto tr69;
case 82:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr101;
case 83:
	switch( (*p) ) {
		case 34: goto tr102;
		case 39: goto tr102;
	}
	goto tr101;
case 84:
	switch( (*p) ) {
		case 97: goto tr103;
		case 111: goto tr104;
	}
	goto tr69;
case 85:
	if ( (*p) == 116 )
		goto tr105;
	goto tr69;
case 86:
	if ( (*p) == 61 )
		goto tr106;
	goto tr69;
case 87:
	switch( (*p) ) {
		case 34: goto tr107;
		case 39: goto tr107;
	}
	goto tr69;
case 88:
	if ( (*p) == 45 )
		goto tr108;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr109;
	goto tr69;
case 89:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr109;
	goto tr69;
case 90:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr110;
		case 46: goto tr111;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr109;
	goto tr69;
case 91:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr112;
	goto tr69;
case 92:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr110;
		case 69: goto tr113;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr112;
	goto tr69;
case 93:
	if ( (*p) == 45 )
		goto tr114;
	goto tr69;
case 94:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr115;
	goto tr69;
case 95:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr110;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr115;
	goto tr69;
case 96:
	if ( (*p) == 110 )
		goto tr116;
	goto tr69;
case 97:
	if ( (*p) == 61 )
		goto tr117;
	goto tr69;
case 98:
	switch( (*p) ) {
		case 34: goto tr118;
		case 39: goto tr118;
	}
	goto tr69;
case 99:
	if ( (*p) == 45 )
		goto tr119;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr120;
	goto tr69;
case 100:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr120;
	goto tr69;
case 101:
	switch( (*p) ) {
		case 34: goto tr121;
		case 39: goto tr121;
		case 46: goto tr122;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr120;
	goto tr69;
case 102:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr123;
	goto tr69;
case 103:
	switch( (*p) ) {
		case 34: goto tr121;
		case 39: goto tr121;
		case 69: goto tr124;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr123;
	goto tr69;
case 104:
	if ( (*p) == 45 )
		goto tr125;
	goto tr69;
case 105:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr126;
	goto tr69;
case 106:
	switch( (*p) ) {
		case 34: goto tr121;
		case 39: goto tr121;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr126;
	goto tr69;
case 107:
	if ( (*p) == 101 )
		goto tr127;
	goto tr69;
case 108:
	if ( (*p) == 102 )
		goto tr128;
	goto tr69;
case 109:
	if ( (*p) == 61 )
		goto tr129;
	goto tr69;
case 110:
	switch( (*p) ) {
		case 34: goto tr130;
		case 39: goto tr130;
	}
	goto tr69;
case 111:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr131;
	goto tr69;
case 112:
	switch( (*p) ) {
		case 34: goto tr133;
		case 39: goto tr133;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr131;
	goto tr132;
case 673:
	switch( (*p) ) {
		case 32: goto tr195;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr195;
	goto tr741;
case 113:
	if ( (*p) == 105 )
		goto tr134;
	goto tr69;
case 114:
	if ( (*p) == 109 )
		goto tr135;
	goto tr69;
case 115:
	if ( (*p) == 101 )
		goto tr136;
	goto tr69;
case 116:
	if ( (*p) == 115 )
		goto tr137;
	goto tr69;
case 117:
	if ( (*p) == 116 )
		goto tr138;
	goto tr69;
case 118:
	if ( (*p) == 97 )
		goto tr139;
	goto tr69;
case 119:
	if ( (*p) == 109 )
		goto tr140;
	goto tr69;
case 120:
	if ( (*p) == 112 )
		goto tr141;
	goto tr69;
case 121:
	if ( (*p) == 61 )
		goto tr142;
	goto tr69;
case 122:
	switch( (*p) ) {
		case 34: goto tr143;
		case 39: goto tr143;
	}
	goto tr69;
case 123:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr144;
	goto tr69;
case 124:
	if ( (*p) == 45 )
		goto tr145;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr144;
	goto tr69;
case 125:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr146;
	goto tr69;
case 126:
	if ( (*p) == 45 )
		goto tr147;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr146;
	goto tr69;
case 127:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr148;
	goto tr69;
case 128:
	if ( (*p) == 84 )
		goto tr149;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr148;
	goto tr69;
case 129:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr150;
	goto tr69;
case 130:
	if ( (*p) == 58 )
		goto tr151;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr150;
	goto tr69;
case 131:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr152;
	goto tr69;
case 132:
	if ( (*p) == 58 )
		goto tr153;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr152;
	goto tr69;
case 133:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr154;
	goto tr69;
case 134:
	if ( (*p) == 90 )
		goto tr155;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr154;
	goto tr69;
case 135:
	switch( (*p) ) {
		case 34: goto tr157;
		case 39: goto tr157;
	}
	goto tr156;
case 674:
	switch( (*p) ) {
		case 32: goto tr195;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr195;
	goto tr742;
case 136:
	switch( (*p) ) {
		case 105: goto tr158;
		case 115: goto tr159;
	}
	goto tr69;
case 137:
	if ( (*p) == 100 )
		goto tr160;
	goto tr69;
case 138:
	if ( (*p) == 61 )
		goto tr161;
	goto tr69;
case 139:
	switch( (*p) ) {
		case 34: goto tr162;
		case 39: goto tr162;
	}
	goto tr69;
case 140:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr163;
	goto tr69;
case 141:
	switch( (*p) ) {
		case 34: goto tr165;
		case 39: goto tr165;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr163;
	goto tr164;
case 675:
	switch( (*p) ) {
		case 32: goto tr195;
		case 60: goto tr722;
		case 97: goto tr724;
		case 99: goto tr725;
		case 105: goto tr726;
		case 107: goto tr98;
		case 108: goto tr727;
		case 114: goto tr728;
		case 116: goto tr729;
		case 117: goto tr730;
		case 118: goto tr731;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr195;
	goto tr743;
case 142:
	switch( (*p) ) {
		case 32: goto tr166;
		case 61: goto tr167;
		case 101: goto tr168;
		case 105: goto tr169;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr166;
	goto tr69;
case 143:
	switch( (*p) ) {
		case 32: goto tr166;
		case 61: goto tr167;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr166;
	goto tr69;
case 144:
	switch( (*p) ) {
		case 34: goto tr170;
		case 39: goto tr170;
	}
	goto tr69;
case 145:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr171;
case 146:
	switch( (*p) ) {
		case 34: goto tr172;
		case 39: goto tr172;
	}
	goto tr171;
case 147:
	if ( (*p) == 114 )
		goto tr173;
	goto tr69;
case 148:
	if ( (*p) == 115 )
		goto tr174;
	goto tr69;
case 149:
	if ( (*p) == 105 )
		goto tr175;
	goto tr69;
case 150:
	if ( (*p) == 111 )
		goto tr176;
	goto tr69;
case 151:
	if ( (*p) == 110 )
		goto tr177;
	goto tr69;
case 152:
	if ( (*p) == 61 )
		goto tr178;
	goto tr69;
case 153:
	switch( (*p) ) {
		case 34: goto tr179;
		case 39: goto tr179;
	}
	goto tr69;
case 154:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr180;
	goto tr69;
case 155:
	switch( (*p) ) {
		case 34: goto tr181;
		case 39: goto tr181;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr180;
	goto tr69;
case 156:
	if ( (*p) == 115 )
		goto tr182;
	goto tr69;
case 157:
	if ( (*p) == 105 )
		goto tr183;
	goto tr69;
case 158:
	if ( (*p) == 98 )
		goto tr184;
	goto tr69;
case 159:
	if ( (*p) == 108 )
		goto tr185;
	goto tr69;
case 160:
	if ( (*p) == 101 )
		goto tr186;
	goto tr69;
case 161:
	if ( (*p) == 61 )
		goto tr187;
	goto tr69;
case 162:
	switch( (*p) ) {
		case 34: goto tr188;
		case 39: goto tr188;
	}
	goto tr69;
case 163:
	switch( (*p) ) {
		case 102: goto tr189;
		case 116: goto tr190;
	}
	goto tr69;
case 164:
	if ( (*p) == 97 )
		goto tr191;
	goto tr69;
case 165:
	if ( (*p) == 108 )
		goto tr192;
	goto tr69;
case 166:
	if ( (*p) == 115 )
		goto tr193;
	goto tr69;
case 167:
	if ( (*p) == 101 )
		goto tr194;
	goto tr69;
case 168:
	switch( (*p) ) {
		case 34: goto tr195;
		case 39: goto tr195;
	}
	goto tr69;
case 169:
	if ( (*p) == 114 )
		goto tr196;
	goto tr69;
case 170:
	if ( (*p) == 117 )
		goto tr197;
	goto tr69;
case 171:
	if ( (*p) == 101 )
		goto tr198;
	goto tr69;
case 172:
	if ( (*p) == 101 )
		goto tr199;
	goto tr69;
case 173:
	if ( (*p) == 114 )
		goto tr200;
	goto tr69;
case 174:
	if ( (*p) == 61 )
		goto tr201;
	goto tr69;
case 175:
	switch( (*p) ) {
		case 34: goto tr202;
		case 39: goto tr202;
	}
	goto tr69;
case 176:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr203;
case 177:
	switch( (*p) ) {
		case 34: goto tr204;
		case 39: goto tr204;
	}
	goto tr203;
case 178:
	switch( (*p) ) {
		case 101: goto tr205;
		case 111: goto tr206;
	}
	goto tr1;
case 179:
	if ( (*p) == 109 )
		goto tr207;
	goto tr1;
case 180:
	if ( (*p) == 98 )
		goto tr208;
	goto tr1;
case 181:
	if ( (*p) == 101 )
		goto tr209;
	goto tr1;
case 182:
	if ( (*p) == 114 )
		goto tr210;
	goto tr1;
case 183:
	if ( (*p) == 100 )
		goto tr211;
	goto tr1;
case 184:
	if ( (*p) == 105 )
		goto tr212;
	goto tr1;
case 185:
	if ( (*p) == 102 )
		goto tr213;
	goto tr1;
case 186:
	if ( (*p) == 121 )
		goto tr214;
	goto tr1;
case 187:
	switch( (*p) ) {
		case 100: goto tr215;
		case 111: goto tr216;
	}
	goto tr1;
case 188:
	if ( (*p) == 100 )
		goto tr217;
	goto tr1;
case 189:
	if ( (*p) == 101 )
		goto tr218;
	goto tr1;
case 190:
	if ( (*p) == 101 )
		goto tr219;
	goto tr1;
case 191:
	if ( (*p) == 108 )
		goto tr220;
	goto tr1;
case 192:
	if ( (*p) == 97 )
		goto tr221;
	goto tr1;
case 193:
	if ( (*p) == 116 )
		goto tr222;
	goto tr1;
case 194:
	if ( (*p) == 105 )
		goto tr223;
	goto tr1;
case 195:
	if ( (*p) == 111 )
		goto tr224;
	goto tr1;
case 196:
	if ( (*p) == 110 )
		goto tr225;
	goto tr1;
case 197:
	if ( (*p) == 97 )
		goto tr226;
	goto tr1;
case 198:
	if ( (*p) == 103 )
		goto tr227;
	goto tr1;
case 199:
	if ( (*p) == 97 )
		goto tr228;
	goto tr1;
case 200:
	if ( (*p) == 121 )
		goto tr229;
	goto tr1;
case 201:
	if ( (*p) == 99 )
		goto tr230;
	goto tr1;
case 202:
	if ( (*p) == 116 )
		goto tr231;
	goto tr1;
case 203:
	if ( (*p) == 105 )
		goto tr232;
	goto tr1;
case 204:
	if ( (*p) == 111 )
		goto tr233;
	goto tr1;
case 205:
	if ( (*p) == 110 )
		goto tr234;
	goto tr1;
case 206:
	if ( (*p) == 61 )
		goto tr235;
	goto tr1;
case 207:
	switch( (*p) ) {
		case 34: goto tr236;
		case 39: goto tr236;
	}
	goto tr1;
case 208:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr237;
case 209:
	switch( (*p) ) {
		case 34: goto tr238;
		case 39: goto tr238;
	}
	goto tr237;
case 210:
	if ( (*p) == 104 )
		goto tr239;
	goto tr1;
case 211:
	if ( (*p) == 97 )
		goto tr240;
	goto tr1;
case 212:
	if ( (*p) == 110 )
		goto tr241;
	goto tr1;
case 213:
	if ( (*p) == 103 )
		goto tr242;
	goto tr1;
case 214:
	if ( (*p) == 101 )
		goto tr243;
	goto tr1;
case 215:
	if ( (*p) == 115 )
		goto tr244;
	goto tr1;
case 216:
	if ( (*p) == 101 )
		goto tr245;
	goto tr1;
case 217:
	if ( (*p) == 116 )
		goto tr246;
	goto tr1;
case 218:
	if ( (*p) == 61 )
		goto tr247;
	goto tr1;
case 219:
	switch( (*p) ) {
		case 34: goto tr248;
		case 39: goto tr248;
	}
	goto tr1;
case 220:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr249;
	goto tr1;
case 221:
	switch( (*p) ) {
		case 34: goto tr250;
		case 39: goto tr250;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr249;
	goto tr1;
case 222:
	if ( (*p) == 100 )
		goto tr252;
	goto tr251;
case 223:
	if ( (*p) == 61 )
		goto tr253;
	goto tr251;
case 224:
	switch( (*p) ) {
		case 34: goto tr254;
		case 39: goto tr254;
	}
	goto tr251;
case 225:
	if ( (*p) == 45 )
		goto tr255;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr256;
	goto tr251;
case 226:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr256;
	goto tr251;
case 227:
	switch( (*p) ) {
		case 34: goto tr257;
		case 39: goto tr257;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr256;
	goto tr251;
case 228:
	switch( (*p) ) {
		case 32: goto tr258;
		case 61: goto tr259;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr258;
	goto tr1;
case 229:
	switch( (*p) ) {
		case 34: goto tr260;
		case 39: goto tr260;
	}
	goto tr1;
case 230:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr261;
case 231:
	switch( (*p) ) {
		case 34: goto tr262;
		case 39: goto tr262;
	}
	goto tr261;
case 232:
	switch( (*p) ) {
		case 97: goto tr263;
		case 111: goto tr264;
	}
	goto tr1;
case 233:
	if ( (*p) == 116 )
		goto tr265;
	goto tr1;
case 234:
	if ( (*p) == 61 )
		goto tr266;
	goto tr1;
case 235:
	switch( (*p) ) {
		case 34: goto tr267;
		case 39: goto tr267;
	}
	goto tr1;
case 236:
	if ( (*p) == 45 )
		goto tr268;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr269;
	goto tr1;
case 237:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr269;
	goto tr1;
case 238:
	switch( (*p) ) {
		case 34: goto tr270;
		case 39: goto tr270;
		case 46: goto tr271;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr269;
	goto tr1;
case 239:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr272;
	goto tr1;
case 240:
	switch( (*p) ) {
		case 34: goto tr270;
		case 39: goto tr270;
		case 69: goto tr273;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr272;
	goto tr1;
case 241:
	if ( (*p) == 45 )
		goto tr274;
	goto tr1;
case 242:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr275;
	goto tr1;
case 243:
	switch( (*p) ) {
		case 34: goto tr270;
		case 39: goto tr270;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr275;
	goto tr1;
case 244:
	if ( (*p) == 110 )
		goto tr276;
	goto tr1;
case 245:
	if ( (*p) == 61 )
		goto tr277;
	goto tr1;
case 246:
	switch( (*p) ) {
		case 34: goto tr278;
		case 39: goto tr278;
	}
	goto tr1;
case 247:
	if ( (*p) == 45 )
		goto tr279;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr280;
	goto tr1;
case 248:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr280;
	goto tr1;
case 249:
	switch( (*p) ) {
		case 34: goto tr281;
		case 39: goto tr281;
		case 46: goto tr282;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr280;
	goto tr1;
case 250:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr283;
	goto tr1;
case 251:
	switch( (*p) ) {
		case 34: goto tr281;
		case 39: goto tr281;
		case 69: goto tr284;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr283;
	goto tr1;
case 252:
	if ( (*p) == 45 )
		goto tr285;
	goto tr1;
case 253:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr286;
	goto tr1;
case 254:
	switch( (*p) ) {
		case 34: goto tr281;
		case 39: goto tr281;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr286;
	goto tr1;
case 255:
	if ( (*p) == 101 )
		goto tr287;
	goto tr1;
case 256:
	if ( (*p) == 102 )
		goto tr288;
	goto tr1;
case 257:
	if ( (*p) == 61 )
		goto tr289;
	goto tr1;
case 258:
	switch( (*p) ) {
		case 34: goto tr290;
		case 39: goto tr290;
	}
	goto tr1;
case 259:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr291;
	goto tr1;
case 260:
	switch( (*p) ) {
		case 34: goto tr293;
		case 39: goto tr293;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr291;
	goto tr292;
case 676:
	switch( (*p) ) {
		case 32: goto tr355;
		case 47: goto tr56;
		case 60: goto tr732;
		case 62: goto tr49;
		case 97: goto tr733;
		case 99: goto tr734;
		case 105: goto tr735;
		case 107: goto tr258;
		case 108: goto tr736;
		case 114: goto tr737;
		case 116: goto tr738;
		case 117: goto tr739;
		case 118: goto tr740;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr744;
case 261:
	if ( (*p) == 105 )
		goto tr294;
	goto tr1;
case 262:
	if ( (*p) == 109 )
		goto tr295;
	goto tr1;
case 263:
	if ( (*p) == 101 )
		goto tr296;
	goto tr1;
case 264:
	if ( (*p) == 115 )
		goto tr297;
	goto tr1;
case 265:
	if ( (*p) == 116 )
		goto tr298;
	goto tr1;
case 266:
	if ( (*p) == 97 )
		goto tr299;
	goto tr1;
case 267:
	if ( (*p) == 109 )
		goto tr300;
	goto tr1;
case 268:
	if ( (*p) == 112 )
		goto tr301;
	goto tr1;
case 269:
	if ( (*p) == 61 )
		goto tr302;
	goto tr1;
case 270:
	switch( (*p) ) {
		case 34: goto tr303;
		case 39: goto tr303;
	}
	goto tr1;
case 271:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr304;
	goto tr1;
case 272:
	if ( (*p) == 45 )
		goto tr305;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr304;
	goto tr1;
case 273:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr306;
	goto tr1;
case 274:
	if ( (*p) == 45 )
		goto tr307;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr306;
	goto tr1;
case 275:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr308;
	goto tr1;
case 276:
	if ( (*p) == 84 )
		goto tr309;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr308;
	goto tr1;
case 277:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr310;
	goto tr1;
case 278:
	if ( (*p) == 58 )
		goto tr311;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr310;
	goto tr1;
case 279:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr312;
	goto tr1;
case 280:
	if ( (*p) == 58 )
		goto tr313;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr312;
	goto tr1;
case 281:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr314;
	goto tr1;
case 282:
	if ( (*p) == 90 )
		goto tr315;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr314;
	goto tr1;
case 283:
	switch( (*p) ) {
		case 34: goto tr317;
		case 39: goto tr317;
	}
	goto tr316;
case 677:
	switch( (*p) ) {
		case 32: goto tr355;
		case 47: goto tr56;
		case 60: goto tr732;
		case 62: goto tr49;
		case 97: goto tr733;
		case 99: goto tr734;
		case 105: goto tr735;
		case 107: goto tr258;
		case 108: goto tr736;
		case 114: goto tr737;
		case 116: goto tr738;
		case 117: goto tr739;
		case 118: goto tr740;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr745;
case 284:
	switch( (*p) ) {
		case 105: goto tr318;
		case 115: goto tr319;
	}
	goto tr1;
case 285:
	if ( (*p) == 100 )
		goto tr320;
	goto tr1;
case 286:
	if ( (*p) == 61 )
		goto tr321;
	goto tr1;
case 287:
	switch( (*p) ) {
		case 34: goto tr322;
		case 39: goto tr322;
	}
	goto tr1;
case 288:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr323;
	goto tr1;
case 289:
	switch( (*p) ) {
		case 34: goto tr325;
		case 39: goto tr325;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr323;
	goto tr324;
case 678:
	switch( (*p) ) {
		case 32: goto tr355;
		case 47: goto tr56;
		case 60: goto tr732;
		case 62: goto tr49;
		case 97: goto tr733;
		case 99: goto tr734;
		case 105: goto tr735;
		case 107: goto tr258;
		case 108: goto tr736;
		case 114: goto tr737;
		case 116: goto tr738;
		case 117: goto tr739;
		case 118: goto tr740;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr355;
	goto tr746;
case 290:
	switch( (*p) ) {
		case 32: goto tr326;
		case 61: goto tr327;
		case 101: goto tr328;
		case 105: goto tr329;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto tr1;
case 291:
	switch( (*p) ) {
		case 32: goto tr326;
		case 61: goto tr327;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto tr1;
case 292:
	switch( (*p) ) {
		case 34: goto tr330;
		case 39: goto tr330;
	}
	goto tr1;
case 293:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr331;
case 294:
	switch( (*p) ) {
		case 34: goto tr332;
		case 39: goto tr332;
	}
	goto tr331;
case 295:
	if ( (*p) == 114 )
		goto tr333;
	goto tr1;
case 296:
	if ( (*p) == 115 )
		goto tr334;
	goto tr1;
case 297:
	if ( (*p) == 105 )
		goto tr335;
	goto tr1;
case 298:
	if ( (*p) == 111 )
		goto tr336;
	goto tr1;
case 299:
	if ( (*p) == 110 )
		goto tr337;
	goto tr1;
case 300:
	if ( (*p) == 61 )
		goto tr338;
	goto tr1;
case 301:
	switch( (*p) ) {
		case 34: goto tr339;
		case 39: goto tr339;
	}
	goto tr1;
case 302:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr340;
	goto tr1;
case 303:
	switch( (*p) ) {
		case 34: goto tr341;
		case 39: goto tr341;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr340;
	goto tr1;
case 304:
	if ( (*p) == 115 )
		goto tr342;
	goto tr1;
case 305:
	if ( (*p) == 105 )
		goto tr343;
	goto tr1;
case 306:
	if ( (*p) == 98 )
		goto tr344;
	goto tr1;
case 307:
	if ( (*p) == 108 )
		goto tr345;
	goto tr1;
case 308:
	if ( (*p) == 101 )
		goto tr346;
	goto tr1;
case 309:
	if ( (*p) == 61 )
		goto tr347;
	goto tr1;
case 310:
	switch( (*p) ) {
		case 34: goto tr348;
		case 39: goto tr348;
	}
	goto tr1;
case 311:
	switch( (*p) ) {
		case 102: goto tr349;
		case 116: goto tr350;
	}
	goto tr1;
case 312:
	if ( (*p) == 97 )
		goto tr351;
	goto tr1;
case 313:
	if ( (*p) == 108 )
		goto tr352;
	goto tr1;
case 314:
	if ( (*p) == 115 )
		goto tr353;
	goto tr1;
case 315:
	if ( (*p) == 101 )
		goto tr354;
	goto tr1;
case 316:
	switch( (*p) ) {
		case 34: goto tr355;
		case 39: goto tr355;
	}
	goto tr1;
case 317:
	if ( (*p) == 114 )
		goto tr356;
	goto tr1;
case 318:
	if ( (*p) == 117 )
		goto tr357;
	goto tr1;
case 319:
	if ( (*p) == 101 )
		goto tr358;
	goto tr1;
case 320:
	if ( (*p) == 101 )
		goto tr359;
	goto tr1;
case 321:
	if ( (*p) == 114 )
		goto tr360;
	goto tr1;
case 322:
	if ( (*p) == 61 )
		goto tr361;
	goto tr1;
case 323:
	switch( (*p) ) {
		case 34: goto tr362;
		case 39: goto tr362;
	}
	goto tr1;
case 324:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr363;
case 325:
	switch( (*p) ) {
		case 34: goto tr364;
		case 39: goto tr364;
	}
	goto tr363;
case 326:
	if ( (*p) == 114 )
		goto tr365;
	goto tr2;
case 327:
	if ( (*p) == 101 )
		goto tr366;
	goto tr2;
case 328:
	if ( (*p) == 97 )
		goto tr367;
	goto tr2;
case 329:
	if ( (*p) == 116 )
		goto tr368;
	goto tr2;
case 330:
	if ( (*p) == 101 )
		goto tr369;
	goto tr2;
case 679:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr723;
case 680:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr377;
		case 60: goto tr755;
		case 62: goto tr370;
		case 97: goto tr756;
		case 99: goto tr757;
		case 105: goto tr758;
		case 107: goto tr412;
		case 108: goto tr759;
		case 114: goto tr760;
		case 116: goto tr761;
		case 117: goto tr762;
		case 118: goto tr763;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr251;
case 331:
	if ( (*p) == 62 )
		goto tr370;
	goto tr1;
case 332:
	switch( (*p) ) {
		case 47: goto tr371;
		case 98: goto tr31;
		case 99: goto tr32;
		case 100: goto tr33;
		case 109: goto tr34;
		case 110: goto tr35;
		case 114: goto tr36;
		case 116: goto tr37;
		case 119: goto tr38;
	}
	goto tr2;
case 333:
	switch( (*p) ) {
		case 110: goto tr372;
		case 114: goto tr373;
		case 119: goto tr374;
	}
	goto tr1;
case 334:
	if ( (*p) == 111 )
		goto tr375;
	goto tr1;
case 335:
	if ( (*p) == 100 )
		goto tr376;
	goto tr1;
case 336:
	if ( (*p) == 101 )
		goto tr377;
	goto tr1;
case 337:
	if ( (*p) == 101 )
		goto tr378;
	goto tr1;
case 338:
	if ( (*p) == 108 )
		goto tr379;
	goto tr1;
case 339:
	if ( (*p) == 97 )
		goto tr380;
	goto tr1;
case 340:
	if ( (*p) == 116 )
		goto tr381;
	goto tr1;
case 341:
	if ( (*p) == 105 )
		goto tr382;
	goto tr1;
case 342:
	if ( (*p) == 111 )
		goto tr383;
	goto tr1;
case 343:
	if ( (*p) == 110 )
		goto tr377;
	goto tr1;
case 344:
	if ( (*p) == 97 )
		goto tr384;
	goto tr1;
case 345:
	if ( (*p) == 121 )
		goto tr377;
	goto tr1;
case 346:
	if ( (*p) == 99 )
		goto tr385;
	goto tr1;
case 347:
	if ( (*p) == 116 )
		goto tr386;
	goto tr1;
case 348:
	if ( (*p) == 105 )
		goto tr387;
	goto tr1;
case 349:
	if ( (*p) == 111 )
		goto tr388;
	goto tr1;
case 350:
	if ( (*p) == 110 )
		goto tr389;
	goto tr1;
case 351:
	if ( (*p) == 61 )
		goto tr390;
	goto tr1;
case 352:
	switch( (*p) ) {
		case 34: goto tr391;
		case 39: goto tr391;
	}
	goto tr1;
case 353:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr392;
case 354:
	switch( (*p) ) {
		case 34: goto tr393;
		case 39: goto tr393;
	}
	goto tr392;
case 355:
	if ( (*p) == 104 )
		goto tr394;
	goto tr1;
case 356:
	if ( (*p) == 97 )
		goto tr395;
	goto tr1;
case 357:
	if ( (*p) == 110 )
		goto tr396;
	goto tr1;
case 358:
	if ( (*p) == 103 )
		goto tr397;
	goto tr1;
case 359:
	if ( (*p) == 101 )
		goto tr398;
	goto tr1;
case 360:
	if ( (*p) == 115 )
		goto tr399;
	goto tr1;
case 361:
	if ( (*p) == 101 )
		goto tr400;
	goto tr1;
case 362:
	if ( (*p) == 116 )
		goto tr401;
	goto tr1;
case 363:
	if ( (*p) == 61 )
		goto tr402;
	goto tr1;
case 364:
	switch( (*p) ) {
		case 34: goto tr403;
		case 39: goto tr403;
	}
	goto tr1;
case 365:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr404;
	goto tr1;
case 366:
	switch( (*p) ) {
		case 34: goto tr405;
		case 39: goto tr405;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr404;
	goto tr1;
case 367:
	if ( (*p) == 100 )
		goto tr406;
	goto tr251;
case 368:
	if ( (*p) == 61 )
		goto tr407;
	goto tr251;
case 369:
	switch( (*p) ) {
		case 34: goto tr408;
		case 39: goto tr408;
	}
	goto tr251;
case 370:
	if ( (*p) == 45 )
		goto tr409;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr410;
	goto tr251;
case 371:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr410;
	goto tr251;
case 372:
	switch( (*p) ) {
		case 34: goto tr411;
		case 39: goto tr411;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr410;
	goto tr251;
case 373:
	switch( (*p) ) {
		case 32: goto tr412;
		case 61: goto tr413;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr412;
	goto tr1;
case 374:
	switch( (*p) ) {
		case 34: goto tr414;
		case 39: goto tr414;
	}
	goto tr1;
case 375:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr415;
case 376:
	switch( (*p) ) {
		case 34: goto tr416;
		case 39: goto tr416;
	}
	goto tr415;
case 377:
	switch( (*p) ) {
		case 97: goto tr417;
		case 111: goto tr418;
	}
	goto tr1;
case 378:
	if ( (*p) == 116 )
		goto tr419;
	goto tr1;
case 379:
	if ( (*p) == 61 )
		goto tr420;
	goto tr1;
case 380:
	switch( (*p) ) {
		case 34: goto tr421;
		case 39: goto tr421;
	}
	goto tr1;
case 381:
	if ( (*p) == 45 )
		goto tr422;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr423;
	goto tr1;
case 382:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr423;
	goto tr1;
case 383:
	switch( (*p) ) {
		case 34: goto tr424;
		case 39: goto tr424;
		case 46: goto tr425;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr423;
	goto tr1;
case 384:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr426;
	goto tr1;
case 385:
	switch( (*p) ) {
		case 34: goto tr424;
		case 39: goto tr424;
		case 69: goto tr427;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr426;
	goto tr1;
case 386:
	if ( (*p) == 45 )
		goto tr428;
	goto tr1;
case 387:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr429;
	goto tr1;
case 388:
	switch( (*p) ) {
		case 34: goto tr424;
		case 39: goto tr424;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr429;
	goto tr1;
case 389:
	if ( (*p) == 110 )
		goto tr430;
	goto tr1;
case 390:
	if ( (*p) == 61 )
		goto tr431;
	goto tr1;
case 391:
	switch( (*p) ) {
		case 34: goto tr432;
		case 39: goto tr432;
	}
	goto tr1;
case 392:
	if ( (*p) == 45 )
		goto tr433;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr434;
	goto tr1;
case 393:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr434;
	goto tr1;
case 394:
	switch( (*p) ) {
		case 34: goto tr435;
		case 39: goto tr435;
		case 46: goto tr436;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr434;
	goto tr1;
case 395:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr437;
	goto tr1;
case 396:
	switch( (*p) ) {
		case 34: goto tr435;
		case 39: goto tr435;
		case 69: goto tr438;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr437;
	goto tr1;
case 397:
	if ( (*p) == 45 )
		goto tr439;
	goto tr1;
case 398:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr440;
	goto tr1;
case 399:
	switch( (*p) ) {
		case 34: goto tr435;
		case 39: goto tr435;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr440;
	goto tr1;
case 400:
	if ( (*p) == 101 )
		goto tr441;
	goto tr1;
case 401:
	if ( (*p) == 102 )
		goto tr442;
	goto tr1;
case 402:
	if ( (*p) == 61 )
		goto tr443;
	goto tr1;
case 403:
	switch( (*p) ) {
		case 34: goto tr444;
		case 39: goto tr444;
	}
	goto tr1;
case 404:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr445;
	goto tr1;
case 405:
	switch( (*p) ) {
		case 34: goto tr446;
		case 39: goto tr446;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr445;
	goto tr292;
case 681:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr377;
		case 60: goto tr755;
		case 62: goto tr370;
		case 97: goto tr756;
		case 99: goto tr757;
		case 105: goto tr758;
		case 107: goto tr412;
		case 108: goto tr759;
		case 114: goto tr760;
		case 116: goto tr761;
		case 117: goto tr762;
		case 118: goto tr763;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr744;
case 406:
	if ( (*p) == 105 )
		goto tr447;
	goto tr1;
case 407:
	if ( (*p) == 109 )
		goto tr448;
	goto tr1;
case 408:
	if ( (*p) == 101 )
		goto tr449;
	goto tr1;
case 409:
	if ( (*p) == 115 )
		goto tr450;
	goto tr1;
case 410:
	if ( (*p) == 116 )
		goto tr451;
	goto tr1;
case 411:
	if ( (*p) == 97 )
		goto tr452;
	goto tr1;
case 412:
	if ( (*p) == 109 )
		goto tr453;
	goto tr1;
case 413:
	if ( (*p) == 112 )
		goto tr454;
	goto tr1;
case 414:
	if ( (*p) == 61 )
		goto tr455;
	goto tr1;
case 415:
	switch( (*p) ) {
		case 34: goto tr456;
		case 39: goto tr456;
	}
	goto tr1;
case 416:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr457;
	goto tr1;
case 417:
	if ( (*p) == 45 )
		goto tr458;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr457;
	goto tr1;
case 418:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr459;
	goto tr1;
case 419:
	if ( (*p) == 45 )
		goto tr460;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr459;
	goto tr1;
case 420:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr461;
	goto tr1;
case 421:
	if ( (*p) == 84 )
		goto tr462;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr461;
	goto tr1;
case 422:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr463;
	goto tr1;
case 423:
	if ( (*p) == 58 )
		goto tr464;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr463;
	goto tr1;
case 424:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr465;
	goto tr1;
case 425:
	if ( (*p) == 58 )
		goto tr466;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr465;
	goto tr1;
case 426:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr467;
	goto tr1;
case 427:
	if ( (*p) == 90 )
		goto tr468;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr467;
	goto tr1;
case 428:
	switch( (*p) ) {
		case 34: goto tr469;
		case 39: goto tr469;
	}
	goto tr316;
case 682:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr377;
		case 60: goto tr755;
		case 62: goto tr370;
		case 97: goto tr756;
		case 99: goto tr757;
		case 105: goto tr758;
		case 107: goto tr412;
		case 108: goto tr759;
		case 114: goto tr760;
		case 116: goto tr761;
		case 117: goto tr762;
		case 118: goto tr763;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr745;
case 429:
	switch( (*p) ) {
		case 105: goto tr470;
		case 115: goto tr471;
	}
	goto tr1;
case 430:
	if ( (*p) == 100 )
		goto tr472;
	goto tr1;
case 431:
	if ( (*p) == 61 )
		goto tr473;
	goto tr1;
case 432:
	switch( (*p) ) {
		case 34: goto tr474;
		case 39: goto tr474;
	}
	goto tr1;
case 433:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr475;
	goto tr1;
case 434:
	switch( (*p) ) {
		case 34: goto tr476;
		case 39: goto tr476;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr475;
	goto tr324;
case 683:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr377;
		case 60: goto tr755;
		case 62: goto tr370;
		case 97: goto tr756;
		case 99: goto tr757;
		case 105: goto tr758;
		case 107: goto tr412;
		case 108: goto tr759;
		case 114: goto tr760;
		case 116: goto tr761;
		case 117: goto tr762;
		case 118: goto tr763;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr746;
case 435:
	switch( (*p) ) {
		case 32: goto tr477;
		case 61: goto tr478;
		case 101: goto tr479;
		case 105: goto tr480;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr477;
	goto tr1;
case 436:
	switch( (*p) ) {
		case 32: goto tr477;
		case 61: goto tr478;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr477;
	goto tr1;
case 437:
	switch( (*p) ) {
		case 34: goto tr481;
		case 39: goto tr481;
	}
	goto tr1;
case 438:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr482;
case 439:
	switch( (*p) ) {
		case 34: goto tr483;
		case 39: goto tr483;
	}
	goto tr482;
case 440:
	if ( (*p) == 114 )
		goto tr484;
	goto tr1;
case 441:
	if ( (*p) == 115 )
		goto tr485;
	goto tr1;
case 442:
	if ( (*p) == 105 )
		goto tr486;
	goto tr1;
case 443:
	if ( (*p) == 111 )
		goto tr487;
	goto tr1;
case 444:
	if ( (*p) == 110 )
		goto tr488;
	goto tr1;
case 445:
	if ( (*p) == 61 )
		goto tr489;
	goto tr1;
case 446:
	switch( (*p) ) {
		case 34: goto tr490;
		case 39: goto tr490;
	}
	goto tr1;
case 447:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr491;
	goto tr1;
case 448:
	switch( (*p) ) {
		case 34: goto tr492;
		case 39: goto tr492;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr491;
	goto tr1;
case 449:
	if ( (*p) == 115 )
		goto tr493;
	goto tr1;
case 450:
	if ( (*p) == 105 )
		goto tr494;
	goto tr1;
case 451:
	if ( (*p) == 98 )
		goto tr495;
	goto tr1;
case 452:
	if ( (*p) == 108 )
		goto tr496;
	goto tr1;
case 453:
	if ( (*p) == 101 )
		goto tr497;
	goto tr1;
case 454:
	if ( (*p) == 61 )
		goto tr498;
	goto tr1;
case 455:
	switch( (*p) ) {
		case 34: goto tr499;
		case 39: goto tr499;
	}
	goto tr1;
case 456:
	switch( (*p) ) {
		case 102: goto tr500;
		case 116: goto tr501;
	}
	goto tr1;
case 457:
	if ( (*p) == 97 )
		goto tr502;
	goto tr1;
case 458:
	if ( (*p) == 108 )
		goto tr503;
	goto tr1;
case 459:
	if ( (*p) == 115 )
		goto tr504;
	goto tr1;
case 460:
	if ( (*p) == 101 )
		goto tr505;
	goto tr1;
case 461:
	switch( (*p) ) {
		case 34: goto tr506;
		case 39: goto tr506;
	}
	goto tr1;
case 462:
	if ( (*p) == 114 )
		goto tr507;
	goto tr1;
case 463:
	if ( (*p) == 117 )
		goto tr508;
	goto tr1;
case 464:
	if ( (*p) == 101 )
		goto tr509;
	goto tr1;
case 465:
	if ( (*p) == 101 )
		goto tr510;
	goto tr1;
case 466:
	if ( (*p) == 114 )
		goto tr511;
	goto tr1;
case 467:
	if ( (*p) == 61 )
		goto tr512;
	goto tr1;
case 468:
	switch( (*p) ) {
		case 34: goto tr513;
		case 39: goto tr513;
	}
	goto tr1;
case 469:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr514;
case 470:
	switch( (*p) ) {
		case 34: goto tr515;
		case 39: goto tr515;
	}
	goto tr514;
case 471:
	if ( (*p) == 99 )
		goto tr516;
	goto tr69;
case 472:
	if ( (*p) == 116 )
		goto tr517;
	goto tr69;
case 473:
	if ( (*p) == 105 )
		goto tr518;
	goto tr69;
case 474:
	if ( (*p) == 111 )
		goto tr519;
	goto tr69;
case 475:
	if ( (*p) == 110 )
		goto tr520;
	goto tr69;
case 476:
	if ( (*p) == 61 )
		goto tr521;
	goto tr69;
case 477:
	switch( (*p) ) {
		case 34: goto tr522;
		case 39: goto tr522;
	}
	goto tr69;
case 478:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr523;
case 479:
	switch( (*p) ) {
		case 34: goto tr524;
		case 39: goto tr524;
	}
	goto tr523;
case 684:
	switch( (*p) ) {
		case 32: goto tr637;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr637;
	goto tr91;
case 480:
	if ( (*p) == 104 )
		goto tr525;
	goto tr69;
case 481:
	if ( (*p) == 97 )
		goto tr526;
	goto tr69;
case 482:
	if ( (*p) == 110 )
		goto tr527;
	goto tr69;
case 483:
	if ( (*p) == 103 )
		goto tr528;
	goto tr69;
case 484:
	if ( (*p) == 101 )
		goto tr529;
	goto tr69;
case 485:
	if ( (*p) == 115 )
		goto tr530;
	goto tr69;
case 486:
	if ( (*p) == 101 )
		goto tr531;
	goto tr69;
case 487:
	if ( (*p) == 116 )
		goto tr532;
	goto tr69;
case 488:
	if ( (*p) == 61 )
		goto tr533;
	goto tr69;
case 489:
	switch( (*p) ) {
		case 34: goto tr534;
		case 39: goto tr534;
	}
	goto tr69;
case 490:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr535;
	goto tr69;
case 491:
	switch( (*p) ) {
		case 34: goto tr536;
		case 39: goto tr536;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr535;
	goto tr69;
case 492:
	if ( (*p) == 100 )
		goto tr537;
	goto tr91;
case 493:
	if ( (*p) == 61 )
		goto tr538;
	goto tr91;
case 494:
	switch( (*p) ) {
		case 34: goto tr539;
		case 39: goto tr539;
	}
	goto tr91;
case 495:
	if ( (*p) == 45 )
		goto tr540;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr541;
	goto tr91;
case 496:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr541;
	goto tr91;
case 497:
	switch( (*p) ) {
		case 34: goto tr542;
		case 39: goto tr542;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr541;
	goto tr91;
case 498:
	switch( (*p) ) {
		case 32: goto tr543;
		case 61: goto tr544;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr543;
	goto tr69;
case 499:
	switch( (*p) ) {
		case 34: goto tr545;
		case 39: goto tr545;
	}
	goto tr69;
case 500:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr546;
case 501:
	switch( (*p) ) {
		case 34: goto tr547;
		case 39: goto tr547;
	}
	goto tr546;
case 502:
	switch( (*p) ) {
		case 97: goto tr548;
		case 111: goto tr549;
	}
	goto tr69;
case 503:
	if ( (*p) == 116 )
		goto tr550;
	goto tr69;
case 504:
	if ( (*p) == 61 )
		goto tr551;
	goto tr69;
case 505:
	switch( (*p) ) {
		case 34: goto tr552;
		case 39: goto tr552;
	}
	goto tr69;
case 506:
	if ( (*p) == 45 )
		goto tr553;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr554;
	goto tr69;
case 507:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr554;
	goto tr69;
case 508:
	switch( (*p) ) {
		case 34: goto tr555;
		case 39: goto tr555;
		case 46: goto tr556;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr554;
	goto tr69;
case 509:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr557;
	goto tr69;
case 510:
	switch( (*p) ) {
		case 34: goto tr555;
		case 39: goto tr555;
		case 69: goto tr558;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr557;
	goto tr69;
case 511:
	if ( (*p) == 45 )
		goto tr559;
	goto tr69;
case 512:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr560;
	goto tr69;
case 513:
	switch( (*p) ) {
		case 34: goto tr555;
		case 39: goto tr555;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr560;
	goto tr69;
case 514:
	if ( (*p) == 110 )
		goto tr561;
	goto tr69;
case 515:
	if ( (*p) == 61 )
		goto tr562;
	goto tr69;
case 516:
	switch( (*p) ) {
		case 34: goto tr563;
		case 39: goto tr563;
	}
	goto tr69;
case 517:
	if ( (*p) == 45 )
		goto tr564;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr565;
	goto tr69;
case 518:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr565;
	goto tr69;
case 519:
	switch( (*p) ) {
		case 34: goto tr566;
		case 39: goto tr566;
		case 46: goto tr567;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr565;
	goto tr69;
case 520:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr568;
	goto tr69;
case 521:
	switch( (*p) ) {
		case 34: goto tr566;
		case 39: goto tr566;
		case 69: goto tr569;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr568;
	goto tr69;
case 522:
	if ( (*p) == 45 )
		goto tr570;
	goto tr69;
case 523:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr571;
	goto tr69;
case 524:
	switch( (*p) ) {
		case 34: goto tr566;
		case 39: goto tr566;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr571;
	goto tr69;
case 525:
	if ( (*p) == 101 )
		goto tr572;
	goto tr69;
case 526:
	if ( (*p) == 102 )
		goto tr573;
	goto tr69;
case 527:
	if ( (*p) == 61 )
		goto tr574;
	goto tr69;
case 528:
	switch( (*p) ) {
		case 34: goto tr575;
		case 39: goto tr575;
	}
	goto tr69;
case 529:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr576;
	goto tr69;
case 530:
	switch( (*p) ) {
		case 34: goto tr577;
		case 39: goto tr577;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr576;
	goto tr132;
case 685:
	switch( (*p) ) {
		case 32: goto tr637;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr637;
	goto tr741;
case 531:
	if ( (*p) == 105 )
		goto tr578;
	goto tr69;
case 532:
	if ( (*p) == 109 )
		goto tr579;
	goto tr69;
case 533:
	if ( (*p) == 101 )
		goto tr580;
	goto tr69;
case 534:
	if ( (*p) == 115 )
		goto tr581;
	goto tr69;
case 535:
	if ( (*p) == 116 )
		goto tr582;
	goto tr69;
case 536:
	if ( (*p) == 97 )
		goto tr583;
	goto tr69;
case 537:
	if ( (*p) == 109 )
		goto tr584;
	goto tr69;
case 538:
	if ( (*p) == 112 )
		goto tr585;
	goto tr69;
case 539:
	if ( (*p) == 61 )
		goto tr586;
	goto tr69;
case 540:
	switch( (*p) ) {
		case 34: goto tr587;
		case 39: goto tr587;
	}
	goto tr69;
case 541:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr588;
	goto tr69;
case 542:
	if ( (*p) == 45 )
		goto tr589;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr588;
	goto tr69;
case 543:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr590;
	goto tr69;
case 544:
	if ( (*p) == 45 )
		goto tr591;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr590;
	goto tr69;
case 545:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr592;
	goto tr69;
case 546:
	if ( (*p) == 84 )
		goto tr593;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr592;
	goto tr69;
case 547:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr594;
	goto tr69;
case 548:
	if ( (*p) == 58 )
		goto tr595;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr594;
	goto tr69;
case 549:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr596;
	goto tr69;
case 550:
	if ( (*p) == 58 )
		goto tr597;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr596;
	goto tr69;
case 551:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr598;
	goto tr69;
case 552:
	if ( (*p) == 90 )
		goto tr599;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr598;
	goto tr69;
case 553:
	switch( (*p) ) {
		case 34: goto tr600;
		case 39: goto tr600;
	}
	goto tr156;
case 686:
	switch( (*p) ) {
		case 32: goto tr637;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr637;
	goto tr742;
case 554:
	switch( (*p) ) {
		case 105: goto tr601;
		case 115: goto tr602;
	}
	goto tr69;
case 555:
	if ( (*p) == 100 )
		goto tr603;
	goto tr69;
case 556:
	if ( (*p) == 61 )
		goto tr604;
	goto tr69;
case 557:
	switch( (*p) ) {
		case 34: goto tr605;
		case 39: goto tr605;
	}
	goto tr69;
case 558:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr606;
	goto tr69;
case 559:
	switch( (*p) ) {
		case 34: goto tr607;
		case 39: goto tr607;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr606;
	goto tr164;
case 687:
	switch( (*p) ) {
		case 32: goto tr637;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr637;
	goto tr743;
case 560:
	switch( (*p) ) {
		case 32: goto tr608;
		case 61: goto tr609;
		case 101: goto tr610;
		case 105: goto tr611;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr608;
	goto tr69;
case 561:
	switch( (*p) ) {
		case 32: goto tr608;
		case 61: goto tr609;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr608;
	goto tr69;
case 562:
	switch( (*p) ) {
		case 34: goto tr612;
		case 39: goto tr612;
	}
	goto tr69;
case 563:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr613;
case 564:
	switch( (*p) ) {
		case 34: goto tr614;
		case 39: goto tr614;
	}
	goto tr613;
case 565:
	if ( (*p) == 114 )
		goto tr615;
	goto tr69;
case 566:
	if ( (*p) == 115 )
		goto tr616;
	goto tr69;
case 567:
	if ( (*p) == 105 )
		goto tr617;
	goto tr69;
case 568:
	if ( (*p) == 111 )
		goto tr618;
	goto tr69;
case 569:
	if ( (*p) == 110 )
		goto tr619;
	goto tr69;
case 570:
	if ( (*p) == 61 )
		goto tr620;
	goto tr69;
case 571:
	switch( (*p) ) {
		case 34: goto tr621;
		case 39: goto tr621;
	}
	goto tr69;
case 572:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr622;
	goto tr69;
case 573:
	switch( (*p) ) {
		case 34: goto tr623;
		case 39: goto tr623;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr622;
	goto tr69;
case 574:
	if ( (*p) == 115 )
		goto tr624;
	goto tr69;
case 575:
	if ( (*p) == 105 )
		goto tr625;
	goto tr69;
case 576:
	if ( (*p) == 98 )
		goto tr626;
	goto tr69;
case 577:
	if ( (*p) == 108 )
		goto tr627;
	goto tr69;
case 578:
	if ( (*p) == 101 )
		goto tr628;
	goto tr69;
case 579:
	if ( (*p) == 61 )
		goto tr629;
	goto tr69;
case 580:
	switch( (*p) ) {
		case 34: goto tr630;
		case 39: goto tr630;
	}
	goto tr69;
case 581:
	switch( (*p) ) {
		case 102: goto tr631;
		case 116: goto tr632;
	}
	goto tr69;
case 582:
	if ( (*p) == 97 )
		goto tr633;
	goto tr69;
case 583:
	if ( (*p) == 108 )
		goto tr634;
	goto tr69;
case 584:
	if ( (*p) == 115 )
		goto tr635;
	goto tr69;
case 585:
	if ( (*p) == 101 )
		goto tr636;
	goto tr69;
case 586:
	switch( (*p) ) {
		case 34: goto tr637;
		case 39: goto tr637;
	}
	goto tr69;
case 587:
	if ( (*p) == 114 )
		goto tr638;
	goto tr69;
case 588:
	if ( (*p) == 117 )
		goto tr639;
	goto tr69;
case 589:
	if ( (*p) == 101 )
		goto tr640;
	goto tr69;
case 590:
	if ( (*p) == 101 )
		goto tr641;
	goto tr69;
case 591:
	if ( (*p) == 114 )
		goto tr642;
	goto tr69;
case 592:
	if ( (*p) == 61 )
		goto tr643;
	goto tr69;
case 593:
	switch( (*p) ) {
		case 34: goto tr644;
		case 39: goto tr644;
	}
	goto tr69;
case 594:
	switch( (*p) ) {
		case 34: goto tr69;
		case 39: goto tr69;
	}
	goto tr645;
case 595:
	switch( (*p) ) {
		case 34: goto tr646;
		case 39: goto tr646;
	}
	goto tr645;
case 596:
	if ( (*p) == 101 )
		goto tr647;
	goto tr1;
case 597:
	if ( (*p) == 108 )
		goto tr648;
	goto tr1;
case 598:
	if ( (*p) == 101 )
		goto tr649;
	goto tr1;
case 599:
	if ( (*p) == 116 )
		goto tr650;
	goto tr1;
case 600:
	if ( (*p) == 101 )
		goto tr651;
	goto tr1;
case 688:
	switch( (*p) ) {
		case 32: goto tr506;
		case 47: goto tr18;
		case 60: goto tr721;
		case 62: goto tr0;
		case 97: goto tr747;
		case 99: goto tr748;
		case 105: goto tr749;
		case 107: goto tr543;
		case 108: goto tr750;
		case 114: goto tr751;
		case 116: goto tr752;
		case 117: goto tr753;
		case 118: goto tr754;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr506;
	goto tr91;
case 601:
	switch( (*p) ) {
		case 101: goto tr652;
		case 111: goto tr653;
	}
	goto tr1;
case 602:
	if ( (*p) == 109 )
		goto tr654;
	goto tr1;
case 603:
	if ( (*p) == 98 )
		goto tr655;
	goto tr1;
case 604:
	if ( (*p) == 101 )
		goto tr656;
	goto tr1;
case 605:
	if ( (*p) == 114 )
		goto tr657;
	goto tr1;
case 606:
	if ( (*p) == 100 )
		goto tr658;
	goto tr1;
case 607:
	if ( (*p) == 105 )
		goto tr659;
	goto tr1;
case 608:
	if ( (*p) == 102 )
		goto tr660;
	goto tr1;
case 609:
	if ( (*p) == 121 )
		goto tr661;
	goto tr1;
case 610:
	switch( (*p) ) {
		case 100: goto tr662;
		case 111: goto tr663;
	}
	goto tr1;
case 611:
	if ( (*p) == 100 )
		goto tr664;
	goto tr1;
case 612:
	if ( (*p) == 101 )
		goto tr665;
	goto tr1;
case 613:
	if ( (*p) == 115 )
		goto tr666;
	goto tr1;
case 614:
	if ( (*p) == 109 )
		goto tr667;
	goto tr1;
case 615:
	goto tr668;
case 689:
	goto tr668;
case 616:
	if ( (*p) == 101 )
		goto tr669;
	goto tr1;
case 617:
	if ( (*p) == 108 )
		goto tr670;
	goto tr1;
case 618:
	if ( (*p) == 97 )
		goto tr671;
	goto tr1;
case 619:
	if ( (*p) == 116 )
		goto tr672;
	goto tr1;
case 620:
	if ( (*p) == 105 )
		goto tr673;
	goto tr1;
case 621:
	if ( (*p) == 111 )
		goto tr674;
	goto tr1;
case 622:
	if ( (*p) == 110 )
		goto tr675;
	goto tr1;
case 623:
	if ( (*p) == 97 )
		goto tr676;
	goto tr1;
case 624:
	if ( (*p) == 103 )
		goto tr677;
	goto tr1;
case 625:
	if ( (*p) == 97 )
		goto tr678;
	goto tr1;
case 626:
	if ( (*p) == 121 )
		goto tr679;
	goto tr1;
case 627:
	switch( (*p) ) {
		case 47: goto tr3;
		case 63: goto tr680;
		case 98: goto tr4;
		case 99: goto tr5;
		case 100: goto tr6;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr2;
case 628:
	if ( (*p) == 120 )
		goto tr681;
	goto tr1;
case 629:
	if ( (*p) == 109 )
		goto tr682;
	goto tr1;
case 630:
	if ( (*p) == 108 )
		goto tr683;
	goto tr1;
case 631:
	if ( (*p) == 32 )
		goto tr684;
	goto tr1;
case 632:
	if ( (*p) == 118 )
		goto tr685;
	goto tr1;
case 633:
	if ( (*p) == 101 )
		goto tr686;
	goto tr1;
case 634:
	if ( (*p) == 114 )
		goto tr687;
	goto tr1;
case 635:
	if ( (*p) == 115 )
		goto tr688;
	goto tr1;
case 636:
	if ( (*p) == 105 )
		goto tr689;
	goto tr1;
case 637:
	if ( (*p) == 111 )
		goto tr690;
	goto tr1;
case 638:
	if ( (*p) == 110 )
		goto tr691;
	goto tr1;
case 639:
	if ( (*p) == 61 )
		goto tr692;
	goto tr1;
case 640:
	if ( (*p) == 39 )
		goto tr693;
	goto tr1;
case 641:
	if ( (*p) == 49 )
		goto tr694;
	goto tr1;
case 642:
	if ( (*p) == 46 )
		goto tr695;
	goto tr1;
case 643:
	if ( (*p) == 48 )
		goto tr696;
	goto tr1;
case 644:
	if ( (*p) == 39 )
		goto tr697;
	goto tr1;
case 645:
	if ( (*p) == 32 )
		goto tr698;
	goto tr1;
case 646:
	if ( (*p) == 101 )
		goto tr699;
	goto tr1;
case 647:
	if ( (*p) == 110 )
		goto tr700;
	goto tr1;
case 648:
	if ( (*p) == 99 )
		goto tr701;
	goto tr1;
case 649:
	if ( (*p) == 111 )
		goto tr702;
	goto tr1;
case 650:
	if ( (*p) == 100 )
		goto tr703;
	goto tr1;
case 651:
	if ( (*p) == 105 )
		goto tr704;
	goto tr1;
case 652:
	if ( (*p) == 110 )
		goto tr705;
	goto tr1;
case 653:
	if ( (*p) == 103 )
		goto tr706;
	goto tr1;
case 654:
	if ( (*p) == 61 )
		goto tr707;
	goto tr1;
case 655:
	if ( (*p) == 39 )
		goto tr708;
	goto tr1;
case 656:
	if ( (*p) == 85 )
		goto tr709;
	goto tr1;
case 657:
	if ( (*p) == 84 )
		goto tr710;
	goto tr1;
case 658:
	if ( (*p) == 70 )
		goto tr711;
	goto tr1;
case 659:
	if ( (*p) == 45 )
		goto tr712;
	goto tr1;
case 660:
	if ( (*p) == 56 )
		goto tr713;
	goto tr1;
case 661:
	if ( (*p) == 39 )
		goto tr714;
	goto tr1;
case 662:
	if ( (*p) == 63 )
		goto tr715;
	goto tr1;
case 663:
	if ( (*p) == 62 )
		goto tr716;
	goto tr1;
case 690:
	goto tr1;
	}

	tr1: cs = 0; goto _again;
	tr2: _ps = cs;cs = 0; goto f1;
	tr69: _ps = cs;cs = 0; goto f5;
	tr91: _ps = cs;cs = 0; goto f10;
	tr132: _ps = cs;cs = 0; goto f15;
	tr156: _ps = cs;cs = 0; goto f23;
	tr164: _ps = cs;cs = 0; goto f24;
	tr251: _ps = cs;cs = 0; goto f38;
	tr292: _ps = cs;cs = 0; goto f39;
	tr316: _ps = cs;cs = 0; goto f40;
	tr324: _ps = cs;cs = 0; goto f41;
	tr723: _ps = cs;cs = 0; goto f42;
	tr741: _ps = cs;cs = 0; goto f43;
	tr742: _ps = cs;cs = 0; goto f44;
	tr743: _ps = cs;cs = 0; goto f45;
	tr744: _ps = cs;cs = 0; goto f46;
	tr745: _ps = cs;cs = 0; goto f47;
	tr746: _ps = cs;cs = 0; goto f48;
	tr18: cs = 1; goto _again;
	tr719: cs = 2; goto _again;
	tr3: cs = 3; goto _again;
	tr13: cs = 4; goto _again;
	tr16: cs = 5; goto _again;
	tr17: cs = 6; goto _again;
	tr14: cs = 7; goto _again;
	tr19: cs = 8; goto _again;
	tr20: cs = 9; goto _again;
	tr21: cs = 10; goto _again;
	tr22: cs = 11; goto _again;
	tr23: cs = 12; goto _again;
	tr24: cs = 13; goto _again;
	tr15: cs = 14; goto _again;
	tr25: cs = 15; goto _again;
	tr4: cs = 16; goto _again;
	tr26: cs = 17; goto _again;
	tr27: cs = 18; goto _again;
	tr28: cs = 19; goto _again;
	tr29: cs = 20; goto _again;
	tr721: cs = 21; goto _again;
	tr31: cs = 22; goto _again;
	tr39: cs = 23; goto _again;
	tr40: cs = 24; goto _again;
	tr41: cs = 25; goto _again;
	tr42: cs = 26; goto _again;
	tr722: cs = 27; goto _again;
	tr32: cs = 28; goto _again;
	tr44: cs = 29; goto _again;
	tr45: cs = 30; goto _again;
	tr46: cs = 31; goto _again;
	tr47: cs = 32; goto _again;
	tr56: cs = 33; goto _again;
	tr732: cs = 34; goto _again;
	tr50: cs = 35; goto _again;
	tr51: cs = 36; goto _again;
	tr54: cs = 37; goto _again;
	tr55: cs = 38; goto _again;
	tr52: cs = 39; goto _again;
	tr57: cs = 40; goto _again;
	tr58: cs = 41; goto _again;
	tr59: cs = 42; goto _again;
	tr60: cs = 43; goto _again;
	tr61: cs = 44; goto _again;
	tr62: cs = 45; goto _again;
	tr53: cs = 46; goto _again;
	tr63: cs = 47; goto _again;
	tr33: cs = 48; goto _again;
	tr64: cs = 49; goto _again;
	tr65: cs = 50; goto _again;
	tr66: cs = 51; goto _again;
	tr67: cs = 52; goto _again;
	tr724: cs = 53; goto _again;
	tr70: cs = 54; goto _again;
	tr71: cs = 55; goto _again;
	tr72: cs = 56; goto _again;
	tr73: cs = 57; goto _again;
	tr74: cs = 58; goto _again;
	tr75: cs = 59; goto _again;
	tr76: cs = 60; goto f6;
	tr77: cs = 61; goto f7;
	tr725: cs = 62; goto _again;
	tr79: cs = 63; goto _again;
	tr80: cs = 64; goto _again;
	tr81: cs = 65; goto _again;
	tr82: cs = 66; goto _again;
	tr83: cs = 67; goto _again;
	tr84: cs = 68; goto _again;
	tr85: cs = 69; goto _again;
	tr86: cs = 70; goto _again;
	tr87: cs = 71; goto _again;
	tr88: cs = 72; goto f6;
	tr89: cs = 73; goto f7;
	tr726: cs = 74; goto _again;
	tr92: cs = 75; goto _again;
	tr93: cs = 76; goto _again;
	tr94: cs = 77; goto f6;
	tr95: cs = 78; goto f7;
	tr96: cs = 79; goto f7;
	tr98: cs = 80; goto _again;
	tr99: cs = 81; goto _again;
	tr100: cs = 82; goto _again;
	tr101: cs = 83; goto f7;
	tr727: cs = 84; goto _again;
	tr103: cs = 85; goto _again;
	tr105: cs = 86; goto _again;
	tr106: cs = 87; goto _again;
	tr107: cs = 88; goto f6;
	tr108: cs = 89; goto f7;
	tr109: cs = 90; goto f7;
	tr111: cs = 91; goto f7;
	tr112: cs = 92; goto f7;
	tr113: cs = 93; goto f7;
	tr114: cs = 94; goto f7;
	tr115: cs = 95; goto f7;
	tr104: cs = 96; goto _again;
	tr116: cs = 97; goto _again;
	tr117: cs = 98; goto _again;
	tr118: cs = 99; goto f6;
	tr119: cs = 100; goto f7;
	tr120: cs = 101; goto f7;
	tr122: cs = 102; goto f7;
	tr123: cs = 103; goto f7;
	tr124: cs = 104; goto f7;
	tr125: cs = 105; goto f7;
	tr126: cs = 106; goto f7;
	tr728: cs = 107; goto _again;
	tr127: cs = 108; goto _again;
	tr128: cs = 109; goto _again;
	tr129: cs = 110; goto _again;
	tr130: cs = 111; goto f6;
	tr131: cs = 112; goto f7;
	tr729: cs = 113; goto _again;
	tr134: cs = 114; goto _again;
	tr135: cs = 115; goto _again;
	tr136: cs = 116; goto _again;
	tr137: cs = 117; goto _again;
	tr138: cs = 118; goto _again;
	tr139: cs = 119; goto _again;
	tr140: cs = 120; goto _again;
	tr141: cs = 121; goto _again;
	tr142: cs = 122; goto _again;
	tr143: cs = 123; goto f6;
	tr144: cs = 124; goto f7;
	tr145: cs = 125; goto f17;
	tr146: cs = 126; goto f7;
	tr147: cs = 127; goto f18;
	tr148: cs = 128; goto f7;
	tr149: cs = 129; goto f19;
	tr150: cs = 130; goto f7;
	tr151: cs = 131; goto f20;
	tr152: cs = 132; goto f7;
	tr153: cs = 133; goto f21;
	tr154: cs = 134; goto f7;
	tr155: cs = 135; goto f22;
	tr730: cs = 136; goto _again;
	tr158: cs = 137; goto _again;
	tr160: cs = 138; goto _again;
	tr161: cs = 139; goto _again;
	tr162: cs = 140; goto f6;
	tr163: cs = 141; goto f7;
	tr731: cs = 142; goto _again;
	tr166: cs = 143; goto _again;
	tr167: cs = 144; goto _again;
	tr170: cs = 145; goto _again;
	tr171: cs = 146; goto f7;
	tr168: cs = 147; goto _again;
	tr173: cs = 148; goto _again;
	tr174: cs = 149; goto _again;
	tr175: cs = 150; goto _again;
	tr176: cs = 151; goto _again;
	tr177: cs = 152; goto _again;
	tr178: cs = 153; goto _again;
	tr179: cs = 154; goto f6;
	tr180: cs = 155; goto f7;
	tr169: cs = 156; goto _again;
	tr182: cs = 157; goto _again;
	tr183: cs = 158; goto _again;
	tr184: cs = 159; goto _again;
	tr185: cs = 160; goto _again;
	tr186: cs = 161; goto _again;
	tr187: cs = 162; goto _again;
	tr188: cs = 163; goto f6;
	tr189: cs = 164; goto _again;
	tr191: cs = 165; goto _again;
	tr192: cs = 166; goto _again;
	tr193: cs = 167; goto _again;
	tr194: cs = 168; goto f28;
	tr198: cs = 168; goto f29;
	tr190: cs = 169; goto _again;
	tr196: cs = 170; goto _again;
	tr197: cs = 171; goto _again;
	tr159: cs = 172; goto _again;
	tr199: cs = 173; goto _again;
	tr200: cs = 174; goto _again;
	tr201: cs = 175; goto _again;
	tr202: cs = 176; goto f6;
	tr203: cs = 177; goto f7;
	tr34: cs = 178; goto _again;
	tr205: cs = 179; goto _again;
	tr207: cs = 180; goto _again;
	tr208: cs = 181; goto _again;
	tr209: cs = 182; goto _again;
	tr206: cs = 183; goto _again;
	tr211: cs = 184; goto _again;
	tr212: cs = 185; goto _again;
	tr213: cs = 186; goto _again;
	tr35: cs = 187; goto _again;
	tr216: cs = 188; goto _again;
	tr217: cs = 189; goto _again;
	tr36: cs = 190; goto _again;
	tr219: cs = 191; goto _again;
	tr220: cs = 192; goto _again;
	tr221: cs = 193; goto _again;
	tr222: cs = 194; goto _again;
	tr223: cs = 195; goto _again;
	tr224: cs = 196; goto _again;
	tr37: cs = 197; goto _again;
	tr226: cs = 198; goto _again;
	tr38: cs = 199; goto _again;
	tr228: cs = 200; goto _again;
	tr733: cs = 201; goto _again;
	tr230: cs = 202; goto _again;
	tr231: cs = 203; goto _again;
	tr232: cs = 204; goto _again;
	tr233: cs = 205; goto _again;
	tr234: cs = 206; goto _again;
	tr235: cs = 207; goto _again;
	tr236: cs = 208; goto f6;
	tr237: cs = 209; goto f7;
	tr734: cs = 210; goto _again;
	tr239: cs = 211; goto _again;
	tr240: cs = 212; goto _again;
	tr241: cs = 213; goto _again;
	tr242: cs = 214; goto _again;
	tr243: cs = 215; goto _again;
	tr244: cs = 216; goto _again;
	tr245: cs = 217; goto _again;
	tr246: cs = 218; goto _again;
	tr247: cs = 219; goto _again;
	tr248: cs = 220; goto f6;
	tr249: cs = 221; goto f7;
	tr735: cs = 222; goto _again;
	tr252: cs = 223; goto _again;
	tr253: cs = 224; goto _again;
	tr254: cs = 225; goto f6;
	tr255: cs = 226; goto f7;
	tr256: cs = 227; goto f7;
	tr258: cs = 228; goto _again;
	tr259: cs = 229; goto _again;
	tr260: cs = 230; goto _again;
	tr261: cs = 231; goto f7;
	tr736: cs = 232; goto _again;
	tr263: cs = 233; goto _again;
	tr265: cs = 234; goto _again;
	tr266: cs = 235; goto _again;
	tr267: cs = 236; goto f6;
	tr268: cs = 237; goto f7;
	tr269: cs = 238; goto f7;
	tr271: cs = 239; goto f7;
	tr272: cs = 240; goto f7;
	tr273: cs = 241; goto f7;
	tr274: cs = 242; goto f7;
	tr275: cs = 243; goto f7;
	tr264: cs = 244; goto _again;
	tr276: cs = 245; goto _again;
	tr277: cs = 246; goto _again;
	tr278: cs = 247; goto f6;
	tr279: cs = 248; goto f7;
	tr280: cs = 249; goto f7;
	tr282: cs = 250; goto f7;
	tr283: cs = 251; goto f7;
	tr284: cs = 252; goto f7;
	tr285: cs = 253; goto f7;
	tr286: cs = 254; goto f7;
	tr737: cs = 255; goto _again;
	tr287: cs = 256; goto _again;
	tr288: cs = 257; goto _again;
	tr289: cs = 258; goto _again;
	tr290: cs = 259; goto f6;
	tr291: cs = 260; goto f7;
	tr738: cs = 261; goto _again;
	tr294: cs = 262; goto _again;
	tr295: cs = 263; goto _again;
	tr296: cs = 264; goto _again;
	tr297: cs = 265; goto _again;
	tr298: cs = 266; goto _again;
	tr299: cs = 267; goto _again;
	tr300: cs = 268; goto _again;
	tr301: cs = 269; goto _again;
	tr302: cs = 270; goto _again;
	tr303: cs = 271; goto f6;
	tr304: cs = 272; goto f7;
	tr305: cs = 273; goto f17;
	tr306: cs = 274; goto f7;
	tr307: cs = 275; goto f18;
	tr308: cs = 276; goto f7;
	tr309: cs = 277; goto f19;
	tr310: cs = 278; goto f7;
	tr311: cs = 279; goto f20;
	tr312: cs = 280; goto f7;
	tr313: cs = 281; goto f21;
	tr314: cs = 282; goto f7;
	tr315: cs = 283; goto f22;
	tr739: cs = 284; goto _again;
	tr318: cs = 285; goto _again;
	tr320: cs = 286; goto _again;
	tr321: cs = 287; goto _again;
	tr322: cs = 288; goto f6;
	tr323: cs = 289; goto f7;
	tr740: cs = 290; goto _again;
	tr326: cs = 291; goto _again;
	tr327: cs = 292; goto _again;
	tr330: cs = 293; goto _again;
	tr331: cs = 294; goto f7;
	tr328: cs = 295; goto _again;
	tr333: cs = 296; goto _again;
	tr334: cs = 297; goto _again;
	tr335: cs = 298; goto _again;
	tr336: cs = 299; goto _again;
	tr337: cs = 300; goto _again;
	tr338: cs = 301; goto _again;
	tr339: cs = 302; goto f6;
	tr340: cs = 303; goto f7;
	tr329: cs = 304; goto _again;
	tr342: cs = 305; goto _again;
	tr343: cs = 306; goto _again;
	tr344: cs = 307; goto _again;
	tr345: cs = 308; goto _again;
	tr346: cs = 309; goto _again;
	tr347: cs = 310; goto _again;
	tr348: cs = 311; goto f6;
	tr349: cs = 312; goto _again;
	tr351: cs = 313; goto _again;
	tr352: cs = 314; goto _again;
	tr353: cs = 315; goto _again;
	tr354: cs = 316; goto f28;
	tr358: cs = 316; goto f29;
	tr350: cs = 317; goto _again;
	tr356: cs = 318; goto _again;
	tr357: cs = 319; goto _again;
	tr319: cs = 320; goto _again;
	tr359: cs = 321; goto _again;
	tr360: cs = 322; goto _again;
	tr361: cs = 323; goto _again;
	tr362: cs = 324; goto f6;
	tr363: cs = 325; goto f7;
	tr5: cs = 326; goto _again;
	tr365: cs = 327; goto _again;
	tr366: cs = 328; goto _again;
	tr367: cs = 329; goto _again;
	tr368: cs = 330; goto _again;
	tr377: cs = 331; goto _again;
	tr755: cs = 332; goto _again;
	tr371: cs = 333; goto _again;
	tr372: cs = 334; goto _again;
	tr375: cs = 335; goto _again;
	tr376: cs = 336; goto _again;
	tr373: cs = 337; goto _again;
	tr378: cs = 338; goto _again;
	tr379: cs = 339; goto _again;
	tr380: cs = 340; goto _again;
	tr381: cs = 341; goto _again;
	tr382: cs = 342; goto _again;
	tr383: cs = 343; goto _again;
	tr374: cs = 344; goto _again;
	tr384: cs = 345; goto _again;
	tr756: cs = 346; goto _again;
	tr385: cs = 347; goto _again;
	tr386: cs = 348; goto _again;
	tr387: cs = 349; goto _again;
	tr388: cs = 350; goto _again;
	tr389: cs = 351; goto _again;
	tr390: cs = 352; goto _again;
	tr391: cs = 353; goto f6;
	tr392: cs = 354; goto f7;
	tr757: cs = 355; goto _again;
	tr394: cs = 356; goto _again;
	tr395: cs = 357; goto _again;
	tr396: cs = 358; goto _again;
	tr397: cs = 359; goto _again;
	tr398: cs = 360; goto _again;
	tr399: cs = 361; goto _again;
	tr400: cs = 362; goto _again;
	tr401: cs = 363; goto _again;
	tr402: cs = 364; goto _again;
	tr403: cs = 365; goto f6;
	tr404: cs = 366; goto f7;
	tr758: cs = 367; goto _again;
	tr406: cs = 368; goto _again;
	tr407: cs = 369; goto _again;
	tr408: cs = 370; goto f6;
	tr409: cs = 371; goto f7;
	tr410: cs = 372; goto f7;
	tr412: cs = 373; goto _again;
	tr413: cs = 374; goto _again;
	tr414: cs = 375; goto _again;
	tr415: cs = 376; goto f7;
	tr759: cs = 377; goto _again;
	tr417: cs = 378; goto _again;
	tr419: cs = 379; goto _again;
	tr420: cs = 380; goto _again;
	tr421: cs = 381; goto f6;
	tr422: cs = 382; goto f7;
	tr423: cs = 383; goto f7;
	tr425: cs = 384; goto f7;
	tr426: cs = 385; goto f7;
	tr427: cs = 386; goto f7;
	tr428: cs = 387; goto f7;
	tr429: cs = 388; goto f7;
	tr418: cs = 389; goto _again;
	tr430: cs = 390; goto _again;
	tr431: cs = 391; goto _again;
	tr432: cs = 392; goto f6;
	tr433: cs = 393; goto f7;
	tr434: cs = 394; goto f7;
	tr436: cs = 395; goto f7;
	tr437: cs = 396; goto f7;
	tr438: cs = 397; goto f7;
	tr439: cs = 398; goto f7;
	tr440: cs = 399; goto f7;
	tr760: cs = 400; goto _again;
	tr441: cs = 401; goto _again;
	tr442: cs = 402; goto _again;
	tr443: cs = 403; goto _again;
	tr444: cs = 404; goto f6;
	tr445: cs = 405; goto f7;
	tr761: cs = 406; goto _again;
	tr447: cs = 407; goto _again;
	tr448: cs = 408; goto _again;
	tr449: cs = 409; goto _again;
	tr450: cs = 410; goto _again;
	tr451: cs = 411; goto _again;
	tr452: cs = 412; goto _again;
	tr453: cs = 413; goto _again;
	tr454: cs = 414; goto _again;
	tr455: cs = 415; goto _again;
	tr456: cs = 416; goto f6;
	tr457: cs = 417; goto f7;
	tr458: cs = 418; goto f17;
	tr459: cs = 419; goto f7;
	tr460: cs = 420; goto f18;
	tr461: cs = 421; goto f7;
	tr462: cs = 422; goto f19;
	tr463: cs = 423; goto f7;
	tr464: cs = 424; goto f20;
	tr465: cs = 425; goto f7;
	tr466: cs = 426; goto f21;
	tr467: cs = 427; goto f7;
	tr468: cs = 428; goto f22;
	tr762: cs = 429; goto _again;
	tr470: cs = 430; goto _again;
	tr472: cs = 431; goto _again;
	tr473: cs = 432; goto _again;
	tr474: cs = 433; goto f6;
	tr475: cs = 434; goto f7;
	tr763: cs = 435; goto _again;
	tr477: cs = 436; goto _again;
	tr478: cs = 437; goto _again;
	tr481: cs = 438; goto _again;
	tr482: cs = 439; goto f7;
	tr479: cs = 440; goto _again;
	tr484: cs = 441; goto _again;
	tr485: cs = 442; goto _again;
	tr486: cs = 443; goto _again;
	tr487: cs = 444; goto _again;
	tr488: cs = 445; goto _again;
	tr489: cs = 446; goto _again;
	tr490: cs = 447; goto f6;
	tr491: cs = 448; goto f7;
	tr480: cs = 449; goto _again;
	tr493: cs = 450; goto _again;
	tr494: cs = 451; goto _again;
	tr495: cs = 452; goto _again;
	tr496: cs = 453; goto _again;
	tr497: cs = 454; goto _again;
	tr498: cs = 455; goto _again;
	tr499: cs = 456; goto f6;
	tr500: cs = 457; goto _again;
	tr502: cs = 458; goto _again;
	tr503: cs = 459; goto _again;
	tr504: cs = 460; goto _again;
	tr505: cs = 461; goto f28;
	tr509: cs = 461; goto f29;
	tr501: cs = 462; goto _again;
	tr507: cs = 463; goto _again;
	tr508: cs = 464; goto _again;
	tr471: cs = 465; goto _again;
	tr510: cs = 466; goto _again;
	tr511: cs = 467; goto _again;
	tr512: cs = 468; goto _again;
	tr513: cs = 469; goto f6;
	tr514: cs = 470; goto f7;
	tr747: cs = 471; goto _again;
	tr516: cs = 472; goto _again;
	tr517: cs = 473; goto _again;
	tr518: cs = 474; goto _again;
	tr519: cs = 475; goto _again;
	tr520: cs = 476; goto _again;
	tr521: cs = 477; goto _again;
	tr522: cs = 478; goto f6;
	tr523: cs = 479; goto f7;
	tr748: cs = 480; goto _again;
	tr525: cs = 481; goto _again;
	tr526: cs = 482; goto _again;
	tr527: cs = 483; goto _again;
	tr528: cs = 484; goto _again;
	tr529: cs = 485; goto _again;
	tr530: cs = 486; goto _again;
	tr531: cs = 487; goto _again;
	tr532: cs = 488; goto _again;
	tr533: cs = 489; goto _again;
	tr534: cs = 490; goto f6;
	tr535: cs = 491; goto f7;
	tr749: cs = 492; goto _again;
	tr537: cs = 493; goto _again;
	tr538: cs = 494; goto _again;
	tr539: cs = 495; goto f6;
	tr540: cs = 496; goto f7;
	tr541: cs = 497; goto f7;
	tr543: cs = 498; goto _again;
	tr544: cs = 499; goto _again;
	tr545: cs = 500; goto _again;
	tr546: cs = 501; goto f7;
	tr750: cs = 502; goto _again;
	tr548: cs = 503; goto _again;
	tr550: cs = 504; goto _again;
	tr551: cs = 505; goto _again;
	tr552: cs = 506; goto f6;
	tr553: cs = 507; goto f7;
	tr554: cs = 508; goto f7;
	tr556: cs = 509; goto f7;
	tr557: cs = 510; goto f7;
	tr558: cs = 511; goto f7;
	tr559: cs = 512; goto f7;
	tr560: cs = 513; goto f7;
	tr549: cs = 514; goto _again;
	tr561: cs = 515; goto _again;
	tr562: cs = 516; goto _again;
	tr563: cs = 517; goto f6;
	tr564: cs = 518; goto f7;
	tr565: cs = 519; goto f7;
	tr567: cs = 520; goto f7;
	tr568: cs = 521; goto f7;
	tr569: cs = 522; goto f7;
	tr570: cs = 523; goto f7;
	tr571: cs = 524; goto f7;
	tr751: cs = 525; goto _again;
	tr572: cs = 526; goto _again;
	tr573: cs = 527; goto _again;
	tr574: cs = 528; goto _again;
	tr575: cs = 529; goto f6;
	tr576: cs = 530; goto f7;
	tr752: cs = 531; goto _again;
	tr578: cs = 532; goto _again;
	tr579: cs = 533; goto _again;
	tr580: cs = 534; goto _again;
	tr581: cs = 535; goto _again;
	tr582: cs = 536; goto _again;
	tr583: cs = 537; goto _again;
	tr584: cs = 538; goto _again;
	tr585: cs = 539; goto _again;
	tr586: cs = 540; goto _again;
	tr587: cs = 541; goto f6;
	tr588: cs = 542; goto f7;
	tr589: cs = 543; goto f17;
	tr590: cs = 544; goto f7;
	tr591: cs = 545; goto f18;
	tr592: cs = 546; goto f7;
	tr593: cs = 547; goto f19;
	tr594: cs = 548; goto f7;
	tr595: cs = 549; goto f20;
	tr596: cs = 550; goto f7;
	tr597: cs = 551; goto f21;
	tr598: cs = 552; goto f7;
	tr599: cs = 553; goto f22;
	tr753: cs = 554; goto _again;
	tr601: cs = 555; goto _again;
	tr603: cs = 556; goto _again;
	tr604: cs = 557; goto _again;
	tr605: cs = 558; goto f6;
	tr606: cs = 559; goto f7;
	tr754: cs = 560; goto _again;
	tr608: cs = 561; goto _again;
	tr609: cs = 562; goto _again;
	tr612: cs = 563; goto _again;
	tr613: cs = 564; goto f7;
	tr610: cs = 565; goto _again;
	tr615: cs = 566; goto _again;
	tr616: cs = 567; goto _again;
	tr617: cs = 568; goto _again;
	tr618: cs = 569; goto _again;
	tr619: cs = 570; goto _again;
	tr620: cs = 571; goto _again;
	tr621: cs = 572; goto f6;
	tr622: cs = 573; goto f7;
	tr611: cs = 574; goto _again;
	tr624: cs = 575; goto _again;
	tr625: cs = 576; goto _again;
	tr626: cs = 577; goto _again;
	tr627: cs = 578; goto _again;
	tr628: cs = 579; goto _again;
	tr629: cs = 580; goto _again;
	tr630: cs = 581; goto f6;
	tr631: cs = 582; goto _again;
	tr633: cs = 583; goto _again;
	tr634: cs = 584; goto _again;
	tr635: cs = 585; goto _again;
	tr636: cs = 586; goto f28;
	tr640: cs = 586; goto f29;
	tr632: cs = 587; goto _again;
	tr638: cs = 588; goto _again;
	tr639: cs = 589; goto _again;
	tr602: cs = 590; goto _again;
	tr641: cs = 591; goto _again;
	tr642: cs = 592; goto _again;
	tr643: cs = 593; goto _again;
	tr644: cs = 594; goto f6;
	tr645: cs = 595; goto f7;
	tr6: cs = 596; goto _again;
	tr647: cs = 597; goto _again;
	tr648: cs = 598; goto _again;
	tr649: cs = 599; goto _again;
	tr650: cs = 600; goto _again;
	tr7: cs = 601; goto _again;
	tr652: cs = 602; goto _again;
	tr654: cs = 603; goto _again;
	tr655: cs = 604; goto _again;
	tr656: cs = 605; goto _again;
	tr653: cs = 606; goto _again;
	tr658: cs = 607; goto _again;
	tr659: cs = 608; goto _again;
	tr660: cs = 609; goto _again;
	tr8: cs = 610; goto _again;
	tr663: cs = 611; goto _again;
	tr664: cs = 612; goto _again;
	tr9: cs = 613; goto _again;
	tr666: cs = 614; goto _again;
	tr667: cs = 615; goto _again;
	tr10: cs = 616; goto _again;
	tr669: cs = 617; goto _again;
	tr670: cs = 618; goto _again;
	tr671: cs = 619; goto _again;
	tr672: cs = 620; goto _again;
	tr673: cs = 621; goto _again;
	tr674: cs = 622; goto _again;
	tr11: cs = 623; goto _again;
	tr676: cs = 624; goto _again;
	tr12: cs = 625; goto _again;
	tr678: cs = 626; goto _again;
	tr718: cs = 627; goto _again;
	tr680: cs = 628; goto _again;
	tr681: cs = 629; goto _again;
	tr682: cs = 630; goto _again;
	tr683: cs = 631; goto _again;
	tr684: cs = 632; goto _again;
	tr685: cs = 633; goto _again;
	tr686: cs = 634; goto _again;
	tr687: cs = 635; goto _again;
	tr688: cs = 636; goto _again;
	tr689: cs = 637; goto _again;
	tr690: cs = 638; goto _again;
	tr691: cs = 639; goto _again;
	tr692: cs = 640; goto _again;
	tr693: cs = 641; goto _again;
	tr694: cs = 642; goto _again;
	tr695: cs = 643; goto _again;
	tr696: cs = 644; goto _again;
	tr697: cs = 645; goto _again;
	tr698: cs = 646; goto _again;
	tr699: cs = 647; goto _again;
	tr700: cs = 648; goto _again;
	tr701: cs = 649; goto _again;
	tr702: cs = 650; goto _again;
	tr703: cs = 651; goto _again;
	tr704: cs = 652; goto _again;
	tr705: cs = 653; goto _again;
	tr706: cs = 654; goto _again;
	tr707: cs = 655; goto _again;
	tr708: cs = 656; goto _again;
	tr709: cs = 657; goto _again;
	tr710: cs = 658; goto _again;
	tr711: cs = 659; goto _again;
	tr712: cs = 660; goto _again;
	tr713: cs = 661; goto _again;
	tr714: cs = 662; goto _again;
	tr715: cs = 663; goto _again;
	tr717: cs = 665; goto f2;
	tr0: cs = 666; goto f0;
	tr720: cs = 666; goto f2;
	tr370: cs = 667; goto f0;
	tr30: cs = 667; goto f2;
	tr49: cs = 668; goto f0;
	tr43: cs = 668; goto f2;
	tr48: cs = 669; goto f3;
	tr355: cs = 670; goto f2;
	tr238: cs = 670; goto f8;
	tr250: cs = 670; goto f9;
	tr257: cs = 670; goto f11;
	tr262: cs = 670; goto f12;
	tr270: cs = 670; goto f13;
	tr281: cs = 670; goto f14;
	tr332: cs = 670; goto f26;
	tr341: cs = 670; goto f27;
	tr364: cs = 670; goto f30;
	tr68: cs = 671; goto f4;
	tr210: cs = 671; goto f31;
	tr214: cs = 671; goto f32;
	tr215: cs = 671; goto f33;
	tr218: cs = 671; goto f34;
	tr225: cs = 671; goto f35;
	tr227: cs = 671; goto f36;
	tr229: cs = 671; goto f37;
	tr195: cs = 672; goto f2;
	tr78: cs = 672; goto f8;
	tr90: cs = 672; goto f9;
	tr97: cs = 672; goto f11;
	tr102: cs = 672; goto f12;
	tr110: cs = 672; goto f13;
	tr121: cs = 672; goto f14;
	tr172: cs = 672; goto f26;
	tr181: cs = 672; goto f27;
	tr204: cs = 672; goto f30;
	tr133: cs = 673; goto f16;
	tr157: cs = 674; goto f2;
	tr165: cs = 675; goto f25;
	tr293: cs = 676; goto f16;
	tr317: cs = 677; goto f2;
	tr325: cs = 678; goto f25;
	tr369: cs = 679; goto f3;
	tr506: cs = 680; goto f2;
	tr393: cs = 680; goto f8;
	tr405: cs = 680; goto f9;
	tr411: cs = 680; goto f11;
	tr416: cs = 680; goto f12;
	tr424: cs = 680; goto f13;
	tr435: cs = 680; goto f14;
	tr483: cs = 680; goto f26;
	tr492: cs = 680; goto f27;
	tr515: cs = 680; goto f30;
	tr446: cs = 681; goto f16;
	tr469: cs = 682; goto f2;
	tr476: cs = 683; goto f25;
	tr637: cs = 684; goto f2;
	tr524: cs = 684; goto f8;
	tr536: cs = 684; goto f9;
	tr542: cs = 684; goto f11;
	tr547: cs = 684; goto f12;
	tr555: cs = 684; goto f13;
	tr566: cs = 684; goto f14;
	tr614: cs = 684; goto f26;
	tr623: cs = 684; goto f27;
	tr646: cs = 684; goto f30;
	tr577: cs = 685; goto f16;
	tr600: cs = 686; goto f2;
	tr607: cs = 687; goto f25;
	tr651: cs = 688; goto f4;
	tr657: cs = 688; goto f31;
	tr661: cs = 688; goto f32;
	tr662: cs = 688; goto f33;
	tr665: cs = 688; goto f34;
	tr675: cs = 688; goto f35;
	tr677: cs = 688; goto f36;
	tr679: cs = 688; goto f37;
	tr668: cs = 689; goto f2;
	tr716: cs = 690; goto f2;

f7:
#line 5 "indexer.rl"
	{
//       cout << "CS:" << fcurs << endl;          
//        cerr <<  "debug"<< fc << endl;
//       cerr << fcurs << ":" << fc << endl;	
       currenttoken.push_back((*p));
}
	goto _again;
f5:
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f39:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
	goto _again;
f38:
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f1:
#line 53 "indexer.rl"
	{
       cerr <<"an error has occured element"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 14;
}
	goto _again;
f41:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
	goto _again;
f40:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
	goto _again;
f6:
#line 186 "indexer.rl"
	{
     currenttoken.clear();  
}
	goto _again;
f17:
#line 241 "indexer.rl"
	{
     char *endptr;   // ignore  
     int year=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_year(year);
}
	goto _again;
f18:
#line 248 "indexer.rl"
	{
     char *endptr;   // ignore  
     int month=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";                       
     world.set_current_ts_month (month);
}
	goto _again;
f19:
#line 255 "indexer.rl"
	{
     char *endptr;   // ignore  
     int day=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_day (day);
}
	goto _again;
f20:
#line 262 "indexer.rl"
	{
     char *endptr;   // ignore  
     int hour=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_hour (hour);
}
	goto _again;
f21:
#line 269 "indexer.rl"
	{
     char *endptr;   // ignore  
     int minute=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_minute (minute);
}
	goto _again;
f22:
#line 276 "indexer.rl"
	{
     char *endptr;   // ignore  
     int second=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_second (second);
}
	goto _again;
f29:
#line 306 "indexer.rl"
	{
     world.set_current_vis(1);
}
	goto _again;
f28:
#line 309 "indexer.rl"
	{
     world.set_current_vis(0);
}
	goto _again;
f2:
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f15:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f46:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f10:
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f24:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f48:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f23:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f47:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f0:
#line 162 "indexer.rl"
	{
//		cerr << "end element " << endl;
		world.finish_current_object();
                }
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f11:
#line 194 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f9:
#line 208 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f27:
#line 219 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f25:
#line 230 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_uid(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f30:
#line 318 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_user(currenttoken.c_str());
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f8:
#line 329 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "action " << currenttoken << endl;
     world.set_action(currenttoken.c_str());
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f26:
#line 340 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "v:"<< currenttoken << endl;
     world.set_tag_val(currenttoken.c_str());
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f12:
#line 347 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
     currenttoken="";
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f13:
#line 375 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 385 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f16:
#line 396 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "way node ref " << currenttoken << endl;
     world.set_way_node_ref(strtol(currenttoken.c_str(), &endptr,10));
     currenttoken ="";
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f43:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f42:
#line 53 "indexer.rl"
	{
       cerr <<"an error has occured element"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 14;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f45:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f44:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f34:
#line 75 "indexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f37:
#line 81 "indexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f35:
#line 87 "indexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f36:
#line 93 "indexer.rl"
	{
//      cerr << "tag" << endl;
	world.set_current_element_type_tag();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f33:
#line 100 "indexer.rl"
	{
       world.set_current_element_type_nd();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f31:
#line 105 "indexer.rl"
	{
       world.set_current_element_type_member();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f4:
#line 112 "indexer.rl"
	{
       world.set_action_delete();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f32:
#line 117 "indexer.rl"
	{
       world.set_action_modify();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
	{ res = 1;      }
	goto _again;
f3:
#line 123 "indexer.rl"
	{
       world.set_action_create();
       }
#line 178 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 468 "indexer.rl"
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
	case 6:
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 40:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
	break;
	case 39:
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	break;
	case 2:
#line 53 "indexer.rl"
	{
       cerr <<"an error has occured element"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 14;
}
	break;
	case 42:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
	break;
	case 41:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
	break;
	case 16:
#line 39 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 11:
#line 46 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 25:
#line 60 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 24:
#line 67 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 32 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
#line 5289 "indexer.c"
	}
	}

	_out: {}
	}

#line 486 "indexer.rl"
  return res;
}

