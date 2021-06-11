#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	double  x,y;
	printf("¬ведите x и y через пробел\n"); scanf("%lf%lf", &x, &y);
	printf("u=%lf", (1-sin(x+y)*sin(x+y))/(2+fabs(x-(2*x*x/(1+fabs(sin(x+y)))))));
	getch();
}

