#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define M 7
int main()
{
char *locale = setlocale(LC_ALL, "");
int score[M+1]; // Объявление массива, содержащего 8 элементов типа integer
int i; // Для чего вводим данную переменную? Вводим параметр цикла/индекс элементов массива
printf("Введите %d целых чисел : ",M+1);
for (i=0;i<=M;i++)
scanf("%d",&score[i]); // Что означает запись &score[i] ? Ввод элемента массива
printf("Введены следующие элементы: ");
//Пропишите код вывода элементов массива (две строчки кода)
for (i=0;i<M+1;i++)
printf("%d ",score[i]);
printf("\n");
getch();
return 0;
}
