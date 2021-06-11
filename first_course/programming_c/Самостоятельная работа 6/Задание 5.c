#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a;
	printf("Введите число: "); scanf("%d", &a);
	if((a>>sizeof(int)*8-1)==0) {
		printf("Число положительное\n");
	}
	else {
		printf("Число отрицательное\n");
	}
	getch();
}
