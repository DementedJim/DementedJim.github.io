#include<stdio.h>
#include<conio.h>
#include <locale.h>
void main()
{
 char *locale = setlocale(LC_ALL, "");
 long int a; /* �������� ����������� �����:
 ���� a<255, �� ��� �������� ����� ��������� 4 ����� ������;
 ���� a<65535, �� ��� �������� ����� ��������� 4 ����� ������;
 ���� a<2147483647, �� ��� �������� ����� ��������� 4 ����� ������ */
 int n, i; // �������� �����
 printf("������� ����������� ����� : "); scanf("%lu",&a);
 n=(a>255)?(a>65535)?31:15:7; // ��� ������� ��������� �������� ��������� �������� ����������� ���������� ������
 printf("��� �������� �������������: ");
 for (i=n;i>=0;i--)
 {
 printf("%d",(a>>i)&0x1); // ��������� ��������� (a>>i)&0x1
 if (i%8==0) //���������, ��� ���� ������ ��� ��������. ������ �������� ����� ������ � ��� �������� �������������, � �� ����� ������ �����
 printf(" ");
 }
 printf("\n");
 getch();
}
