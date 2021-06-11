#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float  y, x;
	printf("¬ведите x\n"); scanf("%f",&x);
	y=-2*sqrt(x*x+(4*x*x)/3)-pow(cos(x),4)/x;
	printf("y=%f", y);
	getch();
}
