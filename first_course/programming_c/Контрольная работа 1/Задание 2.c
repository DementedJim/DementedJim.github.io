#include<stdio.h>
#include<locale.h>


void main() {
	char *locale = setlocale(LC_ALL, "");
	int a, b;
	printf("������� ����� : "); scanf ("%d",&a);
	printf("������� ����� ���� : "); scanf ("%d",&b);
	//if (a)
	printf("%d",(a >> b) & 1);
	getch();
}
