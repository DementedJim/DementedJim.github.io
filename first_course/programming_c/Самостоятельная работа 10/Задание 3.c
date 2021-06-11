#include<stdio.h>
#include<locale.h>
#include<math.h>

long int factorial(long int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
void main() {
	char *locale = setlocale(LC_ALL, "");
	long int n;
    printf("¬ведите n: "); scanf("%d", &n);
    printf("2n!= %ld", 2*factorial(n));
    printf("\n(2n)!= %ld", factorial(2*n));
    getch();
}

