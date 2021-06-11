#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int x;
	printf("¬ведите x: "); scanf("%d", &x);
	if (x>=-2) {
		printf("y(x)=%d", x-1);
	}
	else {
		printf("y(x)=%d",x*x+2);
	}
	getch();
}
