#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 5 // ��������� ����������� ������� ����
int main()
{
char *locale = setlocale(LC_ALL, "");
int i,nd [N] = {4, 3, 5 ,8 , 0}; // ��������� �������
printf("������������������ ������:\n");
for (i=0;i<N;i++) // ��������� �������
printf("nd[%d] = %d\n", i, nd[i]); // ��������� �������
printf("\n");
getch();
return 0;
}
