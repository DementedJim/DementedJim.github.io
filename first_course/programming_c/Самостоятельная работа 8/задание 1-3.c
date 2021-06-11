#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float funct(int min, int max) {
	float c;
	c=(rand() % (max - min + 1) + min)+0.001*(rand()%1000);
    return c;
} 

void main(){
	char *locale = setlocale(LC_ALL, ""); 
	int i=0, a=0, k, b;
	printf("Введите k: "); scanf("%d", &k);
	printf("Введите c: "); scanf("%d", &b);
	for (i;i<k;i++) {
		printf("\nСлучайное число №%d: %.3f;\n", i+1, funct(a, b-1));
	}
	getch();
}


