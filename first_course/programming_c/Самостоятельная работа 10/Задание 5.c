#include<stdio.h>
#include<locale.h>

int funct (int a) {		
	if (a==0) return 0;
	printf ("%d", a%10);
	funct(a/10);
 }

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a;
	printf("������� ����������� �����:  "); scanf("%d", &a);
	printf("�������� ������ ������������ �����:  ");
	funct(a);
	getch();
}

