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
	printf("������� k: "); scanf("%d", &k);
	printf("������� c: "); scanf("%d", &b);
	for (i;i<k;i++) {
		printf("\n��������� ����� �%d: %.3f;\n", i+1, funct(a, b-1));
	}
	getch();
}


