#include <conio.h>
#include <conio.h>
#include <stdio.h>
void main() {
int length;
char *p1, *p2;
char tmp;
float a = 5.0f;
float b = 3.0f;
printf("a = %.3f\n", a);	//����� ���������� � 3 ������� ����� �������
printf("b = %.3f\n", b);	//����� ���������� � 3 ������� ����� �������
p1 = (char*) &a;	//���������� ������ ���������� � ���� char
p2 = (char*) &b;	//���������� ������ ���������� � ���� char
length = sizeof(float);	//����. �������� float
while (length--) {	//����, ���������� �������� ������� length. �������� ������ �� ����� �������� length ������ 0
tmp = *p1;
*p1 = *p2;	
*p2 = tmp;	//��� � ��� ������ ���� ��������� "�����" �������� ���������� p1 � p2
p1++; //������� �� ��������� �������� ������
p2++;	//������� �� ��������� �������� ������
}
printf("a = %.3f\n", a);
printf("b = %.3f\n", b);
getch();
}
