#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int funct(int min, int max) {
	int c=0;
	srand(time(NULL));
	c=rand() % (max - min + 1) + min;
    return c;
} 

void main() {
	char *locale = setlocale(LC_ALL, "");
	printf("Карта: ");
	switch (funct(1,9)) {
		case 1:
            printf("Шестерка ");
            break;
        case 2:
            printf("Семерка ");
            break;
        case 3:
            printf("Восьмерка ");
            break;
        case 4:
            printf("Девятка ");
            break;
        case 5:
            printf("Десятка ");
            break;
        case 6:
            printf("Валет ");
            break;
		case 7:
            printf("Дама ");
            break;
		case 8:
            printf("Король ");
            break;
		case 9:
            printf("Туз ");
            break;
        default:
            printf("Неверный ввод\n");
	}    
	switch (funct(1,4)) {
		case 1:
            printf("пик");
            break;
        case 2:
            printf("треф");
            break;
        case 3:
            printf("бубны");
            break;
        case 4:
            printf("червей");
            break;  
        default:
            printf("Неверный ввод\n");
	}
	
	getch();
}
