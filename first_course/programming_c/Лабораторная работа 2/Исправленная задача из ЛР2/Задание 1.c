#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");	//��� ���� ������ ��������� ������������ �����������.
	int  a, b, c, d;
	printf("������� ����� ������ ������� ��������������: "); scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("�������� ��������������= %d\n", a+b+c+d);
	printf("������� ��������= %d",(a+b+c+d)*(a+b+c+d));
	getch();
}

	


