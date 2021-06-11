#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int n;
	printf("Введите n: "); scanf("%d", &n);
	printf("Последняя цифра числа n: %d", n%10);
	getch();
} 
