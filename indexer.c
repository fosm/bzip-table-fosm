
#line 1 "indexer.rl"


#line 418 "indexer.rl"



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
	0, 0, 0, 0, 0, 0, 0, 12, 
	12, 12, 12, 12, 12, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 17, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 25, 0, 
	0, 0, 0, 0, 26, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 33, 33, 
	33, 33, 33, 33, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 34, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 35, 32, 32, 
	32, 32, 32, 36, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 12, 12, 12, 12, 12, 
	12, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 17, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 25, 0, 0, 0, 0, 0, 
	26, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 33, 33, 33, 33, 33, 33, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 34, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 35, 32, 32, 32, 32, 32, 36, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 32, 32, 32, 32, 
	32, 32, 32, 32, 0, 0, 0, 0, 
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
	0, 0, 0, 0, 0, 0, 0
};

static const int osmkeys_start = 1;
static const int osmkeys_error = 0;

static const int osmkeys_en_main = 1;


#line 421 "indexer.rl"

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
  
#line 115 "indexer.c"
	{
	cs = osmkeys_start;
	}

#line 433 "indexer.rl"
  
#line 122 "indexer.c"
	{
	int _ps = 0;
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
		case 62: goto tr4;
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
		case 60: goto tr5;
		case 62: goto tr4;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr0;
	goto tr1;
case 3:
	if ( (*p) == 62 )
		goto tr4;
	goto tr1;
case 618:
	if ( (*p) == 32 )
		goto tr664;
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr664;
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
case 619:
	switch( (*p) ) {
		case 32: goto tr474;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr474;
	goto tr237;
case 620:
	switch( (*p) ) {
		case 32: goto tr674;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr674;
	goto tr107;
case 621:
	switch( (*p) ) {
		case 32: goto tr674;
		case 47: goto tr351;
		case 60: goto tr683;
		case 62: goto tr30;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr674;
	goto tr107;
case 23:
	if ( (*p) == 62 )
		goto tr30;
	goto tr1;
case 622:
	switch( (*p) ) {
		case 32: goto tr684;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr684;
	goto tr1;
case 24:
	if ( (*p) == 62 )
		goto tr31;
	goto tr1;
case 623:
	goto tr1;
case 25:
	switch( (*p) ) {
		case 47: goto tr32;
		case 109: goto tr33;
		case 110: goto tr34;
		case 114: goto tr35;
		case 116: goto tr36;
		case 119: goto tr37;
	}
	goto tr1;
case 26:
	switch( (*p) ) {
		case 110: goto tr38;
		case 114: goto tr39;
		case 119: goto tr40;
	}
	goto tr1;
case 27:
	if ( (*p) == 111 )
		goto tr41;
	goto tr1;
case 28:
	if ( (*p) == 100 )
		goto tr42;
	goto tr1;
case 29:
	if ( (*p) == 101 )
		goto tr43;
	goto tr1;
case 30:
	if ( (*p) == 101 )
		goto tr44;
	goto tr1;
case 31:
	if ( (*p) == 108 )
		goto tr45;
	goto tr1;
case 32:
	if ( (*p) == 97 )
		goto tr46;
	goto tr1;
case 33:
	if ( (*p) == 116 )
		goto tr47;
	goto tr1;
case 34:
	if ( (*p) == 105 )
		goto tr48;
	goto tr1;
case 35:
	if ( (*p) == 111 )
		goto tr49;
	goto tr1;
case 36:
	if ( (*p) == 110 )
		goto tr43;
	goto tr1;
case 37:
	if ( (*p) == 97 )
		goto tr50;
	goto tr1;
case 38:
	if ( (*p) == 121 )
		goto tr43;
	goto tr1;
case 39:
	if ( (*p) == 101 )
		goto tr51;
	goto tr1;
case 40:
	if ( (*p) == 109 )
		goto tr52;
	goto tr1;
case 41:
	if ( (*p) == 98 )
		goto tr53;
	goto tr1;
case 42:
	if ( (*p) == 101 )
		goto tr54;
	goto tr1;
case 43:
	if ( (*p) == 114 )
		goto tr55;
	goto tr1;
case 624:
	switch( (*p) ) {
		case 32: goto tr205;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr205;
	goto tr237;
case 625:
	switch( (*p) ) {
		case 32: goto tr694;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr694;
	goto tr107;
case 626:
	switch( (*p) ) {
		case 32: goto tr694;
		case 47: goto tr78;
		case 60: goto tr703;
		case 62: goto tr56;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr694;
	goto tr107;
case 44:
	if ( (*p) == 62 )
		goto tr56;
	goto tr1;
case 627:
	switch( (*p) ) {
		case 32: goto tr704;
		case 60: goto tr685;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr704;
	goto tr1;
case 45:
	switch( (*p) ) {
		case 109: goto tr33;
		case 110: goto tr34;
		case 114: goto tr35;
		case 116: goto tr36;
		case 119: goto tr37;
	}
	goto tr1;
case 46:
	switch( (*p) ) {
		case 100: goto tr57;
		case 111: goto tr58;
	}
	goto tr1;
case 47:
	if ( (*p) == 100 )
		goto tr59;
	goto tr1;
case 48:
	if ( (*p) == 101 )
		goto tr60;
	goto tr1;
case 49:
	if ( (*p) == 101 )
		goto tr61;
	goto tr1;
case 50:
	if ( (*p) == 108 )
		goto tr62;
	goto tr1;
case 51:
	if ( (*p) == 97 )
		goto tr63;
	goto tr1;
case 52:
	if ( (*p) == 116 )
		goto tr64;
	goto tr1;
case 53:
	if ( (*p) == 105 )
		goto tr65;
	goto tr1;
case 54:
	if ( (*p) == 111 )
		goto tr66;
	goto tr1;
case 55:
	if ( (*p) == 110 )
		goto tr67;
	goto tr1;
case 56:
	if ( (*p) == 97 )
		goto tr68;
	goto tr1;
case 57:
	if ( (*p) == 103 )
		goto tr69;
	goto tr1;
case 58:
	if ( (*p) == 97 )
		goto tr70;
	goto tr1;
case 59:
	if ( (*p) == 121 )
		goto tr71;
	goto tr1;
case 60:
	switch( (*p) ) {
		case 47: goto tr72;
		case 109: goto tr33;
		case 110: goto tr34;
		case 114: goto tr35;
		case 116: goto tr36;
		case 119: goto tr37;
	}
	goto tr1;
case 61:
	switch( (*p) ) {
		case 110: goto tr73;
		case 114: goto tr74;
		case 119: goto tr75;
	}
	goto tr1;
case 62:
	if ( (*p) == 111 )
		goto tr76;
	goto tr1;
case 63:
	if ( (*p) == 100 )
		goto tr77;
	goto tr1;
case 64:
	if ( (*p) == 101 )
		goto tr78;
	goto tr1;
case 65:
	if ( (*p) == 101 )
		goto tr79;
	goto tr1;
case 66:
	if ( (*p) == 108 )
		goto tr80;
	goto tr1;
case 67:
	if ( (*p) == 97 )
		goto tr81;
	goto tr1;
case 68:
	if ( (*p) == 116 )
		goto tr82;
	goto tr1;
case 69:
	if ( (*p) == 105 )
		goto tr83;
	goto tr1;
case 70:
	if ( (*p) == 111 )
		goto tr84;
	goto tr1;
case 71:
	if ( (*p) == 110 )
		goto tr78;
	goto tr1;
case 72:
	if ( (*p) == 97 )
		goto tr85;
	goto tr1;
case 73:
	if ( (*p) == 121 )
		goto tr78;
	goto tr1;
case 74:
	if ( (*p) == 99 )
		goto tr86;
	goto tr1;
case 75:
	if ( (*p) == 116 )
		goto tr87;
	goto tr1;
case 76:
	if ( (*p) == 105 )
		goto tr88;
	goto tr1;
case 77:
	if ( (*p) == 111 )
		goto tr89;
	goto tr1;
case 78:
	if ( (*p) == 110 )
		goto tr90;
	goto tr1;
case 79:
	if ( (*p) == 61 )
		goto tr91;
	goto tr1;
case 80:
	switch( (*p) ) {
		case 34: goto tr92;
		case 39: goto tr92;
	}
	goto tr1;
case 81:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr93;
case 82:
	switch( (*p) ) {
		case 34: goto tr94;
		case 39: goto tr94;
	}
	goto tr93;
case 83:
	if ( (*p) == 104 )
		goto tr95;
	goto tr1;
case 84:
	if ( (*p) == 97 )
		goto tr96;
	goto tr1;
case 85:
	if ( (*p) == 110 )
		goto tr97;
	goto tr1;
case 86:
	if ( (*p) == 103 )
		goto tr98;
	goto tr1;
case 87:
	if ( (*p) == 101 )
		goto tr99;
	goto tr1;
case 88:
	if ( (*p) == 115 )
		goto tr100;
	goto tr1;
case 89:
	if ( (*p) == 101 )
		goto tr101;
	goto tr1;
case 90:
	if ( (*p) == 116 )
		goto tr102;
	goto tr1;
case 91:
	if ( (*p) == 61 )
		goto tr103;
	goto tr1;
case 92:
	switch( (*p) ) {
		case 34: goto tr104;
		case 39: goto tr104;
	}
	goto tr1;
case 93:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr105;
	goto tr1;
case 94:
	switch( (*p) ) {
		case 34: goto tr106;
		case 39: goto tr106;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr105;
	goto tr1;
case 95:
	if ( (*p) == 100 )
		goto tr108;
	goto tr107;
case 96:
	if ( (*p) == 61 )
		goto tr109;
	goto tr107;
case 97:
	switch( (*p) ) {
		case 34: goto tr110;
		case 39: goto tr110;
	}
	goto tr107;
case 98:
	if ( (*p) == 45 )
		goto tr111;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr112;
	goto tr107;
case 99:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr112;
	goto tr107;
case 100:
	switch( (*p) ) {
		case 34: goto tr113;
		case 39: goto tr113;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr112;
	goto tr107;
case 101:
	switch( (*p) ) {
		case 32: goto tr114;
		case 61: goto tr115;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr114;
	goto tr1;
case 102:
	switch( (*p) ) {
		case 34: goto tr116;
		case 39: goto tr116;
	}
	goto tr1;
case 103:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr117;
case 104:
	switch( (*p) ) {
		case 34: goto tr118;
		case 39: goto tr118;
	}
	goto tr117;
case 628:
	switch( (*p) ) {
		case 32: goto tr705;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr705;
	goto tr107;
case 629:
	switch( (*p) ) {
		case 32: goto tr705;
		case 47: goto tr78;
		case 60: goto tr703;
		case 62: goto tr56;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr705;
	goto tr107;
case 105:
	switch( (*p) ) {
		case 97: goto tr119;
		case 111: goto tr120;
	}
	goto tr1;
case 106:
	if ( (*p) == 116 )
		goto tr121;
	goto tr1;
case 107:
	if ( (*p) == 61 )
		goto tr122;
	goto tr1;
case 108:
	switch( (*p) ) {
		case 34: goto tr123;
		case 39: goto tr123;
	}
	goto tr1;
case 109:
	if ( (*p) == 45 )
		goto tr124;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr125;
	goto tr1;
case 110:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr125;
	goto tr1;
case 111:
	switch( (*p) ) {
		case 34: goto tr126;
		case 39: goto tr126;
		case 46: goto tr127;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr125;
	goto tr1;
case 112:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr128;
	goto tr1;
case 113:
	switch( (*p) ) {
		case 34: goto tr126;
		case 39: goto tr126;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr128;
	goto tr1;
case 114:
	if ( (*p) == 110 )
		goto tr129;
	goto tr1;
case 115:
	if ( (*p) == 61 )
		goto tr130;
	goto tr1;
case 116:
	switch( (*p) ) {
		case 34: goto tr131;
		case 39: goto tr131;
	}
	goto tr1;
case 117:
	if ( (*p) == 45 )
		goto tr132;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr133;
	goto tr1;
case 118:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr133;
	goto tr1;
case 119:
	switch( (*p) ) {
		case 34: goto tr134;
		case 39: goto tr134;
		case 46: goto tr135;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr133;
	goto tr1;
case 120:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr136;
	goto tr1;
case 121:
	switch( (*p) ) {
		case 34: goto tr134;
		case 39: goto tr134;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr136;
	goto tr1;
case 122:
	if ( (*p) == 101 )
		goto tr137;
	goto tr1;
case 123:
	if ( (*p) == 102 )
		goto tr138;
	goto tr1;
case 124:
	if ( (*p) == 61 )
		goto tr139;
	goto tr1;
case 125:
	switch( (*p) ) {
		case 34: goto tr140;
		case 39: goto tr140;
	}
	goto tr1;
case 126:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr141;
	goto tr1;
case 127:
	switch( (*p) ) {
		case 34: goto tr143;
		case 39: goto tr143;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr141;
	goto tr142;
case 630:
	switch( (*p) ) {
		case 32: goto tr694;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr694;
	goto tr706;
case 128:
	if ( (*p) == 105 )
		goto tr144;
	goto tr1;
case 129:
	if ( (*p) == 109 )
		goto tr145;
	goto tr1;
case 130:
	if ( (*p) == 101 )
		goto tr146;
	goto tr1;
case 131:
	if ( (*p) == 115 )
		goto tr147;
	goto tr1;
case 132:
	if ( (*p) == 116 )
		goto tr148;
	goto tr1;
case 133:
	if ( (*p) == 97 )
		goto tr149;
	goto tr1;
case 134:
	if ( (*p) == 109 )
		goto tr150;
	goto tr1;
case 135:
	if ( (*p) == 112 )
		goto tr151;
	goto tr1;
case 136:
	if ( (*p) == 61 )
		goto tr152;
	goto tr1;
case 137:
	switch( (*p) ) {
		case 34: goto tr153;
		case 39: goto tr153;
	}
	goto tr1;
case 138:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr154;
	goto tr1;
case 139:
	if ( (*p) == 45 )
		goto tr155;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr154;
	goto tr1;
case 140:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr156;
	goto tr1;
case 141:
	if ( (*p) == 45 )
		goto tr157;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr156;
	goto tr1;
case 142:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr158;
	goto tr1;
case 143:
	if ( (*p) == 84 )
		goto tr159;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr158;
	goto tr1;
case 144:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr160;
	goto tr1;
case 145:
	if ( (*p) == 58 )
		goto tr161;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr160;
	goto tr1;
case 146:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr162;
	goto tr1;
case 147:
	if ( (*p) == 58 )
		goto tr163;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr162;
	goto tr1;
case 148:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr164;
	goto tr1;
case 149:
	if ( (*p) == 90 )
		goto tr165;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr164;
	goto tr1;
case 150:
	switch( (*p) ) {
		case 34: goto tr167;
		case 39: goto tr167;
	}
	goto tr166;
case 631:
	switch( (*p) ) {
		case 32: goto tr694;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr694;
	goto tr707;
case 151:
	switch( (*p) ) {
		case 105: goto tr168;
		case 115: goto tr169;
	}
	goto tr1;
case 152:
	if ( (*p) == 100 )
		goto tr170;
	goto tr1;
case 153:
	if ( (*p) == 61 )
		goto tr171;
	goto tr1;
case 154:
	switch( (*p) ) {
		case 34: goto tr172;
		case 39: goto tr172;
	}
	goto tr1;
case 155:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr173;
	goto tr1;
case 156:
	switch( (*p) ) {
		case 34: goto tr175;
		case 39: goto tr175;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr173;
	goto tr174;
case 632:
	switch( (*p) ) {
		case 32: goto tr694;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr694;
	goto tr708;
case 157:
	switch( (*p) ) {
		case 32: goto tr176;
		case 61: goto tr177;
		case 101: goto tr178;
		case 105: goto tr179;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr176;
	goto tr1;
case 158:
	switch( (*p) ) {
		case 32: goto tr176;
		case 61: goto tr177;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr176;
	goto tr1;
case 159:
	switch( (*p) ) {
		case 34: goto tr180;
		case 39: goto tr180;
	}
	goto tr1;
case 160:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr181;
case 161:
	switch( (*p) ) {
		case 34: goto tr182;
		case 39: goto tr182;
	}
	goto tr181;
case 633:
	switch( (*p) ) {
		case 32: goto tr709;
		case 60: goto tr685;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr709;
	goto tr107;
case 634:
	switch( (*p) ) {
		case 32: goto tr709;
		case 47: goto tr78;
		case 60: goto tr703;
		case 62: goto tr56;
		case 97: goto tr695;
		case 99: goto tr696;
		case 105: goto tr697;
		case 107: goto tr114;
		case 108: goto tr698;
		case 114: goto tr699;
		case 116: goto tr700;
		case 117: goto tr701;
		case 118: goto tr702;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr709;
	goto tr107;
case 162:
	if ( (*p) == 114 )
		goto tr183;
	goto tr1;
case 163:
	if ( (*p) == 115 )
		goto tr184;
	goto tr1;
case 164:
	if ( (*p) == 105 )
		goto tr185;
	goto tr1;
case 165:
	if ( (*p) == 111 )
		goto tr186;
	goto tr1;
case 166:
	if ( (*p) == 110 )
		goto tr187;
	goto tr1;
case 167:
	if ( (*p) == 61 )
		goto tr188;
	goto tr1;
case 168:
	switch( (*p) ) {
		case 34: goto tr189;
		case 39: goto tr189;
	}
	goto tr1;
case 169:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr190;
	goto tr1;
case 170:
	switch( (*p) ) {
		case 34: goto tr191;
		case 39: goto tr191;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr190;
	goto tr1;
case 171:
	if ( (*p) == 115 )
		goto tr192;
	goto tr1;
case 172:
	if ( (*p) == 105 )
		goto tr193;
	goto tr1;
case 173:
	if ( (*p) == 98 )
		goto tr194;
	goto tr1;
case 174:
	if ( (*p) == 108 )
		goto tr195;
	goto tr1;
case 175:
	if ( (*p) == 101 )
		goto tr196;
	goto tr1;
case 176:
	if ( (*p) == 61 )
		goto tr197;
	goto tr1;
case 177:
	switch( (*p) ) {
		case 34: goto tr198;
		case 39: goto tr198;
	}
	goto tr1;
case 178:
	switch( (*p) ) {
		case 102: goto tr199;
		case 116: goto tr200;
	}
	goto tr1;
case 179:
	if ( (*p) == 97 )
		goto tr201;
	goto tr1;
case 180:
	if ( (*p) == 108 )
		goto tr202;
	goto tr1;
case 181:
	if ( (*p) == 115 )
		goto tr203;
	goto tr1;
case 182:
	if ( (*p) == 101 )
		goto tr204;
	goto tr1;
case 183:
	switch( (*p) ) {
		case 34: goto tr205;
		case 39: goto tr205;
	}
	goto tr1;
case 184:
	if ( (*p) == 114 )
		goto tr206;
	goto tr1;
case 185:
	if ( (*p) == 117 )
		goto tr207;
	goto tr1;
case 186:
	if ( (*p) == 101 )
		goto tr208;
	goto tr1;
case 187:
	if ( (*p) == 101 )
		goto tr209;
	goto tr1;
case 188:
	if ( (*p) == 114 )
		goto tr210;
	goto tr1;
case 189:
	if ( (*p) == 61 )
		goto tr211;
	goto tr1;
case 190:
	switch( (*p) ) {
		case 34: goto tr212;
		case 39: goto tr212;
	}
	goto tr1;
case 191:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr213;
case 192:
	switch( (*p) ) {
		case 34: goto tr214;
		case 39: goto tr214;
	}
	goto tr213;
case 193:
	if ( (*p) == 99 )
		goto tr216;
	goto tr215;
case 194:
	if ( (*p) == 116 )
		goto tr217;
	goto tr215;
case 195:
	if ( (*p) == 105 )
		goto tr218;
	goto tr215;
case 196:
	if ( (*p) == 111 )
		goto tr219;
	goto tr215;
case 197:
	if ( (*p) == 110 )
		goto tr220;
	goto tr215;
case 198:
	if ( (*p) == 61 )
		goto tr221;
	goto tr215;
case 199:
	switch( (*p) ) {
		case 34: goto tr222;
		case 39: goto tr222;
	}
	goto tr215;
case 200:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr223;
case 201:
	switch( (*p) ) {
		case 34: goto tr224;
		case 39: goto tr224;
	}
	goto tr223;
case 635:
	switch( (*p) ) {
		case 32: goto tr335;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr335;
	goto tr237;
case 202:
	if ( (*p) == 104 )
		goto tr225;
	goto tr215;
case 203:
	if ( (*p) == 97 )
		goto tr226;
	goto tr215;
case 204:
	if ( (*p) == 110 )
		goto tr227;
	goto tr215;
case 205:
	if ( (*p) == 103 )
		goto tr228;
	goto tr215;
case 206:
	if ( (*p) == 101 )
		goto tr229;
	goto tr215;
case 207:
	if ( (*p) == 115 )
		goto tr230;
	goto tr215;
case 208:
	if ( (*p) == 101 )
		goto tr231;
	goto tr215;
case 209:
	if ( (*p) == 116 )
		goto tr232;
	goto tr215;
case 210:
	if ( (*p) == 61 )
		goto tr233;
	goto tr215;
case 211:
	switch( (*p) ) {
		case 34: goto tr234;
		case 39: goto tr234;
	}
	goto tr215;
case 212:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr235;
	goto tr215;
case 213:
	switch( (*p) ) {
		case 34: goto tr236;
		case 39: goto tr236;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr235;
	goto tr215;
case 214:
	if ( (*p) == 100 )
		goto tr238;
	goto tr237;
case 215:
	if ( (*p) == 61 )
		goto tr239;
	goto tr237;
case 216:
	switch( (*p) ) {
		case 34: goto tr240;
		case 39: goto tr240;
	}
	goto tr237;
case 217:
	if ( (*p) == 45 )
		goto tr241;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr242;
	goto tr237;
case 218:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr242;
	goto tr237;
case 219:
	switch( (*p) ) {
		case 34: goto tr243;
		case 39: goto tr243;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr242;
	goto tr237;
case 220:
	switch( (*p) ) {
		case 32: goto tr244;
		case 61: goto tr245;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr244;
	goto tr215;
case 221:
	switch( (*p) ) {
		case 34: goto tr246;
		case 39: goto tr246;
	}
	goto tr215;
case 222:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr247;
case 223:
	switch( (*p) ) {
		case 34: goto tr248;
		case 39: goto tr248;
	}
	goto tr247;
case 636:
	switch( (*p) ) {
		case 32: goto tr710;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr710;
	goto tr237;
case 224:
	switch( (*p) ) {
		case 97: goto tr249;
		case 111: goto tr250;
	}
	goto tr215;
case 225:
	if ( (*p) == 116 )
		goto tr251;
	goto tr215;
case 226:
	if ( (*p) == 61 )
		goto tr252;
	goto tr215;
case 227:
	switch( (*p) ) {
		case 34: goto tr253;
		case 39: goto tr253;
	}
	goto tr215;
case 228:
	if ( (*p) == 45 )
		goto tr254;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr255;
	goto tr215;
case 229:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr255;
	goto tr215;
case 230:
	switch( (*p) ) {
		case 34: goto tr256;
		case 39: goto tr256;
		case 46: goto tr257;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr255;
	goto tr215;
case 231:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr258;
	goto tr215;
case 232:
	switch( (*p) ) {
		case 34: goto tr256;
		case 39: goto tr256;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr258;
	goto tr215;
case 233:
	if ( (*p) == 110 )
		goto tr259;
	goto tr215;
case 234:
	if ( (*p) == 61 )
		goto tr260;
	goto tr215;
case 235:
	switch( (*p) ) {
		case 34: goto tr261;
		case 39: goto tr261;
	}
	goto tr215;
case 236:
	if ( (*p) == 45 )
		goto tr262;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr263;
	goto tr215;
case 237:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr263;
	goto tr215;
case 238:
	switch( (*p) ) {
		case 34: goto tr264;
		case 39: goto tr264;
		case 46: goto tr265;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr263;
	goto tr215;
case 239:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr266;
	goto tr215;
case 240:
	switch( (*p) ) {
		case 34: goto tr264;
		case 39: goto tr264;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr266;
	goto tr215;
case 241:
	if ( (*p) == 101 )
		goto tr267;
	goto tr215;
case 242:
	if ( (*p) == 102 )
		goto tr268;
	goto tr215;
case 243:
	if ( (*p) == 61 )
		goto tr269;
	goto tr215;
case 244:
	switch( (*p) ) {
		case 34: goto tr270;
		case 39: goto tr270;
	}
	goto tr215;
case 245:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr271;
	goto tr215;
case 246:
	switch( (*p) ) {
		case 34: goto tr273;
		case 39: goto tr273;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr271;
	goto tr272;
case 637:
	switch( (*p) ) {
		case 32: goto tr335;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr335;
	goto tr711;
case 247:
	if ( (*p) == 105 )
		goto tr274;
	goto tr215;
case 248:
	if ( (*p) == 109 )
		goto tr275;
	goto tr215;
case 249:
	if ( (*p) == 101 )
		goto tr276;
	goto tr215;
case 250:
	if ( (*p) == 115 )
		goto tr277;
	goto tr215;
case 251:
	if ( (*p) == 116 )
		goto tr278;
	goto tr215;
case 252:
	if ( (*p) == 97 )
		goto tr279;
	goto tr215;
case 253:
	if ( (*p) == 109 )
		goto tr280;
	goto tr215;
case 254:
	if ( (*p) == 112 )
		goto tr281;
	goto tr215;
case 255:
	if ( (*p) == 61 )
		goto tr282;
	goto tr215;
case 256:
	switch( (*p) ) {
		case 34: goto tr283;
		case 39: goto tr283;
	}
	goto tr215;
case 257:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr284;
	goto tr215;
case 258:
	if ( (*p) == 45 )
		goto tr285;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr284;
	goto tr215;
case 259:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr286;
	goto tr215;
case 260:
	if ( (*p) == 45 )
		goto tr287;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr286;
	goto tr215;
case 261:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr288;
	goto tr215;
case 262:
	if ( (*p) == 84 )
		goto tr289;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr288;
	goto tr215;
case 263:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr290;
	goto tr215;
case 264:
	if ( (*p) == 58 )
		goto tr291;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr290;
	goto tr215;
case 265:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr292;
	goto tr215;
case 266:
	if ( (*p) == 58 )
		goto tr293;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr292;
	goto tr215;
case 267:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr294;
	goto tr215;
case 268:
	if ( (*p) == 90 )
		goto tr295;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr294;
	goto tr215;
case 269:
	switch( (*p) ) {
		case 34: goto tr297;
		case 39: goto tr297;
	}
	goto tr296;
case 638:
	switch( (*p) ) {
		case 32: goto tr335;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr335;
	goto tr712;
case 270:
	switch( (*p) ) {
		case 105: goto tr298;
		case 115: goto tr299;
	}
	goto tr215;
case 271:
	if ( (*p) == 100 )
		goto tr300;
	goto tr215;
case 272:
	if ( (*p) == 61 )
		goto tr301;
	goto tr215;
case 273:
	switch( (*p) ) {
		case 34: goto tr302;
		case 39: goto tr302;
	}
	goto tr215;
case 274:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr303;
	goto tr215;
case 275:
	switch( (*p) ) {
		case 34: goto tr305;
		case 39: goto tr305;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr303;
	goto tr304;
case 639:
	switch( (*p) ) {
		case 32: goto tr335;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr335;
	goto tr713;
case 276:
	switch( (*p) ) {
		case 32: goto tr306;
		case 61: goto tr307;
		case 101: goto tr308;
		case 105: goto tr309;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr306;
	goto tr215;
case 277:
	switch( (*p) ) {
		case 32: goto tr306;
		case 61: goto tr307;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr306;
	goto tr215;
case 278:
	switch( (*p) ) {
		case 34: goto tr310;
		case 39: goto tr310;
	}
	goto tr215;
case 279:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr311;
case 280:
	switch( (*p) ) {
		case 34: goto tr312;
		case 39: goto tr312;
	}
	goto tr311;
case 640:
	switch( (*p) ) {
		case 32: goto tr714;
		case 60: goto tr685;
		case 97: goto tr686;
		case 99: goto tr687;
		case 105: goto tr688;
		case 107: goto tr244;
		case 108: goto tr689;
		case 114: goto tr690;
		case 116: goto tr691;
		case 117: goto tr692;
		case 118: goto tr693;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr714;
	goto tr237;
case 281:
	if ( (*p) == 114 )
		goto tr313;
	goto tr215;
case 282:
	if ( (*p) == 115 )
		goto tr314;
	goto tr215;
case 283:
	if ( (*p) == 105 )
		goto tr315;
	goto tr215;
case 284:
	if ( (*p) == 111 )
		goto tr316;
	goto tr215;
case 285:
	if ( (*p) == 110 )
		goto tr317;
	goto tr215;
case 286:
	if ( (*p) == 61 )
		goto tr318;
	goto tr215;
case 287:
	switch( (*p) ) {
		case 34: goto tr319;
		case 39: goto tr319;
	}
	goto tr215;
case 288:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr320;
	goto tr215;
case 289:
	switch( (*p) ) {
		case 34: goto tr321;
		case 39: goto tr321;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr320;
	goto tr215;
case 290:
	if ( (*p) == 115 )
		goto tr322;
	goto tr215;
case 291:
	if ( (*p) == 105 )
		goto tr323;
	goto tr215;
case 292:
	if ( (*p) == 98 )
		goto tr324;
	goto tr215;
case 293:
	if ( (*p) == 108 )
		goto tr325;
	goto tr215;
case 294:
	if ( (*p) == 101 )
		goto tr326;
	goto tr215;
case 295:
	if ( (*p) == 61 )
		goto tr327;
	goto tr215;
case 296:
	switch( (*p) ) {
		case 34: goto tr328;
		case 39: goto tr328;
	}
	goto tr215;
case 297:
	switch( (*p) ) {
		case 102: goto tr329;
		case 116: goto tr330;
	}
	goto tr215;
case 298:
	if ( (*p) == 97 )
		goto tr331;
	goto tr215;
case 299:
	if ( (*p) == 108 )
		goto tr332;
	goto tr215;
case 300:
	if ( (*p) == 115 )
		goto tr333;
	goto tr215;
case 301:
	if ( (*p) == 101 )
		goto tr334;
	goto tr215;
case 302:
	switch( (*p) ) {
		case 34: goto tr335;
		case 39: goto tr335;
	}
	goto tr215;
case 303:
	if ( (*p) == 114 )
		goto tr336;
	goto tr215;
case 304:
	if ( (*p) == 117 )
		goto tr337;
	goto tr215;
case 305:
	if ( (*p) == 101 )
		goto tr338;
	goto tr215;
case 306:
	if ( (*p) == 101 )
		goto tr339;
	goto tr215;
case 307:
	if ( (*p) == 114 )
		goto tr340;
	goto tr215;
case 308:
	if ( (*p) == 61 )
		goto tr341;
	goto tr215;
case 309:
	switch( (*p) ) {
		case 34: goto tr342;
		case 39: goto tr342;
	}
	goto tr215;
case 310:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr343;
case 311:
	switch( (*p) ) {
		case 34: goto tr344;
		case 39: goto tr344;
	}
	goto tr343;
case 312:
	switch( (*p) ) {
		case 47: goto tr345;
		case 109: goto tr33;
		case 110: goto tr34;
		case 114: goto tr35;
		case 116: goto tr36;
		case 119: goto tr37;
	}
	goto tr1;
case 313:
	switch( (*p) ) {
		case 110: goto tr346;
		case 114: goto tr347;
		case 119: goto tr348;
	}
	goto tr1;
case 314:
	if ( (*p) == 111 )
		goto tr349;
	goto tr1;
case 315:
	if ( (*p) == 100 )
		goto tr350;
	goto tr1;
case 316:
	if ( (*p) == 101 )
		goto tr351;
	goto tr1;
case 317:
	if ( (*p) == 101 )
		goto tr352;
	goto tr1;
case 318:
	if ( (*p) == 108 )
		goto tr353;
	goto tr1;
case 319:
	if ( (*p) == 97 )
		goto tr354;
	goto tr1;
case 320:
	if ( (*p) == 116 )
		goto tr355;
	goto tr1;
case 321:
	if ( (*p) == 105 )
		goto tr356;
	goto tr1;
case 322:
	if ( (*p) == 111 )
		goto tr357;
	goto tr1;
case 323:
	if ( (*p) == 110 )
		goto tr351;
	goto tr1;
case 324:
	if ( (*p) == 97 )
		goto tr358;
	goto tr1;
case 325:
	if ( (*p) == 121 )
		goto tr351;
	goto tr1;
case 326:
	if ( (*p) == 99 )
		goto tr359;
	goto tr1;
case 327:
	if ( (*p) == 116 )
		goto tr360;
	goto tr1;
case 328:
	if ( (*p) == 105 )
		goto tr361;
	goto tr1;
case 329:
	if ( (*p) == 111 )
		goto tr362;
	goto tr1;
case 330:
	if ( (*p) == 110 )
		goto tr363;
	goto tr1;
case 331:
	if ( (*p) == 61 )
		goto tr364;
	goto tr1;
case 332:
	switch( (*p) ) {
		case 34: goto tr365;
		case 39: goto tr365;
	}
	goto tr1;
case 333:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr366;
case 334:
	switch( (*p) ) {
		case 34: goto tr367;
		case 39: goto tr367;
	}
	goto tr366;
case 335:
	if ( (*p) == 104 )
		goto tr368;
	goto tr1;
case 336:
	if ( (*p) == 97 )
		goto tr369;
	goto tr1;
case 337:
	if ( (*p) == 110 )
		goto tr370;
	goto tr1;
case 338:
	if ( (*p) == 103 )
		goto tr371;
	goto tr1;
case 339:
	if ( (*p) == 101 )
		goto tr372;
	goto tr1;
case 340:
	if ( (*p) == 115 )
		goto tr373;
	goto tr1;
case 341:
	if ( (*p) == 101 )
		goto tr374;
	goto tr1;
case 342:
	if ( (*p) == 116 )
		goto tr375;
	goto tr1;
case 343:
	if ( (*p) == 61 )
		goto tr376;
	goto tr1;
case 344:
	switch( (*p) ) {
		case 34: goto tr377;
		case 39: goto tr377;
	}
	goto tr1;
case 345:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr378;
	goto tr1;
case 346:
	switch( (*p) ) {
		case 34: goto tr379;
		case 39: goto tr379;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr378;
	goto tr1;
case 347:
	if ( (*p) == 100 )
		goto tr380;
	goto tr107;
case 348:
	if ( (*p) == 61 )
		goto tr381;
	goto tr107;
case 349:
	switch( (*p) ) {
		case 34: goto tr382;
		case 39: goto tr382;
	}
	goto tr107;
case 350:
	if ( (*p) == 45 )
		goto tr383;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr384;
	goto tr107;
case 351:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr384;
	goto tr107;
case 352:
	switch( (*p) ) {
		case 34: goto tr385;
		case 39: goto tr385;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr384;
	goto tr107;
case 353:
	switch( (*p) ) {
		case 32: goto tr386;
		case 61: goto tr387;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr386;
	goto tr1;
case 354:
	switch( (*p) ) {
		case 34: goto tr388;
		case 39: goto tr388;
	}
	goto tr1;
case 355:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr389;
case 356:
	switch( (*p) ) {
		case 34: goto tr390;
		case 39: goto tr390;
	}
	goto tr389;
case 641:
	switch( (*p) ) {
		case 32: goto tr715;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr715;
	goto tr107;
case 642:
	switch( (*p) ) {
		case 32: goto tr715;
		case 47: goto tr351;
		case 60: goto tr683;
		case 62: goto tr30;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr715;
	goto tr107;
case 357:
	switch( (*p) ) {
		case 97: goto tr391;
		case 111: goto tr392;
	}
	goto tr1;
case 358:
	if ( (*p) == 116 )
		goto tr393;
	goto tr1;
case 359:
	if ( (*p) == 61 )
		goto tr394;
	goto tr1;
case 360:
	switch( (*p) ) {
		case 34: goto tr395;
		case 39: goto tr395;
	}
	goto tr1;
case 361:
	if ( (*p) == 45 )
		goto tr396;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr397;
	goto tr1;
case 362:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr397;
	goto tr1;
case 363:
	switch( (*p) ) {
		case 34: goto tr398;
		case 39: goto tr398;
		case 46: goto tr399;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr397;
	goto tr1;
case 364:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr400;
	goto tr1;
case 365:
	switch( (*p) ) {
		case 34: goto tr398;
		case 39: goto tr398;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr400;
	goto tr1;
case 366:
	if ( (*p) == 110 )
		goto tr401;
	goto tr1;
case 367:
	if ( (*p) == 61 )
		goto tr402;
	goto tr1;
case 368:
	switch( (*p) ) {
		case 34: goto tr403;
		case 39: goto tr403;
	}
	goto tr1;
case 369:
	if ( (*p) == 45 )
		goto tr404;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr405;
	goto tr1;
case 370:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr405;
	goto tr1;
case 371:
	switch( (*p) ) {
		case 34: goto tr406;
		case 39: goto tr406;
		case 46: goto tr407;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr405;
	goto tr1;
case 372:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr408;
	goto tr1;
case 373:
	switch( (*p) ) {
		case 34: goto tr406;
		case 39: goto tr406;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr408;
	goto tr1;
case 374:
	if ( (*p) == 101 )
		goto tr409;
	goto tr1;
case 375:
	if ( (*p) == 102 )
		goto tr410;
	goto tr1;
case 376:
	if ( (*p) == 61 )
		goto tr411;
	goto tr1;
case 377:
	switch( (*p) ) {
		case 34: goto tr412;
		case 39: goto tr412;
	}
	goto tr1;
case 378:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr413;
	goto tr1;
case 379:
	switch( (*p) ) {
		case 34: goto tr414;
		case 39: goto tr414;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr413;
	goto tr142;
case 643:
	switch( (*p) ) {
		case 32: goto tr674;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr674;
	goto tr706;
case 380:
	if ( (*p) == 105 )
		goto tr415;
	goto tr1;
case 381:
	if ( (*p) == 109 )
		goto tr416;
	goto tr1;
case 382:
	if ( (*p) == 101 )
		goto tr417;
	goto tr1;
case 383:
	if ( (*p) == 115 )
		goto tr418;
	goto tr1;
case 384:
	if ( (*p) == 116 )
		goto tr419;
	goto tr1;
case 385:
	if ( (*p) == 97 )
		goto tr420;
	goto tr1;
case 386:
	if ( (*p) == 109 )
		goto tr421;
	goto tr1;
case 387:
	if ( (*p) == 112 )
		goto tr422;
	goto tr1;
case 388:
	if ( (*p) == 61 )
		goto tr423;
	goto tr1;
case 389:
	switch( (*p) ) {
		case 34: goto tr424;
		case 39: goto tr424;
	}
	goto tr1;
case 390:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr425;
	goto tr1;
case 391:
	if ( (*p) == 45 )
		goto tr426;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr425;
	goto tr1;
case 392:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr427;
	goto tr1;
case 393:
	if ( (*p) == 45 )
		goto tr428;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr427;
	goto tr1;
case 394:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr429;
	goto tr1;
case 395:
	if ( (*p) == 84 )
		goto tr430;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr429;
	goto tr1;
case 396:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr431;
	goto tr1;
case 397:
	if ( (*p) == 58 )
		goto tr432;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr431;
	goto tr1;
case 398:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr433;
	goto tr1;
case 399:
	if ( (*p) == 58 )
		goto tr434;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr433;
	goto tr1;
case 400:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr435;
	goto tr1;
case 401:
	if ( (*p) == 90 )
		goto tr436;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr435;
	goto tr1;
case 402:
	switch( (*p) ) {
		case 34: goto tr437;
		case 39: goto tr437;
	}
	goto tr166;
case 644:
	switch( (*p) ) {
		case 32: goto tr674;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr674;
	goto tr707;
case 403:
	switch( (*p) ) {
		case 105: goto tr438;
		case 115: goto tr439;
	}
	goto tr1;
case 404:
	if ( (*p) == 100 )
		goto tr440;
	goto tr1;
case 405:
	if ( (*p) == 61 )
		goto tr441;
	goto tr1;
case 406:
	switch( (*p) ) {
		case 34: goto tr442;
		case 39: goto tr442;
	}
	goto tr1;
case 407:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr443;
	goto tr1;
case 408:
	switch( (*p) ) {
		case 34: goto tr444;
		case 39: goto tr444;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr443;
	goto tr174;
case 645:
	switch( (*p) ) {
		case 32: goto tr674;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr674;
	goto tr708;
case 409:
	switch( (*p) ) {
		case 32: goto tr445;
		case 61: goto tr446;
		case 101: goto tr447;
		case 105: goto tr448;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr445;
	goto tr1;
case 410:
	switch( (*p) ) {
		case 32: goto tr445;
		case 61: goto tr446;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr445;
	goto tr1;
case 411:
	switch( (*p) ) {
		case 34: goto tr449;
		case 39: goto tr449;
	}
	goto tr1;
case 412:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr450;
case 413:
	switch( (*p) ) {
		case 34: goto tr451;
		case 39: goto tr451;
	}
	goto tr450;
case 646:
	switch( (*p) ) {
		case 32: goto tr716;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr716;
	goto tr107;
case 647:
	switch( (*p) ) {
		case 32: goto tr716;
		case 47: goto tr351;
		case 60: goto tr683;
		case 62: goto tr30;
		case 97: goto tr675;
		case 99: goto tr676;
		case 105: goto tr677;
		case 107: goto tr386;
		case 108: goto tr678;
		case 114: goto tr679;
		case 116: goto tr680;
		case 117: goto tr681;
		case 118: goto tr682;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr716;
	goto tr107;
case 414:
	if ( (*p) == 114 )
		goto tr452;
	goto tr1;
case 415:
	if ( (*p) == 115 )
		goto tr453;
	goto tr1;
case 416:
	if ( (*p) == 105 )
		goto tr454;
	goto tr1;
case 417:
	if ( (*p) == 111 )
		goto tr455;
	goto tr1;
case 418:
	if ( (*p) == 110 )
		goto tr456;
	goto tr1;
case 419:
	if ( (*p) == 61 )
		goto tr457;
	goto tr1;
case 420:
	switch( (*p) ) {
		case 34: goto tr458;
		case 39: goto tr458;
	}
	goto tr1;
case 421:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr459;
	goto tr1;
case 422:
	switch( (*p) ) {
		case 34: goto tr460;
		case 39: goto tr460;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr459;
	goto tr1;
case 423:
	if ( (*p) == 115 )
		goto tr461;
	goto tr1;
case 424:
	if ( (*p) == 105 )
		goto tr462;
	goto tr1;
case 425:
	if ( (*p) == 98 )
		goto tr463;
	goto tr1;
case 426:
	if ( (*p) == 108 )
		goto tr464;
	goto tr1;
case 427:
	if ( (*p) == 101 )
		goto tr465;
	goto tr1;
case 428:
	if ( (*p) == 61 )
		goto tr466;
	goto tr1;
case 429:
	switch( (*p) ) {
		case 34: goto tr467;
		case 39: goto tr467;
	}
	goto tr1;
case 430:
	switch( (*p) ) {
		case 102: goto tr468;
		case 116: goto tr469;
	}
	goto tr1;
case 431:
	if ( (*p) == 97 )
		goto tr470;
	goto tr1;
case 432:
	if ( (*p) == 108 )
		goto tr471;
	goto tr1;
case 433:
	if ( (*p) == 115 )
		goto tr472;
	goto tr1;
case 434:
	if ( (*p) == 101 )
		goto tr473;
	goto tr1;
case 435:
	switch( (*p) ) {
		case 34: goto tr474;
		case 39: goto tr474;
	}
	goto tr1;
case 436:
	if ( (*p) == 114 )
		goto tr475;
	goto tr1;
case 437:
	if ( (*p) == 117 )
		goto tr476;
	goto tr1;
case 438:
	if ( (*p) == 101 )
		goto tr477;
	goto tr1;
case 439:
	if ( (*p) == 101 )
		goto tr478;
	goto tr1;
case 440:
	if ( (*p) == 114 )
		goto tr479;
	goto tr1;
case 441:
	if ( (*p) == 61 )
		goto tr480;
	goto tr1;
case 442:
	switch( (*p) ) {
		case 34: goto tr481;
		case 39: goto tr481;
	}
	goto tr1;
case 443:
	switch( (*p) ) {
		case 34: goto tr1;
		case 39: goto tr1;
	}
	goto tr482;
case 444:
	switch( (*p) ) {
		case 34: goto tr483;
		case 39: goto tr483;
	}
	goto tr482;
case 445:
	if ( (*p) == 99 )
		goto tr484;
	goto tr215;
case 446:
	if ( (*p) == 116 )
		goto tr485;
	goto tr215;
case 447:
	if ( (*p) == 105 )
		goto tr486;
	goto tr215;
case 448:
	if ( (*p) == 111 )
		goto tr487;
	goto tr215;
case 449:
	if ( (*p) == 110 )
		goto tr488;
	goto tr215;
case 450:
	if ( (*p) == 61 )
		goto tr489;
	goto tr215;
case 451:
	switch( (*p) ) {
		case 34: goto tr490;
		case 39: goto tr490;
	}
	goto tr215;
case 452:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr491;
case 453:
	switch( (*p) ) {
		case 34: goto tr492;
		case 39: goto tr492;
	}
	goto tr491;
case 648:
	switch( (*p) ) {
		case 32: goto tr599;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr599;
	goto tr237;
case 454:
	if ( (*p) == 104 )
		goto tr493;
	goto tr215;
case 455:
	if ( (*p) == 97 )
		goto tr494;
	goto tr215;
case 456:
	if ( (*p) == 110 )
		goto tr495;
	goto tr215;
case 457:
	if ( (*p) == 103 )
		goto tr496;
	goto tr215;
case 458:
	if ( (*p) == 101 )
		goto tr497;
	goto tr215;
case 459:
	if ( (*p) == 115 )
		goto tr498;
	goto tr215;
case 460:
	if ( (*p) == 101 )
		goto tr499;
	goto tr215;
case 461:
	if ( (*p) == 116 )
		goto tr500;
	goto tr215;
case 462:
	if ( (*p) == 61 )
		goto tr501;
	goto tr215;
case 463:
	switch( (*p) ) {
		case 34: goto tr502;
		case 39: goto tr502;
	}
	goto tr215;
case 464:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr503;
	goto tr215;
case 465:
	switch( (*p) ) {
		case 34: goto tr504;
		case 39: goto tr504;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr503;
	goto tr215;
case 466:
	if ( (*p) == 100 )
		goto tr505;
	goto tr237;
case 467:
	if ( (*p) == 61 )
		goto tr506;
	goto tr237;
case 468:
	switch( (*p) ) {
		case 34: goto tr507;
		case 39: goto tr507;
	}
	goto tr237;
case 469:
	if ( (*p) == 45 )
		goto tr508;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr509;
	goto tr237;
case 470:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr509;
	goto tr237;
case 471:
	switch( (*p) ) {
		case 34: goto tr510;
		case 39: goto tr510;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr509;
	goto tr237;
case 472:
	switch( (*p) ) {
		case 32: goto tr511;
		case 61: goto tr512;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr511;
	goto tr215;
case 473:
	switch( (*p) ) {
		case 34: goto tr513;
		case 39: goto tr513;
	}
	goto tr215;
case 474:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr514;
case 475:
	switch( (*p) ) {
		case 34: goto tr515;
		case 39: goto tr515;
	}
	goto tr514;
case 649:
	switch( (*p) ) {
		case 32: goto tr717;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr717;
	goto tr237;
case 476:
	switch( (*p) ) {
		case 97: goto tr516;
		case 111: goto tr517;
	}
	goto tr215;
case 477:
	if ( (*p) == 116 )
		goto tr518;
	goto tr215;
case 478:
	if ( (*p) == 61 )
		goto tr519;
	goto tr215;
case 479:
	switch( (*p) ) {
		case 34: goto tr520;
		case 39: goto tr520;
	}
	goto tr215;
case 480:
	if ( (*p) == 45 )
		goto tr521;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr522;
	goto tr215;
case 481:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr522;
	goto tr215;
case 482:
	switch( (*p) ) {
		case 34: goto tr523;
		case 39: goto tr523;
		case 46: goto tr524;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr522;
	goto tr215;
case 483:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr525;
	goto tr215;
case 484:
	switch( (*p) ) {
		case 34: goto tr523;
		case 39: goto tr523;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr525;
	goto tr215;
case 485:
	if ( (*p) == 110 )
		goto tr526;
	goto tr215;
case 486:
	if ( (*p) == 61 )
		goto tr527;
	goto tr215;
case 487:
	switch( (*p) ) {
		case 34: goto tr528;
		case 39: goto tr528;
	}
	goto tr215;
case 488:
	if ( (*p) == 45 )
		goto tr529;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr530;
	goto tr215;
case 489:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr530;
	goto tr215;
case 490:
	switch( (*p) ) {
		case 34: goto tr531;
		case 39: goto tr531;
		case 46: goto tr532;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr530;
	goto tr215;
case 491:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr533;
	goto tr215;
case 492:
	switch( (*p) ) {
		case 34: goto tr531;
		case 39: goto tr531;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr533;
	goto tr215;
case 493:
	if ( (*p) == 101 )
		goto tr534;
	goto tr215;
case 494:
	if ( (*p) == 102 )
		goto tr535;
	goto tr215;
case 495:
	if ( (*p) == 61 )
		goto tr536;
	goto tr215;
case 496:
	switch( (*p) ) {
		case 34: goto tr537;
		case 39: goto tr537;
	}
	goto tr215;
case 497:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr538;
	goto tr215;
case 498:
	switch( (*p) ) {
		case 34: goto tr539;
		case 39: goto tr539;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr538;
	goto tr272;
case 650:
	switch( (*p) ) {
		case 32: goto tr599;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr599;
	goto tr711;
case 499:
	if ( (*p) == 105 )
		goto tr540;
	goto tr215;
case 500:
	if ( (*p) == 109 )
		goto tr541;
	goto tr215;
case 501:
	if ( (*p) == 101 )
		goto tr542;
	goto tr215;
case 502:
	if ( (*p) == 115 )
		goto tr543;
	goto tr215;
case 503:
	if ( (*p) == 116 )
		goto tr544;
	goto tr215;
case 504:
	if ( (*p) == 97 )
		goto tr545;
	goto tr215;
case 505:
	if ( (*p) == 109 )
		goto tr546;
	goto tr215;
case 506:
	if ( (*p) == 112 )
		goto tr547;
	goto tr215;
case 507:
	if ( (*p) == 61 )
		goto tr548;
	goto tr215;
case 508:
	switch( (*p) ) {
		case 34: goto tr549;
		case 39: goto tr549;
	}
	goto tr215;
case 509:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr550;
	goto tr215;
case 510:
	if ( (*p) == 45 )
		goto tr551;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr550;
	goto tr215;
case 511:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr552;
	goto tr215;
case 512:
	if ( (*p) == 45 )
		goto tr553;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr552;
	goto tr215;
case 513:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr554;
	goto tr215;
case 514:
	if ( (*p) == 84 )
		goto tr555;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr554;
	goto tr215;
case 515:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr556;
	goto tr215;
case 516:
	if ( (*p) == 58 )
		goto tr557;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr556;
	goto tr215;
case 517:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr558;
	goto tr215;
case 518:
	if ( (*p) == 58 )
		goto tr559;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr558;
	goto tr215;
case 519:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr560;
	goto tr215;
case 520:
	if ( (*p) == 90 )
		goto tr561;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr560;
	goto tr215;
case 521:
	switch( (*p) ) {
		case 34: goto tr562;
		case 39: goto tr562;
	}
	goto tr296;
case 651:
	switch( (*p) ) {
		case 32: goto tr599;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr599;
	goto tr712;
case 522:
	switch( (*p) ) {
		case 105: goto tr563;
		case 115: goto tr564;
	}
	goto tr215;
case 523:
	if ( (*p) == 100 )
		goto tr565;
	goto tr215;
case 524:
	if ( (*p) == 61 )
		goto tr566;
	goto tr215;
case 525:
	switch( (*p) ) {
		case 34: goto tr567;
		case 39: goto tr567;
	}
	goto tr215;
case 526:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr568;
	goto tr215;
case 527:
	switch( (*p) ) {
		case 34: goto tr569;
		case 39: goto tr569;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr568;
	goto tr304;
case 652:
	switch( (*p) ) {
		case 32: goto tr599;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr599;
	goto tr713;
case 528:
	switch( (*p) ) {
		case 32: goto tr570;
		case 61: goto tr571;
		case 101: goto tr572;
		case 105: goto tr573;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr570;
	goto tr215;
case 529:
	switch( (*p) ) {
		case 32: goto tr570;
		case 61: goto tr571;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr570;
	goto tr215;
case 530:
	switch( (*p) ) {
		case 34: goto tr574;
		case 39: goto tr574;
	}
	goto tr215;
case 531:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr575;
case 532:
	switch( (*p) ) {
		case 34: goto tr576;
		case 39: goto tr576;
	}
	goto tr575;
case 653:
	switch( (*p) ) {
		case 32: goto tr718;
		case 47: goto tr43;
		case 60: goto tr665;
		case 62: goto tr31;
		case 97: goto tr666;
		case 99: goto tr667;
		case 105: goto tr668;
		case 107: goto tr511;
		case 108: goto tr669;
		case 114: goto tr670;
		case 116: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr718;
	goto tr237;
case 533:
	if ( (*p) == 114 )
		goto tr577;
	goto tr215;
case 534:
	if ( (*p) == 115 )
		goto tr578;
	goto tr215;
case 535:
	if ( (*p) == 105 )
		goto tr579;
	goto tr215;
case 536:
	if ( (*p) == 111 )
		goto tr580;
	goto tr215;
case 537:
	if ( (*p) == 110 )
		goto tr581;
	goto tr215;
case 538:
	if ( (*p) == 61 )
		goto tr582;
	goto tr215;
case 539:
	switch( (*p) ) {
		case 34: goto tr583;
		case 39: goto tr583;
	}
	goto tr215;
case 540:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr584;
	goto tr215;
case 541:
	switch( (*p) ) {
		case 34: goto tr585;
		case 39: goto tr585;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr584;
	goto tr215;
case 542:
	if ( (*p) == 115 )
		goto tr586;
	goto tr215;
case 543:
	if ( (*p) == 105 )
		goto tr587;
	goto tr215;
case 544:
	if ( (*p) == 98 )
		goto tr588;
	goto tr215;
case 545:
	if ( (*p) == 108 )
		goto tr589;
	goto tr215;
case 546:
	if ( (*p) == 101 )
		goto tr590;
	goto tr215;
case 547:
	if ( (*p) == 61 )
		goto tr591;
	goto tr215;
case 548:
	switch( (*p) ) {
		case 34: goto tr592;
		case 39: goto tr592;
	}
	goto tr215;
case 549:
	switch( (*p) ) {
		case 102: goto tr593;
		case 116: goto tr594;
	}
	goto tr215;
case 550:
	if ( (*p) == 97 )
		goto tr595;
	goto tr215;
case 551:
	if ( (*p) == 108 )
		goto tr596;
	goto tr215;
case 552:
	if ( (*p) == 115 )
		goto tr597;
	goto tr215;
case 553:
	if ( (*p) == 101 )
		goto tr598;
	goto tr215;
case 554:
	switch( (*p) ) {
		case 34: goto tr599;
		case 39: goto tr599;
	}
	goto tr215;
case 555:
	if ( (*p) == 114 )
		goto tr600;
	goto tr215;
case 556:
	if ( (*p) == 117 )
		goto tr601;
	goto tr215;
case 557:
	if ( (*p) == 101 )
		goto tr602;
	goto tr215;
case 558:
	if ( (*p) == 101 )
		goto tr603;
	goto tr215;
case 559:
	if ( (*p) == 114 )
		goto tr604;
	goto tr215;
case 560:
	if ( (*p) == 61 )
		goto tr605;
	goto tr215;
case 561:
	switch( (*p) ) {
		case 34: goto tr606;
		case 39: goto tr606;
	}
	goto tr215;
case 562:
	switch( (*p) ) {
		case 34: goto tr215;
		case 39: goto tr215;
	}
	goto tr607;
case 563:
	switch( (*p) ) {
		case 34: goto tr608;
		case 39: goto tr608;
	}
	goto tr607;
case 564:
	switch( (*p) ) {
		case 100: goto tr609;
		case 111: goto tr610;
	}
	goto tr1;
case 565:
	if ( (*p) == 100 )
		goto tr611;
	goto tr1;
case 566:
	if ( (*p) == 101 )
		goto tr612;
	goto tr1;
case 567:
	if ( (*p) == 115 )
		goto tr613;
	goto tr1;
case 568:
	if ( (*p) == 109 )
		goto tr614;
	goto tr1;
case 569:
	goto tr615;
case 654:
	goto tr615;
case 570:
	if ( (*p) == 101 )
		goto tr616;
	goto tr1;
case 571:
	if ( (*p) == 108 )
		goto tr617;
	goto tr1;
case 572:
	if ( (*p) == 97 )
		goto tr618;
	goto tr1;
case 573:
	if ( (*p) == 116 )
		goto tr619;
	goto tr1;
case 574:
	if ( (*p) == 105 )
		goto tr620;
	goto tr1;
case 575:
	if ( (*p) == 111 )
		goto tr621;
	goto tr1;
case 576:
	if ( (*p) == 110 )
		goto tr622;
	goto tr1;
case 577:
	if ( (*p) == 97 )
		goto tr623;
	goto tr1;
case 578:
	if ( (*p) == 103 )
		goto tr624;
	goto tr1;
case 579:
	if ( (*p) == 97 )
		goto tr625;
	goto tr1;
case 580:
	if ( (*p) == 121 )
		goto tr626;
	goto tr1;
case 581:
	switch( (*p) ) {
		case 47: goto tr6;
		case 63: goto tr627;
		case 109: goto tr7;
		case 110: goto tr8;
		case 111: goto tr9;
		case 114: goto tr10;
		case 116: goto tr11;
		case 119: goto tr12;
	}
	goto tr1;
case 582:
	if ( (*p) == 120 )
		goto tr628;
	goto tr1;
case 583:
	if ( (*p) == 109 )
		goto tr629;
	goto tr1;
case 584:
	if ( (*p) == 108 )
		goto tr630;
	goto tr1;
case 585:
	if ( (*p) == 32 )
		goto tr631;
	goto tr1;
case 586:
	if ( (*p) == 118 )
		goto tr632;
	goto tr1;
case 587:
	if ( (*p) == 101 )
		goto tr633;
	goto tr1;
case 588:
	if ( (*p) == 114 )
		goto tr634;
	goto tr1;
case 589:
	if ( (*p) == 115 )
		goto tr635;
	goto tr1;
case 590:
	if ( (*p) == 105 )
		goto tr636;
	goto tr1;
case 591:
	if ( (*p) == 111 )
		goto tr637;
	goto tr1;
case 592:
	if ( (*p) == 110 )
		goto tr638;
	goto tr1;
case 593:
	if ( (*p) == 61 )
		goto tr639;
	goto tr1;
case 594:
	if ( (*p) == 39 )
		goto tr640;
	goto tr1;
case 595:
	if ( (*p) == 49 )
		goto tr641;
	goto tr1;
case 596:
	if ( (*p) == 46 )
		goto tr642;
	goto tr1;
case 597:
	if ( (*p) == 48 )
		goto tr643;
	goto tr1;
case 598:
	if ( (*p) == 39 )
		goto tr644;
	goto tr1;
case 599:
	if ( (*p) == 32 )
		goto tr645;
	goto tr1;
case 600:
	if ( (*p) == 101 )
		goto tr646;
	goto tr1;
case 601:
	if ( (*p) == 110 )
		goto tr647;
	goto tr1;
case 602:
	if ( (*p) == 99 )
		goto tr648;
	goto tr1;
case 603:
	if ( (*p) == 111 )
		goto tr649;
	goto tr1;
case 604:
	if ( (*p) == 100 )
		goto tr650;
	goto tr1;
case 605:
	if ( (*p) == 105 )
		goto tr651;
	goto tr1;
case 606:
	if ( (*p) == 110 )
		goto tr652;
	goto tr1;
case 607:
	if ( (*p) == 103 )
		goto tr653;
	goto tr1;
case 608:
	if ( (*p) == 61 )
		goto tr654;
	goto tr1;
case 609:
	if ( (*p) == 39 )
		goto tr655;
	goto tr1;
case 610:
	if ( (*p) == 85 )
		goto tr656;
	goto tr1;
case 611:
	if ( (*p) == 84 )
		goto tr657;
	goto tr1;
case 612:
	if ( (*p) == 70 )
		goto tr658;
	goto tr1;
case 613:
	if ( (*p) == 45 )
		goto tr659;
	goto tr1;
case 614:
	if ( (*p) == 56 )
		goto tr660;
	goto tr1;
case 615:
	if ( (*p) == 39 )
		goto tr661;
	goto tr1;
case 616:
	if ( (*p) == 63 )
		goto tr662;
	goto tr1;
case 617:
	if ( (*p) == 62 )
		goto tr663;
	goto tr1;
	}

	tr1: cs = 0; goto _again;
	tr107: _ps = cs;cs = 0; goto f11;
	tr142: _ps = cs;cs = 0; goto f16;
	tr166: _ps = cs;cs = 0; goto f24;
	tr174: _ps = cs;cs = 0; goto f25;
	tr215: _ps = cs;cs = 0; goto f31;
	tr237: _ps = cs;cs = 0; goto f32;
	tr272: _ps = cs;cs = 0; goto f33;
	tr296: _ps = cs;cs = 0; goto f34;
	tr304: _ps = cs;cs = 0; goto f35;
	tr706: _ps = cs;cs = 0; goto f37;
	tr707: _ps = cs;cs = 0; goto f38;
	tr708: _ps = cs;cs = 0; goto f39;
	tr711: _ps = cs;cs = 0; goto f41;
	tr712: _ps = cs;cs = 0; goto f42;
	tr713: _ps = cs;cs = 0; goto f43;
	tr0: cs = 2; goto _again;
	tr2: cs = 3; goto _again;
	tr5: cs = 4; goto _again;
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
	tr351: cs = 23; goto _again;
	tr43: cs = 24; goto _again;
	tr665: cs = 25; goto _again;
	tr32: cs = 26; goto _again;
	tr38: cs = 27; goto _again;
	tr41: cs = 28; goto _again;
	tr42: cs = 29; goto _again;
	tr39: cs = 30; goto _again;
	tr44: cs = 31; goto _again;
	tr45: cs = 32; goto _again;
	tr46: cs = 33; goto _again;
	tr47: cs = 34; goto _again;
	tr48: cs = 35; goto _again;
	tr49: cs = 36; goto _again;
	tr40: cs = 37; goto _again;
	tr50: cs = 38; goto _again;
	tr33: cs = 39; goto _again;
	tr51: cs = 40; goto _again;
	tr52: cs = 41; goto _again;
	tr53: cs = 42; goto _again;
	tr54: cs = 43; goto _again;
	tr78: cs = 44; goto _again;
	tr685: cs = 45; goto _again;
	tr34: cs = 46; goto _again;
	tr58: cs = 47; goto _again;
	tr59: cs = 48; goto _again;
	tr35: cs = 49; goto _again;
	tr61: cs = 50; goto _again;
	tr62: cs = 51; goto _again;
	tr63: cs = 52; goto _again;
	tr64: cs = 53; goto _again;
	tr65: cs = 54; goto _again;
	tr66: cs = 55; goto _again;
	tr36: cs = 56; goto _again;
	tr68: cs = 57; goto _again;
	tr37: cs = 58; goto _again;
	tr70: cs = 59; goto _again;
	tr703: cs = 60; goto _again;
	tr72: cs = 61; goto _again;
	tr73: cs = 62; goto _again;
	tr76: cs = 63; goto _again;
	tr77: cs = 64; goto _again;
	tr74: cs = 65; goto _again;
	tr79: cs = 66; goto _again;
	tr80: cs = 67; goto _again;
	tr81: cs = 68; goto _again;
	tr82: cs = 69; goto _again;
	tr83: cs = 70; goto _again;
	tr84: cs = 71; goto _again;
	tr75: cs = 72; goto _again;
	tr85: cs = 73; goto _again;
	tr695: cs = 74; goto _again;
	tr86: cs = 75; goto _again;
	tr87: cs = 76; goto _again;
	tr88: cs = 77; goto _again;
	tr89: cs = 78; goto _again;
	tr90: cs = 79; goto _again;
	tr91: cs = 80; goto _again;
	tr92: cs = 81; goto f7;
	tr93: cs = 82; goto f8;
	tr696: cs = 83; goto _again;
	tr95: cs = 84; goto _again;
	tr96: cs = 85; goto _again;
	tr97: cs = 86; goto _again;
	tr98: cs = 87; goto _again;
	tr99: cs = 88; goto _again;
	tr100: cs = 89; goto _again;
	tr101: cs = 90; goto _again;
	tr102: cs = 91; goto _again;
	tr103: cs = 92; goto _again;
	tr104: cs = 93; goto f7;
	tr105: cs = 94; goto f8;
	tr697: cs = 95; goto _again;
	tr108: cs = 96; goto _again;
	tr109: cs = 97; goto _again;
	tr110: cs = 98; goto f7;
	tr111: cs = 99; goto f8;
	tr112: cs = 100; goto f8;
	tr114: cs = 101; goto _again;
	tr115: cs = 102; goto _again;
	tr116: cs = 103; goto _again;
	tr117: cs = 104; goto f8;
	tr698: cs = 105; goto _again;
	tr119: cs = 106; goto _again;
	tr121: cs = 107; goto _again;
	tr122: cs = 108; goto _again;
	tr123: cs = 109; goto f7;
	tr124: cs = 110; goto f8;
	tr125: cs = 111; goto f8;
	tr127: cs = 112; goto f8;
	tr128: cs = 113; goto f8;
	tr120: cs = 114; goto _again;
	tr129: cs = 115; goto _again;
	tr130: cs = 116; goto _again;
	tr131: cs = 117; goto f7;
	tr132: cs = 118; goto f8;
	tr133: cs = 119; goto f8;
	tr135: cs = 120; goto f8;
	tr136: cs = 121; goto f8;
	tr699: cs = 122; goto _again;
	tr137: cs = 123; goto _again;
	tr138: cs = 124; goto _again;
	tr139: cs = 125; goto _again;
	tr140: cs = 126; goto f7;
	tr141: cs = 127; goto f8;
	tr700: cs = 128; goto _again;
	tr144: cs = 129; goto _again;
	tr145: cs = 130; goto _again;
	tr146: cs = 131; goto _again;
	tr147: cs = 132; goto _again;
	tr148: cs = 133; goto _again;
	tr149: cs = 134; goto _again;
	tr150: cs = 135; goto _again;
	tr151: cs = 136; goto _again;
	tr152: cs = 137; goto _again;
	tr153: cs = 138; goto f7;
	tr154: cs = 139; goto f8;
	tr155: cs = 140; goto f18;
	tr156: cs = 141; goto f8;
	tr157: cs = 142; goto f19;
	tr158: cs = 143; goto f8;
	tr159: cs = 144; goto f20;
	tr160: cs = 145; goto f8;
	tr161: cs = 146; goto f21;
	tr162: cs = 147; goto f8;
	tr163: cs = 148; goto f22;
	tr164: cs = 149; goto f8;
	tr165: cs = 150; goto f23;
	tr701: cs = 151; goto _again;
	tr168: cs = 152; goto _again;
	tr170: cs = 153; goto _again;
	tr171: cs = 154; goto _again;
	tr172: cs = 155; goto f7;
	tr173: cs = 156; goto f8;
	tr702: cs = 157; goto _again;
	tr176: cs = 158; goto _again;
	tr177: cs = 159; goto _again;
	tr180: cs = 160; goto _again;
	tr181: cs = 161; goto f8;
	tr178: cs = 162; goto _again;
	tr183: cs = 163; goto _again;
	tr184: cs = 164; goto _again;
	tr185: cs = 165; goto _again;
	tr186: cs = 166; goto _again;
	tr187: cs = 167; goto _again;
	tr188: cs = 168; goto _again;
	tr189: cs = 169; goto f7;
	tr190: cs = 170; goto f8;
	tr179: cs = 171; goto _again;
	tr192: cs = 172; goto _again;
	tr193: cs = 173; goto _again;
	tr194: cs = 174; goto _again;
	tr195: cs = 175; goto _again;
	tr196: cs = 176; goto _again;
	tr197: cs = 177; goto _again;
	tr198: cs = 178; goto f7;
	tr199: cs = 179; goto _again;
	tr201: cs = 180; goto _again;
	tr202: cs = 181; goto _again;
	tr203: cs = 182; goto _again;
	tr204: cs = 183; goto f28;
	tr208: cs = 183; goto f29;
	tr200: cs = 184; goto _again;
	tr206: cs = 185; goto _again;
	tr207: cs = 186; goto _again;
	tr169: cs = 187; goto _again;
	tr209: cs = 188; goto _again;
	tr210: cs = 189; goto _again;
	tr211: cs = 190; goto _again;
	tr212: cs = 191; goto f7;
	tr213: cs = 192; goto f8;
	tr686: cs = 193; goto _again;
	tr216: cs = 194; goto _again;
	tr217: cs = 195; goto _again;
	tr218: cs = 196; goto _again;
	tr219: cs = 197; goto _again;
	tr220: cs = 198; goto _again;
	tr221: cs = 199; goto _again;
	tr222: cs = 200; goto f7;
	tr223: cs = 201; goto f8;
	tr687: cs = 202; goto _again;
	tr225: cs = 203; goto _again;
	tr226: cs = 204; goto _again;
	tr227: cs = 205; goto _again;
	tr228: cs = 206; goto _again;
	tr229: cs = 207; goto _again;
	tr230: cs = 208; goto _again;
	tr231: cs = 209; goto _again;
	tr232: cs = 210; goto _again;
	tr233: cs = 211; goto _again;
	tr234: cs = 212; goto f7;
	tr235: cs = 213; goto f8;
	tr688: cs = 214; goto _again;
	tr238: cs = 215; goto _again;
	tr239: cs = 216; goto _again;
	tr240: cs = 217; goto f7;
	tr241: cs = 218; goto f8;
	tr242: cs = 219; goto f8;
	tr244: cs = 220; goto _again;
	tr245: cs = 221; goto _again;
	tr246: cs = 222; goto _again;
	tr247: cs = 223; goto f8;
	tr689: cs = 224; goto _again;
	tr249: cs = 225; goto _again;
	tr251: cs = 226; goto _again;
	tr252: cs = 227; goto _again;
	tr253: cs = 228; goto f7;
	tr254: cs = 229; goto f8;
	tr255: cs = 230; goto f8;
	tr257: cs = 231; goto f8;
	tr258: cs = 232; goto f8;
	tr250: cs = 233; goto _again;
	tr259: cs = 234; goto _again;
	tr260: cs = 235; goto _again;
	tr261: cs = 236; goto f7;
	tr262: cs = 237; goto f8;
	tr263: cs = 238; goto f8;
	tr265: cs = 239; goto f8;
	tr266: cs = 240; goto f8;
	tr690: cs = 241; goto _again;
	tr267: cs = 242; goto _again;
	tr268: cs = 243; goto _again;
	tr269: cs = 244; goto _again;
	tr270: cs = 245; goto f7;
	tr271: cs = 246; goto f8;
	tr691: cs = 247; goto _again;
	tr274: cs = 248; goto _again;
	tr275: cs = 249; goto _again;
	tr276: cs = 250; goto _again;
	tr277: cs = 251; goto _again;
	tr278: cs = 252; goto _again;
	tr279: cs = 253; goto _again;
	tr280: cs = 254; goto _again;
	tr281: cs = 255; goto _again;
	tr282: cs = 256; goto _again;
	tr283: cs = 257; goto f7;
	tr284: cs = 258; goto f8;
	tr285: cs = 259; goto f18;
	tr286: cs = 260; goto f8;
	tr287: cs = 261; goto f19;
	tr288: cs = 262; goto f8;
	tr289: cs = 263; goto f20;
	tr290: cs = 264; goto f8;
	tr291: cs = 265; goto f21;
	tr292: cs = 266; goto f8;
	tr293: cs = 267; goto f22;
	tr294: cs = 268; goto f8;
	tr295: cs = 269; goto f23;
	tr692: cs = 270; goto _again;
	tr298: cs = 271; goto _again;
	tr300: cs = 272; goto _again;
	tr301: cs = 273; goto _again;
	tr302: cs = 274; goto f7;
	tr303: cs = 275; goto f8;
	tr693: cs = 276; goto _again;
	tr306: cs = 277; goto _again;
	tr307: cs = 278; goto _again;
	tr310: cs = 279; goto _again;
	tr311: cs = 280; goto f8;
	tr308: cs = 281; goto _again;
	tr313: cs = 282; goto _again;
	tr314: cs = 283; goto _again;
	tr315: cs = 284; goto _again;
	tr316: cs = 285; goto _again;
	tr317: cs = 286; goto _again;
	tr318: cs = 287; goto _again;
	tr319: cs = 288; goto f7;
	tr320: cs = 289; goto f8;
	tr309: cs = 290; goto _again;
	tr322: cs = 291; goto _again;
	tr323: cs = 292; goto _again;
	tr324: cs = 293; goto _again;
	tr325: cs = 294; goto _again;
	tr326: cs = 295; goto _again;
	tr327: cs = 296; goto _again;
	tr328: cs = 297; goto f7;
	tr329: cs = 298; goto _again;
	tr331: cs = 299; goto _again;
	tr332: cs = 300; goto _again;
	tr333: cs = 301; goto _again;
	tr334: cs = 302; goto f28;
	tr338: cs = 302; goto f29;
	tr330: cs = 303; goto _again;
	tr336: cs = 304; goto _again;
	tr337: cs = 305; goto _again;
	tr299: cs = 306; goto _again;
	tr339: cs = 307; goto _again;
	tr340: cs = 308; goto _again;
	tr341: cs = 309; goto _again;
	tr342: cs = 310; goto f7;
	tr343: cs = 311; goto f8;
	tr683: cs = 312; goto _again;
	tr345: cs = 313; goto _again;
	tr346: cs = 314; goto _again;
	tr349: cs = 315; goto _again;
	tr350: cs = 316; goto _again;
	tr347: cs = 317; goto _again;
	tr352: cs = 318; goto _again;
	tr353: cs = 319; goto _again;
	tr354: cs = 320; goto _again;
	tr355: cs = 321; goto _again;
	tr356: cs = 322; goto _again;
	tr357: cs = 323; goto _again;
	tr348: cs = 324; goto _again;
	tr358: cs = 325; goto _again;
	tr675: cs = 326; goto _again;
	tr359: cs = 327; goto _again;
	tr360: cs = 328; goto _again;
	tr361: cs = 329; goto _again;
	tr362: cs = 330; goto _again;
	tr363: cs = 331; goto _again;
	tr364: cs = 332; goto _again;
	tr365: cs = 333; goto f7;
	tr366: cs = 334; goto f8;
	tr676: cs = 335; goto _again;
	tr368: cs = 336; goto _again;
	tr369: cs = 337; goto _again;
	tr370: cs = 338; goto _again;
	tr371: cs = 339; goto _again;
	tr372: cs = 340; goto _again;
	tr373: cs = 341; goto _again;
	tr374: cs = 342; goto _again;
	tr375: cs = 343; goto _again;
	tr376: cs = 344; goto _again;
	tr377: cs = 345; goto f7;
	tr378: cs = 346; goto f8;
	tr677: cs = 347; goto _again;
	tr380: cs = 348; goto _again;
	tr381: cs = 349; goto _again;
	tr382: cs = 350; goto f7;
	tr383: cs = 351; goto f8;
	tr384: cs = 352; goto f8;
	tr386: cs = 353; goto _again;
	tr387: cs = 354; goto _again;
	tr388: cs = 355; goto _again;
	tr389: cs = 356; goto f8;
	tr678: cs = 357; goto _again;
	tr391: cs = 358; goto _again;
	tr393: cs = 359; goto _again;
	tr394: cs = 360; goto _again;
	tr395: cs = 361; goto f7;
	tr396: cs = 362; goto f8;
	tr397: cs = 363; goto f8;
	tr399: cs = 364; goto f8;
	tr400: cs = 365; goto f8;
	tr392: cs = 366; goto _again;
	tr401: cs = 367; goto _again;
	tr402: cs = 368; goto _again;
	tr403: cs = 369; goto f7;
	tr404: cs = 370; goto f8;
	tr405: cs = 371; goto f8;
	tr407: cs = 372; goto f8;
	tr408: cs = 373; goto f8;
	tr679: cs = 374; goto _again;
	tr409: cs = 375; goto _again;
	tr410: cs = 376; goto _again;
	tr411: cs = 377; goto _again;
	tr412: cs = 378; goto f7;
	tr413: cs = 379; goto f8;
	tr680: cs = 380; goto _again;
	tr415: cs = 381; goto _again;
	tr416: cs = 382; goto _again;
	tr417: cs = 383; goto _again;
	tr418: cs = 384; goto _again;
	tr419: cs = 385; goto _again;
	tr420: cs = 386; goto _again;
	tr421: cs = 387; goto _again;
	tr422: cs = 388; goto _again;
	tr423: cs = 389; goto _again;
	tr424: cs = 390; goto f7;
	tr425: cs = 391; goto f8;
	tr426: cs = 392; goto f18;
	tr427: cs = 393; goto f8;
	tr428: cs = 394; goto f19;
	tr429: cs = 395; goto f8;
	tr430: cs = 396; goto f20;
	tr431: cs = 397; goto f8;
	tr432: cs = 398; goto f21;
	tr433: cs = 399; goto f8;
	tr434: cs = 400; goto f22;
	tr435: cs = 401; goto f8;
	tr436: cs = 402; goto f23;
	tr681: cs = 403; goto _again;
	tr438: cs = 404; goto _again;
	tr440: cs = 405; goto _again;
	tr441: cs = 406; goto _again;
	tr442: cs = 407; goto f7;
	tr443: cs = 408; goto f8;
	tr682: cs = 409; goto _again;
	tr445: cs = 410; goto _again;
	tr446: cs = 411; goto _again;
	tr449: cs = 412; goto _again;
	tr450: cs = 413; goto f8;
	tr447: cs = 414; goto _again;
	tr452: cs = 415; goto _again;
	tr453: cs = 416; goto _again;
	tr454: cs = 417; goto _again;
	tr455: cs = 418; goto _again;
	tr456: cs = 419; goto _again;
	tr457: cs = 420; goto _again;
	tr458: cs = 421; goto f7;
	tr459: cs = 422; goto f8;
	tr448: cs = 423; goto _again;
	tr461: cs = 424; goto _again;
	tr462: cs = 425; goto _again;
	tr463: cs = 426; goto _again;
	tr464: cs = 427; goto _again;
	tr465: cs = 428; goto _again;
	tr466: cs = 429; goto _again;
	tr467: cs = 430; goto f7;
	tr468: cs = 431; goto _again;
	tr470: cs = 432; goto _again;
	tr471: cs = 433; goto _again;
	tr472: cs = 434; goto _again;
	tr473: cs = 435; goto f28;
	tr477: cs = 435; goto f29;
	tr469: cs = 436; goto _again;
	tr475: cs = 437; goto _again;
	tr476: cs = 438; goto _again;
	tr439: cs = 439; goto _again;
	tr478: cs = 440; goto _again;
	tr479: cs = 441; goto _again;
	tr480: cs = 442; goto _again;
	tr481: cs = 443; goto f7;
	tr482: cs = 444; goto f8;
	tr666: cs = 445; goto _again;
	tr484: cs = 446; goto _again;
	tr485: cs = 447; goto _again;
	tr486: cs = 448; goto _again;
	tr487: cs = 449; goto _again;
	tr488: cs = 450; goto _again;
	tr489: cs = 451; goto _again;
	tr490: cs = 452; goto f7;
	tr491: cs = 453; goto f8;
	tr667: cs = 454; goto _again;
	tr493: cs = 455; goto _again;
	tr494: cs = 456; goto _again;
	tr495: cs = 457; goto _again;
	tr496: cs = 458; goto _again;
	tr497: cs = 459; goto _again;
	tr498: cs = 460; goto _again;
	tr499: cs = 461; goto _again;
	tr500: cs = 462; goto _again;
	tr501: cs = 463; goto _again;
	tr502: cs = 464; goto f7;
	tr503: cs = 465; goto f8;
	tr668: cs = 466; goto _again;
	tr505: cs = 467; goto _again;
	tr506: cs = 468; goto _again;
	tr507: cs = 469; goto f7;
	tr508: cs = 470; goto f8;
	tr509: cs = 471; goto f8;
	tr511: cs = 472; goto _again;
	tr512: cs = 473; goto _again;
	tr513: cs = 474; goto _again;
	tr514: cs = 475; goto f8;
	tr669: cs = 476; goto _again;
	tr516: cs = 477; goto _again;
	tr518: cs = 478; goto _again;
	tr519: cs = 479; goto _again;
	tr520: cs = 480; goto f7;
	tr521: cs = 481; goto f8;
	tr522: cs = 482; goto f8;
	tr524: cs = 483; goto f8;
	tr525: cs = 484; goto f8;
	tr517: cs = 485; goto _again;
	tr526: cs = 486; goto _again;
	tr527: cs = 487; goto _again;
	tr528: cs = 488; goto f7;
	tr529: cs = 489; goto f8;
	tr530: cs = 490; goto f8;
	tr532: cs = 491; goto f8;
	tr533: cs = 492; goto f8;
	tr670: cs = 493; goto _again;
	tr534: cs = 494; goto _again;
	tr535: cs = 495; goto _again;
	tr536: cs = 496; goto _again;
	tr537: cs = 497; goto f7;
	tr538: cs = 498; goto f8;
	tr671: cs = 499; goto _again;
	tr540: cs = 500; goto _again;
	tr541: cs = 501; goto _again;
	tr542: cs = 502; goto _again;
	tr543: cs = 503; goto _again;
	tr544: cs = 504; goto _again;
	tr545: cs = 505; goto _again;
	tr546: cs = 506; goto _again;
	tr547: cs = 507; goto _again;
	tr548: cs = 508; goto _again;
	tr549: cs = 509; goto f7;
	tr550: cs = 510; goto f8;
	tr551: cs = 511; goto f18;
	tr552: cs = 512; goto f8;
	tr553: cs = 513; goto f19;
	tr554: cs = 514; goto f8;
	tr555: cs = 515; goto f20;
	tr556: cs = 516; goto f8;
	tr557: cs = 517; goto f21;
	tr558: cs = 518; goto f8;
	tr559: cs = 519; goto f22;
	tr560: cs = 520; goto f8;
	tr561: cs = 521; goto f23;
	tr672: cs = 522; goto _again;
	tr563: cs = 523; goto _again;
	tr565: cs = 524; goto _again;
	tr566: cs = 525; goto _again;
	tr567: cs = 526; goto f7;
	tr568: cs = 527; goto f8;
	tr673: cs = 528; goto _again;
	tr570: cs = 529; goto _again;
	tr571: cs = 530; goto _again;
	tr574: cs = 531; goto _again;
	tr575: cs = 532; goto f8;
	tr572: cs = 533; goto _again;
	tr577: cs = 534; goto _again;
	tr578: cs = 535; goto _again;
	tr579: cs = 536; goto _again;
	tr580: cs = 537; goto _again;
	tr581: cs = 538; goto _again;
	tr582: cs = 539; goto _again;
	tr583: cs = 540; goto f7;
	tr584: cs = 541; goto f8;
	tr573: cs = 542; goto _again;
	tr586: cs = 543; goto _again;
	tr587: cs = 544; goto _again;
	tr588: cs = 545; goto _again;
	tr589: cs = 546; goto _again;
	tr590: cs = 547; goto _again;
	tr591: cs = 548; goto _again;
	tr592: cs = 549; goto f7;
	tr593: cs = 550; goto _again;
	tr595: cs = 551; goto _again;
	tr596: cs = 552; goto _again;
	tr597: cs = 553; goto _again;
	tr598: cs = 554; goto f28;
	tr602: cs = 554; goto f29;
	tr594: cs = 555; goto _again;
	tr600: cs = 556; goto _again;
	tr601: cs = 557; goto _again;
	tr564: cs = 558; goto _again;
	tr603: cs = 559; goto _again;
	tr604: cs = 560; goto _again;
	tr605: cs = 561; goto _again;
	tr606: cs = 562; goto f7;
	tr607: cs = 563; goto f8;
	tr8: cs = 564; goto _again;
	tr610: cs = 565; goto _again;
	tr611: cs = 566; goto _again;
	tr9: cs = 567; goto _again;
	tr613: cs = 568; goto _again;
	tr614: cs = 569; goto _again;
	tr10: cs = 570; goto _again;
	tr616: cs = 571; goto _again;
	tr617: cs = 572; goto _again;
	tr618: cs = 573; goto _again;
	tr619: cs = 574; goto _again;
	tr620: cs = 575; goto _again;
	tr621: cs = 576; goto _again;
	tr11: cs = 577; goto _again;
	tr623: cs = 578; goto _again;
	tr12: cs = 579; goto _again;
	tr625: cs = 580; goto _again;
	tr3: cs = 581; goto _again;
	tr627: cs = 582; goto _again;
	tr628: cs = 583; goto _again;
	tr629: cs = 584; goto _again;
	tr630: cs = 585; goto _again;
	tr631: cs = 586; goto _again;
	tr632: cs = 587; goto _again;
	tr633: cs = 588; goto _again;
	tr634: cs = 589; goto _again;
	tr635: cs = 590; goto _again;
	tr636: cs = 591; goto _again;
	tr637: cs = 592; goto _again;
	tr638: cs = 593; goto _again;
	tr639: cs = 594; goto _again;
	tr640: cs = 595; goto _again;
	tr641: cs = 596; goto _again;
	tr642: cs = 597; goto _again;
	tr643: cs = 598; goto _again;
	tr644: cs = 599; goto _again;
	tr645: cs = 600; goto _again;
	tr646: cs = 601; goto _again;
	tr647: cs = 602; goto _again;
	tr648: cs = 603; goto _again;
	tr649: cs = 604; goto _again;
	tr650: cs = 605; goto _again;
	tr651: cs = 606; goto _again;
	tr652: cs = 607; goto _again;
	tr653: cs = 608; goto _again;
	tr654: cs = 609; goto _again;
	tr655: cs = 610; goto _again;
	tr656: cs = 611; goto _again;
	tr657: cs = 612; goto _again;
	tr658: cs = 613; goto _again;
	tr659: cs = 614; goto _again;
	tr660: cs = 615; goto _again;
	tr661: cs = 616; goto _again;
	tr662: cs = 617; goto _again;
	tr4: cs = 618; goto f0;
	tr664: cs = 618; goto f13;
	tr29: cs = 619; goto f1;
	tr609: cs = 619; goto f2;
	tr612: cs = 619; goto f3;
	tr622: cs = 619; goto f4;
	tr624: cs = 619; goto f5;
	tr626: cs = 619; goto f6;
	tr367: cs = 620; goto f9;
	tr379: cs = 620; goto f10;
	tr385: cs = 620; goto f12;
	tr474: cs = 620; goto f13;
	tr398: cs = 620; goto f14;
	tr406: cs = 620; goto f15;
	tr460: cs = 620; goto f27;
	tr483: cs = 620; goto f30;
	tr674: cs = 621; goto f13;
	tr30: cs = 622; goto f0;
	tr684: cs = 622; goto f13;
	tr31: cs = 623; goto f0;
	tr663: cs = 623; goto f13;
	tr55: cs = 624; goto f1;
	tr57: cs = 624; goto f2;
	tr60: cs = 624; goto f3;
	tr67: cs = 624; goto f4;
	tr69: cs = 624; goto f5;
	tr71: cs = 624; goto f6;
	tr94: cs = 625; goto f9;
	tr106: cs = 625; goto f10;
	tr113: cs = 625; goto f12;
	tr205: cs = 625; goto f13;
	tr126: cs = 625; goto f14;
	tr134: cs = 625; goto f15;
	tr191: cs = 625; goto f27;
	tr214: cs = 625; goto f30;
	tr694: cs = 626; goto f13;
	tr56: cs = 627; goto f0;
	tr704: cs = 627; goto f13;
	tr118: cs = 628; goto f13;
	tr705: cs = 629; goto f36;
	tr143: cs = 630; goto f17;
	tr167: cs = 631; goto f13;
	tr175: cs = 632; goto f26;
	tr182: cs = 633; goto f13;
	tr709: cs = 634; goto f40;
	tr224: cs = 635; goto f9;
	tr236: cs = 635; goto f10;
	tr243: cs = 635; goto f12;
	tr335: cs = 635; goto f13;
	tr256: cs = 635; goto f14;
	tr264: cs = 635; goto f15;
	tr321: cs = 635; goto f27;
	tr344: cs = 635; goto f30;
	tr248: cs = 636; goto f13;
	tr710: cs = 636; goto f36;
	tr273: cs = 637; goto f17;
	tr297: cs = 638; goto f13;
	tr305: cs = 639; goto f26;
	tr312: cs = 640; goto f13;
	tr714: cs = 640; goto f40;
	tr390: cs = 641; goto f13;
	tr715: cs = 642; goto f36;
	tr414: cs = 643; goto f17;
	tr437: cs = 644; goto f13;
	tr444: cs = 645; goto f26;
	tr451: cs = 646; goto f13;
	tr716: cs = 647; goto f40;
	tr492: cs = 648; goto f9;
	tr504: cs = 648; goto f10;
	tr510: cs = 648; goto f12;
	tr599: cs = 648; goto f13;
	tr523: cs = 648; goto f14;
	tr531: cs = 648; goto f15;
	tr585: cs = 648; goto f27;
	tr608: cs = 648; goto f30;
	tr515: cs = 649; goto f13;
	tr717: cs = 649; goto f36;
	tr539: cs = 650; goto f17;
	tr562: cs = 651; goto f13;
	tr569: cs = 652; goto f26;
	tr576: cs = 653; goto f13;
	tr718: cs = 653; goto f40;
	tr615: cs = 654; goto f13;

f31:
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f16:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
	goto _again;
f11:
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f25:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
	goto _again;
f24:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
	goto _again;
f7:
#line 144 "indexer.rl"
	{
     currenttoken.clear();  
}
	goto _again;
f8:
#line 148 "indexer.rl"
	{
     currenttoken.push_back((*p));
}
	goto _again;
f18:
#line 202 "indexer.rl"
	{
     char *endptr;   // ignore  
     int year=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_year(year);
}
	goto _again;
f19:
#line 209 "indexer.rl"
	{
     char *endptr;   // ignore  
     int month=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";                       
     world.set_current_ts_month (month);
}
	goto _again;
f20:
#line 216 "indexer.rl"
	{
     char *endptr;   // ignore  
     int day=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_day (day);
}
	goto _again;
f21:
#line 223 "indexer.rl"
	{
     char *endptr;   // ignore  
     int hour=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_hour (hour);
}
	goto _again;
f22:
#line 230 "indexer.rl"
	{
     char *endptr;   // ignore  
     int minute=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_minute (minute);
}
	goto _again;
f23:
#line 237 "indexer.rl"
	{
     char *endptr;   // ignore  
     int second=strtol(currenttoken.c_str(), &endptr, 10);
     currenttoken="";
     world.set_current_ts_second (second);
}
	goto _again;
f29:
#line 267 "indexer.rl"
	{
     world.set_current_vis(1);
}
	goto _again;
f28:
#line 270 "indexer.rl"
	{
     world.set_current_vis(0);
}
	goto _again;
f13:
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f33:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f37:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f32:
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f35:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f39:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f34:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f38:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	goto _again;
f0:
#line 120 "indexer.rl"
	{
//		cerr << "end element " << endl;
// removed this...		world.finish_current_object();
                }
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f12:
#line 155 "indexer.rl"
	{
     char *endptr;   // ignore  
//     cerr << "currenttoken" << currenttoken << endl;
     world.set_current_id(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f10:
#line 169 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_current_cs(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f27:
#line 180 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "Version " << currenttoken << endl;
     world.set_current_ver(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f26:
#line 191 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_uid(strtol(currenttoken.c_str(), &endptr, 10));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f30:
#line 279 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "user " << currenttoken << endl;
     world.set_current_user(currenttoken.c_str());
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f9:
#line 290 "indexer.rl"
	{
     char *endptr;   // ignore
     cerr << "action " << currenttoken << endl;
     world.set_action(currenttoken.c_str());
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f40:
#line 301 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_val(currenttoken.c_str());
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f36:
#line 307 "indexer.rl"
	{
     char *endptr;   // ignore
     world.set_tag_key(currenttoken.c_str());
     currenttoken="";
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f14:
#line 329 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lat" << currenttoken << endl;
     world.set_current_lat(strtod(currenttoken.c_str(), &endptr));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f15:
#line 339 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "lon" << currenttoken << endl;
     world.set_current_lon(strtod(currenttoken.c_str(), &endptr));
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f17:
#line 350 "indexer.rl"
	{
     char *endptr;   // ignore
//     cerr << "way node ref " << currenttoken << endl;
     world.set_way_node_ref(strtol(currenttoken.c_str(), &endptr,10));
     currenttoken ="";
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f41:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f43:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f42:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	goto _again;
f3:
#line 60 "indexer.rl"
	{
       world.set_current_element_type_node();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f6:
#line 66 "indexer.rl"
	{
       world.set_current_element_type_way();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f4:
#line 72 "indexer.rl"
	{
       world.set_current_element_type_rel();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f5:
#line 78 "indexer.rl"
	{
       world.set_current_element_type_tag();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f2:
#line 84 "indexer.rl"
	{
       world.set_current_element_type_nd();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
	{ res = 1;      }
	goto _again;
f1:
#line 89 "indexer.rl"
	{
       world.set_current_element_type_member();
       }
#line 136 "indexer.rl"
	{
       // record the start of a type of object
//       cout << "Record Start CS" << cs << endl;     
       world.record_start_position();
}
#line 416 "indexer.rl"
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
	case 32:
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 17:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
	break;
	case 12:
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
	break;
	case 26:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
	break;
	case 25:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
	break;
	case 34:
#line 31 "indexer.rl"
	{
       cerr <<"an error has occured node"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 12;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 33:
#line 38 "indexer.rl"
	{
       cerr <<"an error has occured attr"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 13;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 36:
#line 45 "indexer.rl"
	{
       cerr <<"an error has occured attr uid"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 131;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
	case 35:
#line 52 "indexer.rl"
	{
       cerr <<"an error has occured attr ts"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 132;
}
#line 24 "indexer.rl"
	{
       cerr <<"an error has occured starter"  << endl;            
       cout << "CS:" << (_ps) << endl;     
       cout << "str:\'" << p << "\'" <<endl;     
       res = 11;
}
	break;
#line 5114 "indexer.c"
	}
	}

	_out: {}
	}

#line 434 "indexer.rl"
  return res;
}

