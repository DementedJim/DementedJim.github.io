#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define M 7
int main()
{
char *locale = setlocale(LC_ALL, "");
int score[M+1]; // ���������� �������, ����������� 8 ��������� ���� integer
int i; // ��� ���� ������ ������ ����������? ������ �������� �����/������ ��������� �������
printf("������� %d ����� ����� : ",M+1);
for (i=0;i<=M;i++)
scanf("%d",&score[i]); // ��� �������� ������ &score[i] ? ���� �������� �������
printf("������� ��������� ��������: ");
//��������� ��� ������ ��������� ������� (��� ������� ����)
for (i=0;i<M+1;i++)
printf("%d ",score[i]);
printf("\n");
getch();
return 0;
}
