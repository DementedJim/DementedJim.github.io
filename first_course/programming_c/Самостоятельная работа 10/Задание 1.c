#include<stdio.h>
#include<locale.h>

int nod (int a, int b) {
	if (a % b == 0) return b;		
	else return nod(a, a % b);
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	int a,b;
	printf("������� ����� ������ ��� ����� ��� ���������� ��� (������� ����������):  "); scanf("%d%d", &a, &b);
	printf("��� = %d", nod(a,b));
	getch();
}

