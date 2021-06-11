#include<stdio.h>
#include<locale.h>
#include<math.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int r=5, h=10;
	printf("Объем цилиндра= %f", M_PI*r*r*h);
	getch();
}
