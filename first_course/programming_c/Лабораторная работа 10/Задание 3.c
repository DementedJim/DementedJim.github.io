#include<stdio.h>
#include<locale.h>

int funct(int t) {
	if (t == 0) return 0; //Ноль  к натуральным числам не относим
	printf ("%d\n",t);
	funct (t-1);	
} 

void main() {
	char *locale = setlocale(LC_ALL, ""); 
	int n;
	printf("Введите натуральное число n: "); scanf("%d", &n);
	funct(n);
	getch();
}


