#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 5 // Пропишите недостающую строчку кода
int main()
{
char *locale = setlocale(LC_ALL, "");
int i,nd [N] = {4, 3, 5 ,8 , 0}; // Заполните пропуск
printf("Инициализированный массив:\n");
for (i=0;i<N;i++) // Заполните пропуск
printf("nd[%d] = %d\n", i, nd[i]); // Заполните пропуск
printf("\n");
getch();
return 0;
}
