#include<stdio.h>
#include<locale.h>
#include<math.h>

float funct(int b) {
	int i=0;
	float a;
	a=sqrt(0.5);
	if (b>=1) { 
		for (i; i<b; i++) {
		a=a*sqrt(0.5+0.5*a);
		}
	}
	return a;
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	int k;
	float b;
	printf ("Сколько раз будем умножать? "); scanf("%d", &k);
	printf ("Ответ: %f", funct(k));
	getch();	
}

