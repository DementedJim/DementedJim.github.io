#include<stdio.h>
#include<locale.h>

int funct(int t) {
	if (t == 0) return 0; //����  � ����������� ������ �� �������
	printf ("%d\n",t);
	funct (t-1);	
} 

void main() {
	char *locale = setlocale(LC_ALL, ""); 
	int n;
	printf("������� ����������� ����� n: "); scanf("%d", &n);
	funct(n);
	getch();
}


