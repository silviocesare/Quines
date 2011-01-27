/* Silvio Cesare silvio.cesare@gmail.com */
#include <stdio.h>
char s[] = "/* Silvio Cesare silvio.cesare@gmail.com */B#include <stdio.h>Bchar s[] = AB; int main(){char *p; for (p = s; *p; p++) if (*p == 66) putchar(10); else if (*p != 65) putchar(*p); else { char *q;putchar(34);for (q=s; *q; q++) putchar(*q); putchar(34); } return 0; }B";

int main()
{
	char *p;
	for (p = s; *p; p++)
		if (*p == 66)
			putchar(10);
		else if (*p != 65)
			putchar(*p);
		else {
			char *q;
			putchar(34);
			for (q = s; *q; q++) putchar(*q);
			putchar(34);
		}
	return 0;
}
