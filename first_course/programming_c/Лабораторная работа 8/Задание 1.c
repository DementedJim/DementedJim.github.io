#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
char *locale = setlocale(LC_ALL, "");
double z1,z2;
printf("������� ����� z1 � z2: ");
scanf("%le %le",&z1,&z2);
printf(" ceil(%g)=%le\n",z1,ceil(z1)); /* ������� ceil ��������� ���������� � ���������� ��������� ����� �������� � ��������� �����,
�� ��� �������� ����� �� ������ ������ */

printf(" floor(%g)=%le\n",z1,floor(z1)); /* ������� floor ��������� ���������� ��������� �������� � ���������� ���������� ����� ��������,
 ������� �� ������, ��� �������� ��������*/

printf(" fmod(%g,%g)=%le\n",z1,z2,fmod(z1,z2)); /* ������� fmod ��������� ������� �� ������� � ���������� �������� � ��������� ������,
 ���������� ����� �� �������������� ������� ���������� z1 � z2*/

printf(" sin(%g)=%g\n",z1,sin(z1));
printf(" cos(%g)=%g\n",z1,cos(z1));
printf(" tan(%g)=%g\n",z1,tan(z1));
printf(" sinh(%g)=%g\n",z1,sinh(z1)); // ��������������� ����� �� z1
printf(" cosh(%g)=%g\n",z1,cosh(z1)); // ��������������� ������� �� z1
printf(" tanh(%g)=%g\n",z1,tanh(z1)); // ��������������� ������� �� z1
getch();
return 0;
}
