/* ������������ ���������� �������� ��������������� */
/* ��������� ������������� ������� */
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 4
/* ��- */
int main()
{
char*locale = setlocale(LC_ALL, ""); 
float abc[N], /* �������� ������������ ������ */
S=0; /* ������� �������������� ��������� ������� */
int i; /* �������� ����� */
for (i=0;i<N;i++)
{
printf("������� ������� �������: ");
scanf("%f",abc+i);
}
for (i=0;i<N;i++)
S=abc[i]+S;
printf("���������: %f\n",S/N);
getch();
return 0;
}
