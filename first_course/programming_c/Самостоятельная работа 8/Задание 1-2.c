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
	int i=0, a, k, b;
	printf("������� k: "); scanf("%d", &k);
	printf("������� a: "); scanf("%d", &a);
	printf("������� b: "); scanf("%d", &b);
	for (i;i<k;i++) {
		printf("\n��������� ����� �%d: %d;\n", i+1, funct(a, b));
	}
	getch();
}


