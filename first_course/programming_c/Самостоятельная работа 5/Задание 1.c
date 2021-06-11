#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  y;
	for (int x=-10; x<=10; x=x+2) {
		y=2*x+5;
		printf("x= %d, y= %d\n", x, y);
	}
	getch();
}
