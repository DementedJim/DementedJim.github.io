#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float  a, b;
	printf("¬ведите через пробел два числа: "); scanf("%f%f", &a, &b);
	if (a>b) {
	  printf ("%f", a);
	}  
	else {
	  printf("%f", b);	
	}
	getch();
}

	


