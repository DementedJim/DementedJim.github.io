#include<stdio.h>
#include<conio.h>
#define M 2 //��������� �������� ���������
int main()
{
int a[M][M]={{0,1},{2,3}}; // ����� ��� ������? ��� ��������� ������
int i;
for (i=0;i<M;i++)
printf("a[0][%d]=%d a[1][%d]=%d\n",i, a[0][i], i, a[1][i] ); //�������� ��������
printf("\n");
getch();
return 0;
}
