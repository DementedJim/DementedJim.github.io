#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#include<locale.h>

void main() {	//����� ������ �������, � ����������� ��������� �������� ����� ������ ��������, ��-�� ���� ������ ����� ����������� ��� � �������� :C
	char *locale = setlocale(LC_ALL, "");
	bool P=0;
	float n;
	printf("������� n: "); scanf("%f", &n);
	if (n>=1) {
		P=1;
	}
	printf("P=%d", P);
	getch(0);
}
