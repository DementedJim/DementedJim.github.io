#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x;
	printf("¬ведите x: "); scanf("%f", &x);
	if (x<3) {
	printf("y(x)=%f",x);
	}
	else {
		if (x>=3 && x<=11) {
			printf("y(x)=%f", x*x*x-x);	
		}
		else printf("y(x)=%f", 1/x);
	}
	getch();
}
