#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a=123, b=456, c=789;
	printf("���� �����: %d, %d, %d\n",a, b, c);
	if (a%2==0 || b%2==0 || c%2==0) {
		printf ("���� �� ���� �� ���� ����� �������� ������");
	}
	else {
		printf ("�� ���� �� ������ ����� �� �������� ������");
	}
	getch();
}
