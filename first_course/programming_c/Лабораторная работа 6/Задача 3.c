 #include<stdio.h>
 #include<conio.h>
 #include <locale.h>
 void main()
 {
 char *locale = setlocale(LC_ALL, "");
 unsigned int n;
 printf("������� ����������� �����: "); scanf("%u",&n);
 if (n&0x0001)	
 printf("����� %u �������� ��������.\n",n);
 else printf("����� %u �������� ������.\n",n);
 getch(); /*��������� �������� ����� � ��������� � ���� ��������� �, ���� ��������� ��� � ����� ����� ����� 1, �� ��� ����� �������, ���� 0, �� ����� */
 }
