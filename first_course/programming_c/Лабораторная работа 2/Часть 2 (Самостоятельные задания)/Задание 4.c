#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float t=3, v0=4, a=3;
	printf("Расстояние= %.1f",v0*t+ a*t*t/2);
	getch();
}

