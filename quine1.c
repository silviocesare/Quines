/* Silvio Cesare silvio.cesare@gmail.com */ char s[] = "/* Silvio Cesare silvio.cesare@gmail.com */ char s[] = A; int main(){char *p; for (p = s; *p; p++) if (*p != 65) putchar(*p); else { char *q;putchar(34);for (q=s; *q; q++) putchar(*q); putchar(34); } return 0; }";

int main()
{
	char *p;
	for (p = s; *p; p++)
		if (*p != 65)
			putchar(*p);
		else {
			char *q;
			putchar(34);
			for (q = s; *q; q++) putchar(*q);
			putchar(34);
		}
	return 0;
}
