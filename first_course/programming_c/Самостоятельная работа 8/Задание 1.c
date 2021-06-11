#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int funct(int min, int max) {
	int c=0;
	c=rand() % (max - min + 1) + min;
    return c;
} 

void main(){
	char *locale = setlocale(LC_ALL, ""); 
	int i=0, l=-10, k, x=10;
	printf("Введите k: "); scanf("%d", &k);
	for (i;i<k;i++) {
		printf("\nСлучайное число №%d: %d;\n", i+1, funct(l, x));
	}
	getch();
return 0;
}


