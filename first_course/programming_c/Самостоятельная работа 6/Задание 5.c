#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a;
	printf("������� �����: "); scanf("%d", &a);
	if((a>>sizeof(int)*8-1)==0) {
		printf("����� �������������\n");
	}
	else {
		printf("����� �������������\n");
	}
	getch();
}
