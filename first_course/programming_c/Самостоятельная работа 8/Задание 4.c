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
	printf("�����: ");
	switch (funct(1,9)) {
		case 1:
            printf("�������� ");
            break;
        case 2:
            printf("������� ");
            break;
        case 3:
            printf("��������� ");
            break;
        case 4:
            printf("������� ");
            break;
        case 5:
            printf("������� ");
            break;
        case 6:
            printf("����� ");
            break;
		case 7:
            printf("���� ");
            break;
		case 8:
            printf("������ ");
            break;
		case 9:
            printf("��� ");
            break;
        default:
            printf("�������� ����\n");
	}    
	switch (funct(1,4)) {
		case 1:
            printf("���");
            break;
        case 2:
            printf("����");
            break;
        case 3:
            printf("�����");
            break;
        case 4:
            printf("������");
            break;  
        default:
            printf("�������� ����\n");
	}
	
	getch();
}
