#include<stdio.h>
#include<math.h> 
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x,a,b,k;
	printf("¬ведите x: "); scanf("%f", &x);
	a=x-1;
	b=x+1;
	k=b+2*x;
	if (x<=0) {
		printf("y(x)=%f",5*a-a*a*x);
	}
	else {
		printf("y(x)=%f",7*k*b*x-20-k/x);
	}
	getch();
}
