#include<stdio.h>
int main(void) {
	int data, month, year;
	char name[15], town[15];
	printf("��� ��� �����?"); scanf("%s", name);	//����� ������ ��-��� ������� � ���� �������� ���� string 
	printf("������� ����, ����� � ��� ������ ��������.\n");	//����� ������ ��-��� ������� � ������� ������� �� ������ ����
	printf("���� (�����): "); scanf("%d", &data);	//����� ������ ��-��� ������� � ���� ������ �����
	printf("����� (�����): "); scanf("%d", &month);	//����� ������ ��-��� ������� � ���� ������ �����
	printf("��� : "); scanf("%d", &year);	//����� ������ ��-��� ������� � ���� ������ �����
	printf("� ����� ������ ��������?"); scanf("%s", town);	//����� ������ ��-��� ������� � ���� �������� ���� string 
	printf("\n��� �� � ��� � ������ ���-���. � ������...\n ");	//������� ������� �� ������ ���� � ����� ������ ��-��� ������� � ������� ������� �� ������ ����
	printf("��� ����� %s. �� �������� � ������ %s (%d.%d.%d)\n", name,town, data, month, year);	//����� ������ ��-��� ������� � ����������� ���� string � ������ �������
	getch();
}

