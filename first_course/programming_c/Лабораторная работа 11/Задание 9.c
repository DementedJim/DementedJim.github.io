#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
char*locale = setlocale(LC_ALL, ""); 
char abc[100];
int i;
printf("������� ������: "); scanf("%s",abc); //�������� ��������

/* ������, ��� ������ ������������� �������� '\0' */
printf("��������� : ");
for (i=0;*(abc+i)!='\0';i++) // ��� �������� *(abc+i)!='\0'?
if (*(abc+i)=='#') //�������� ��������
printf("\n");
else printf("%c",*(abc+i));//�������� ��������
printf("\n");
getch();
}
