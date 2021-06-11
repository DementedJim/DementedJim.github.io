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
	printf("¬ведите натуральное число k:  "); scanf("%d", &k);
	printf("ќтвет: %f", Stepen(2, k)+Stepen(k, 3));	
	getch();
}

