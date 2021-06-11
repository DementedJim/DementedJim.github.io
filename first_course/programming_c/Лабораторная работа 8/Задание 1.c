#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
char *locale = setlocale(LC_ALL, "");
double z1,z2;
printf("Введите числа z1 и z2: ");
scanf("%le %le",&z1,&z2);
printf(" ceil(%g)=%le\n",z1,ceil(z1)); /* Функция ceil выполняет округление и возвращает ближайшее целое значение к заданному числу,
но это значение будет не меньше самого */

printf(" floor(%g)=%le\n",z1,floor(z1)); /* Функция floor выполняет округление заданного значения и возвращает наибольшее целое значение,
 которое не больше, чем заданное значение*/

printf(" fmod(%g,%g)=%le\n",z1,z2,fmod(z1,z2)); /* Функция fmod вычисляет остаток от деления и возвращает значение с плавающей точкой,
 оставшуюся часть от целочисленного деления параметров z1 и z2*/

printf(" sin(%g)=%g\n",z1,sin(z1));
printf(" cos(%g)=%g\n",z1,cos(z1));
printf(" tan(%g)=%g\n",z1,tan(z1));
printf(" sinh(%g)=%g\n",z1,sinh(z1)); // Гиперболический синус от z1
printf(" cosh(%g)=%g\n",z1,cosh(z1)); // Гиперболический косинус от z1
printf(" tanh(%g)=%g\n",z1,tanh(z1)); // Гиперболический тангенс от z1
getch();
return 0;
}
