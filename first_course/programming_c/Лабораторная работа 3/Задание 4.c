#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  a;
	printf("������� �����: "); scanf("%d", &a);
	if (a%2!=0 && a/10<10){
	  printf ("����� %d �������� ���������� � ��������", a);
	}  
	else {
	  printf("����� %d �� �������� ���������� � ��������", a);	
	}
	getch();
}

	


