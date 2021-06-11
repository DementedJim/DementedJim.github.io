#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 4 // Пропишите недостающую строчку кода
int main()
{
char *locale = setlocale(LC_ALL, "");
int i;
char line[]={'Д','о','м','!'}; // Определите тип массива
printf("Получили слово: ");
for (i=0;i<N;i++)
putchar(line[i]);
getch();
return 0;
}
