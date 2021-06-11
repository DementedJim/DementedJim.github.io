#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float a=5, b=3, c=7;
	printf("Косинус - отношение прилежащего катета к гипотенузе: %f", b/c);
	getch();
}
