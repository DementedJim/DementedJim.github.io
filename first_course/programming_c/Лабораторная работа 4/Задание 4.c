#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	double y,x,a;
	printf("¬ведите x и a через пробел\n"); scanf("%lf%lf", &x, &a);
	y=(-1/sqrt(x*x-a*a))-2*a*a/(3*pow(sqrt(x*x-a*a),3));
	printf("%lf",y);
	getch();
}
