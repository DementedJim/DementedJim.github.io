#include<stdio.h>
#include<locale.h>

 float Stepen (float x, int n) {
    if(n == 0) return 1;
    if(n < 0) return Stepen (1/x, -n);
    return x * Stepen (x, n - 1);
 }

void main() {
	char *locale = setlocale(LC_ALL, "");
	int k;
	float a;
	printf("Введите значения k и a через пробел: "); scanf("%d, %f", &k, &a);
	printf("Ответ: %f", Stepen(2.7, k)+Stepen((a+1), -5));	
	getch();
}

