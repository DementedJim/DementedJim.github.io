#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float  a, b;
	printf("������� ����� ������ ��� �����: "); scanf("%f%f", &a, &b);
	if (a>b) {
	  printf ("%f", a);
	}  
	else {
	  printf("%f", b);	
	}
	getch();
}

	


