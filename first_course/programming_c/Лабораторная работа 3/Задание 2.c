#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  a, b;
	printf("������� �������������� �����: "); scanf("%d", &a);
	if (a/1000==a%10 && (a/100)%10==(a/10)%10) {
	  printf ("����� �������� �����������");
	}  
	else {
	  printf("����� �� �������� �����������");	
	}
	getch();
}

	


