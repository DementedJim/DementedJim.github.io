#include <stdio.h>
void main() {
	int integer=5, n=-8;
	char character='5';
	printf("character=%d\n", character);	//¬ывод кода переменной character  типа char в кодировке ASCII и перевод курсора на следующую строку
	printf("character=%c\n", character);	//¬ывод переменной character типа char и перевод курсора на следующую строку
	printf("integer=%d\n", integer);	//¬ывод числа n и перевод курсора на следующую строку
	printf("(integer=53)=%c\n", integer=53);	//¬ывод символа, которому соответствует код, значение которого присвоили переменной integer
	printf("('5'>5)=%d\n", '5'>5);	//¬ывод текста в кавычках и "истинности" сравнени€ кода '5' в кодировке ASCII с 5
	printf("n=%o\n\n", n);	//¬ывод значени€ переменной n в восьмеричной сс и перевод курсора на две строки вниз
	getch();
}

