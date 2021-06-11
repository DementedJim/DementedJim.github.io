 #include<stdio.h>
 #include<conio.h>
 #include <locale.h>
 void main()
 {
 char *locale = setlocale(LC_ALL, "");
 unsigned int n;
 printf("Введите натуральное число: "); scanf("%u",&n);
 if (n&0x0001)	
 printf("Число %u является нечетным.\n",n);
 else printf("Число %u является четным.\n",n);
 getch(); /*Программа получает число и применяет к нему побитовое И, если последний бит в числе будет равен 1, то это число нечетно, если 0, то четно */
 }
