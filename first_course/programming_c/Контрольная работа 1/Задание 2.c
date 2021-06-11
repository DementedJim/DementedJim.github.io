#include<stdio.h>
#include<locale.h>


void main() {
	char *locale = setlocale(LC_ALL, "");
	int a, b;
	printf("¬ведите число : "); scanf ("%d",&a);
	printf("¬ведите номер бита : "); scanf ("%d",&b);
	//if (a)
	printf("%d",(a >> b) & 1);
	getch();
}
