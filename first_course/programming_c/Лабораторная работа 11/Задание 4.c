#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 5

int *increm(int *pa) //заполните недостающее значение
{
int i;
for (i=0;i<N;i++)
(*(pa+i))++; // что происходит с элементами массива? увеличиваются на единицу
return pa;
}
int main()
{
char *locale = setlocale(LC_ALL, "");
int i, score[N]; // переменная i для цикла и массив score, состоящий из N элементов
int *pscore; // указатель pscore целочисленного типа
/* Ввод элементов массива */
printf("Введите %d целых чисел : ",N);
pscore=&score[0];
for (i=0;i<N;i++)
scanf("%d",&(*(pscore+i)));
/* Проверка правильности ввода элементов массива */
printf("Введены элементы: ");
for (i=0;i<N;i++)
printf("%d ",*(pscore+i));
printf("\n");
pscore=increm(pscore);
printf("Результаты работы функции: ");
for (i=0;i<N;i++)
printf("%d ",score[i]); // допишите оператор
printf("\n");
getch();
return 0;
}
