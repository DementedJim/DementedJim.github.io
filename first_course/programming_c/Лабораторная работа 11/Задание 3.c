#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
char *locale = setlocale(LC_ALL, "");
int abc[5], *uk=&abc[0]; // ���������� uk �������� ����� ������� �������� �������
printf("������� 5 ��������� (����� ������): ");
scanf("%d%d%d%d%d",&*uk,&*(uk+1),uk+2,uk+3,uk+4);

printf("��������� ����� ��������� ������� : ");
printf("%d %d %d %d %d\n",*uk,*(uk+1),*(uk+2),*(uk+3),*(uk+4));
getch();
return 0;
}
