#include<stdio.h> 
#include<locale.h> 
#include<conio.h> 
int main() 
{ 
char*locale = setlocale(LC_ALL, ""); 
int ns[] = {4,3,2,1}; // Инициализация массива ns. Значения массива: 4,3,2,1 
int *pr = ns; // Переменная (указатель) pr содержит адрес первого элемента массива ns 
printf("Перемещение по массиву ns с помощью указателя pr \n"); 
printf("(%u)=%d\n",ns,*ns); 
printf("(%u)=%d\n",pr++,*++pr); 
printf("(%u)=%d\n",pr++,*++pr); // Заполните пропуск 
printf("(%u)=%d\n\n",pr,*++pr); // Заполните пропуск 
getch(); 
return 0; 
}

