#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int funct(long int t) {
	srand(t);
	int c;
	c=(rand() % 6 + 1)+(rand() % 6 + 1)+(rand() % 6 + 1);
    return c;
} 

void main() {
	char *locale = setlocale(LC_ALL, ""); 
	int i=0, a, b;
	srand (time(NULL));
	a=funct(rand());
	printf ("Сумма очков первого игрока: %d\n", a);
	b=funct(rand());
	printf ("Сумма очков второго игрока: %d\n", b);
	if (a>b) {
		printf("Первый игрок получил больше очков");
	}
	else {
		if (b>a) {
		printf("Второй игрок получил больше очков");
		}
		else {
			printf("Оба игрока получили одинаковое количество очков");
		}
	}
	getch();
}


