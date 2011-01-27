/* Silvio Cesare silvio.cesare@gmail.com */
char s[]=
	"/* Silvio Cesare silvio.cesare@gmail.com */B"
	"char s[]=B"
	"AB"
	";B"
	"#define P(x)  putchar(x)B"
	"#define Q(x,y) P(x);P(y)B"
	"int main(){char *p;for(pB"
	"=s; *p; p++)if(*p==66)P(B"
	"10) ; else if(*p ==68){}B"
	"else if(*p==65){char *q;B"
	"Q(9,34);for(q=s;*q&&*q!=B"
	"68; q++){if(*q==66){Q(66B"
	",34);Q(10,9);P(34);}elseB"
	"P(*q);}Q(68,34);P(10); }B"
	"else P(*p) ; return 0; }B"
	"D"

;
#define P(x)  putchar(x)
#define Q(x,y) P(x);P(y)
int main(){char *p;for(p
=s; *p; p++)if(*p==66)P(
10) ; else if(*p ==68){}
else if(*p==65){char *q;
Q(9,34);for(q=s;*q&&*q!=
68; q++){if(*q==66){Q(66
,34);Q(10,9);P(34);}else
P(*q);}Q(68,34);P(10); }
else P(*p) ; return 0; }
