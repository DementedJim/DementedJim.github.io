#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a=5,b=6,c=7;
	printf("Даны числа: %d, %d, %d\n",a, b, c);
	if ((a<b+c) && (b<a+c) && (c<a+b)) {
		printf ("Из них можно построить треугольник");
	}
	else {
		printf ("Из них нельзя построить треугольник");
	}
	getch();
}
