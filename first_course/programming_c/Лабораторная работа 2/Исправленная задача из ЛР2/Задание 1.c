#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");	//Без этой строки кириллица отображаются некорректно.
	int  a, b, c, d;
	printf("Введите через пробел стороны прямоугольника: "); scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("Периметр прямоугольника= %d\n", a+b+c+d);
	printf("Площадь квадрата= %d",(a+b+c+d)*(a+b+c+d));
	getch();
}

	


