/* Демонстрация нахождения среднего арифметического */
/* элементов вещественного массива */
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 4
/* ——- */
int main()
{
char*locale = setlocale(LC_ALL, ""); 
float abc[N], /* Исходный вещественный массив */
S=0; /* Среднее арифметическое элементов массива */
int i; /* Параметр цикла */
for (i=0;i<N;i++)
{
printf("Введите элемент массива: ");
scanf("%f",abc+i);
}
for (i=0;i<N;i++)
S=abc[i]+S;
printf("Результат: %f\n",S/N);
getch();
return 0;
}
