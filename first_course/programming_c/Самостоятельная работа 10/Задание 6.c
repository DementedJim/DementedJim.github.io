#include<stdio.h>
#include<locale.h>

 float funct (int n, int k) {		
	if (n<k) return sqrt(1+n*funct(n+1,k));
 }

void main() {
	char *locale = setlocale(LC_ALL, "");
	int k;
	printf("������� ���������� �������� k:  "); scanf("%d", &k);
	if (k<=0) printf ("�������� ����");
	else printf("�����: %f", funct(2,k));
	getch();
}

