#include<stdio.h> 
#include<locale.h> 
#include<conio.h> 
int main() 
{ 
char*locale = setlocale(LC_ALL, ""); 
int ns[] = {4,3,2,1}; // ������������� ������� ns. �������� �������: 4,3,2,1 
int *pr = ns; // ���������� (���������) pr �������� ����� ������� �������� ������� ns 
printf("����������� �� ������� ns � ������� ��������� pr \n"); 
printf("(%u)=%d\n",ns,*ns); 
printf("(%u)=%d\n",pr++,*++pr); 
printf("(%u)=%d\n",pr++,*++pr); // ��������� ������� 
printf("(%u)=%d\n\n",pr,*++pr); // ��������� ������� 
getch(); 
return 0; 
}

