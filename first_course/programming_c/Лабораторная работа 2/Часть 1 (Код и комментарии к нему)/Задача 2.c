#include <stdio.h>
void main() {
	int integer=5, n=-8;
	char character='5';
	printf("character=%d\n", character);	//����� ���� ���������� character  ���� char � ��������� ASCII � ������� ������� �� ��������� ������
	printf("character=%c\n", character);	//����� ���������� character ���� char � ������� ������� �� ��������� ������
	printf("integer=%d\n", integer);	//����� ����� n � ������� ������� �� ��������� ������
	printf("(integer=53)=%c\n", integer=53);	//����� �������, �������� ������������� ���, �������� �������� ��������� ���������� integer
	printf("('5'>5)=%d\n", '5'>5);	//����� ������ � �������� � "����������" ��������� ���� '5' � ��������� ASCII � 5
	printf("n=%o\n\n", n);	//����� �������� ���������� n � ������������ �� � ������� ������� �� ��� ������ ����
	getch();
}

