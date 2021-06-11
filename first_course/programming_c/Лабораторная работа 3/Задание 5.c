#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a=123, b=456, c=789;
	printf("Даны числа: %d, %d, %d\n",a, b, c);
	if (a%2==0 || b%2==0 || c%2==0) {
		printf ("Хотя бы одно из этих чисел является четным");
	}
	else {
		printf ("Ни одно из данных чисел не является четным");
	}
	getch();
}
