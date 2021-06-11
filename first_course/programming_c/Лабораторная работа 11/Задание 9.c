#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
char*locale = setlocale(LC_ALL, ""); 
char abc[100];
int i;
printf("Введите строку: "); scanf("%s",abc); //допишите оператор

/* Учтите, что строка заканчивается символом '\0' */
printf("Результат : ");
for (i=0;*(abc+i)!='\0';i++) // Что означает *(abc+i)!='\0'?
if (*(abc+i)=='#') //допишите оператор
printf("\n");
else printf("%c",*(abc+i));//допишите оператор
printf("\n");
getch();
}
