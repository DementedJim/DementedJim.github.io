#include<stdio.h>
#include<conio.h>
#include <locale.h>

void more (char x) {
	if(x!='Q') {
		main();
	}
}
int main() {
char *locale = setlocale(LC_ALL, "");
char ch;
printf("Введите символ (Q - признак окончания): ");
scanf("%c",&ch);
fflush(stdin); /* Очистка буфера клавиатуры */
printf("Вы указали символ %c\n",ch);
more(ch);
getch();
return 0;
}

