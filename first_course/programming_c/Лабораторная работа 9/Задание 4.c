#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i, *p, j, *q;
p = &i; q = &p;	//���������� ����������� ������ ���������� i � p
j = *p = 1; //������������ ����������� j=i=1 
q = p-1; //����������� ������� ����� ����������, ������� ����� ����� ������� ���������� i
*p += 1; //����������� i �������� ����������, ����� ������� ����� ����� i
i = *++q + *p; //����������� i �������� ����������, ����� ������� ����� ����� i+1
q -= 1; //����������� q ������� ������, ������� ��������� ����� q
i = *q ++ + *q; //����������� ���������� 
printf("i=%d, j=%d, *p=%d, *q=%d \n", i, j, *p, *q); //���
getch();
}
/*#include <stdio.h>
void main() {
int i, *p, j, *q;
p = &i; q = &p; //��������� ����������� �������� ������� ���������� i � p
j = *p = 1;//������������ ���������� i=1 � j=i=1
q = p-1;//������������ ��������� q ����� ���������� ����� ���������� i
*p += 1;//������������ i �������� i+1
i = *++q + *p;//������������ i �������� ��������� 
q -= 1;//����������� q �������� ������, 
i = *q++ + *q;
printf("i=%d, j=%d, *p=%d, *q=%d \n", i, j, *p, *q);
getch();
}*/
