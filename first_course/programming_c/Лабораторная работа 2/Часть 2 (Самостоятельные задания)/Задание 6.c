#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int n;
	printf("������� n: "); scanf("%d", &n);
	printf("����� ���� ������������ ����� n: %d", n%10+n/10);
	getch();
} 
