#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 4 // ��������� ����������� ������� ����
int main()
{
char *locale = setlocale(LC_ALL, "");
int i;
char line[]={'�','�','�','!'}; // ���������� ��� �������
printf("�������� �����: ");
for (i=0;i<N;i++)
putchar(line[i]);
getch();
return 0;
}
