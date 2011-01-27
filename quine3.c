/* Silvio Cesare silvio.cesare@gmail.com */
#include <stdio.h>
const char s[]=
	"/* Silvio Cesare silvio.cesare@gmail.com */B"
	"#include <stdio.h>B"
	"const char s[]=B"
	"AB"
	";B"
	"intB"
	"main()B"
	"{B"
	"	const char *p;B"
	"	for (p = s; *p; p++) {B"
	"		if (*p == 66) {B"
	"			putchar(10);B"
	"		} else if (*p == 68) {B"
	"		} else if (*p == 65) {B"
	"			const char *q;B"
	"B"
	"			putchar(9);B"
	"			putchar(34);B"
	"			for (q = s; *q && *q != 68; q++) {B"
	"				if (*q == 66) {B"
	"					putchar(66);B"
	"					putchar(34);B"
	"					putchar(10);B"
	"					putchar(9);B"
	"					putchar(34);B"
	"				} else {B"
	"					putchar(*q);B"
	"				}B"
	"			}B"
	"			putchar(68);B"
	"			putchar(34);B"
	"			putchar(10);B"
	"		} else {B"
	"			putchar(*p);B"
	"		}B"
	"	}B"
	"	return 0;B"
	"}B"
	"D"

;
int
main()
{
	const char *p;
	for (p = s; *p; p++) {
		if (*p == 66) {
			putchar(10);
		} else if (*p == 68) {
		} else if (*p == 65) {
			const char *q;

			putchar(9);
			putchar(34);
			for (q = s; *q && *q != 68; q++) {
				if (*q == 66) {
					putchar(66);
					putchar(34);
					putchar(10);
					putchar(9);
					putchar(34);
				} else {
					putchar(*q);
				}
			}
			putchar(68);
			putchar(34);
			putchar(10);
		} else {
			putchar(*p);
		}
	}
	return 0;
}
