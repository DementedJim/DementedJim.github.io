#include<stdio.h>
#include<locale.h>
#include<math.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x;
	printf("¬ведите х: "); scanf("%f", &x);
	if (x<0) {
		printf("f(x)=%f", sin(x));
	}
	else {
		if (x<1) {
			printf("f(x)=%f", x*x);
		}
		else {
			if (x<2) {
				printf("f(x)=%f", 2-x);
			}
			else {
				printf("f(x)=0");
			}
		}
	}
	getch();
}
