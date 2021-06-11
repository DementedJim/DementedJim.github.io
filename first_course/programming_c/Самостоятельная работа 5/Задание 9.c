#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	printf ("Удвоенная сумма цифр равна их произведению в двузначных числах:\n");
	int i=10;
	for (i; i<100; i++) {
		if (2*(i%10+i/10) == (i%10)*(i/10)) {
			printf ("%d;\n", i);
		}
	}
	getch();
}

