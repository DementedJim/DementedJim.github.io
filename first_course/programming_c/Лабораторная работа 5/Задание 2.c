#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x=0;
	while (1-x>=0.0001) {
		x+=0.01; printf("%f %f\n",x,sin(x));
	}
	getch();
}
