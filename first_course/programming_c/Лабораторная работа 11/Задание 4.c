#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 5

int *increm(int *pa) //��������� ����������� ��������
{
int i;
for (i=0;i<N;i++)
(*(pa+i))++; // ��� ���������� � ���������� �������? ������������� �� �������
return pa;
}
int main()
{
char *locale = setlocale(LC_ALL, "");
int i, score[N]; // ���������� i ��� ����� � ������ score, ��������� �� N ���������
int *pscore; // ��������� pscore �������������� ����
/* ���� ��������� ������� */
printf("������� %d ����� ����� : ",N);
pscore=&score[0];
for (i=0;i<N;i++)
scanf("%d",&(*(pscore+i)));
/* �������� ������������ ����� ��������� ������� */
printf("������� ��������: ");
for (i=0;i<N;i++)
printf("%d ",*(pscore+i));
printf("\n");
pscore=increm(pscore);
printf("���������� ������ �������: ");
for (i=0;i<N;i++)
printf("%d ",score[i]); // �������� ��������
printf("\n");
getch();
return 0;
}
