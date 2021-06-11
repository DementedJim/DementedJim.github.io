#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float a,b,c,x,h;
	printf("¬ведите через пробел a,b,c,x\n"); scanf("%f%f%f%f", &a,&b,&c,&x);
	h=(-(x-a)/(pow(x*x+a*a, 1/3)))-(4*pow(pow(x*x+b*b,3),1/4))/(2+a+b+pow((x-c)*(x-c),1/3));
	printf ("h=%f", h);
	getch();
}
