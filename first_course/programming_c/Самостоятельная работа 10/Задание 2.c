#include<stdio.h>
#include<locale.h>
#include<math.h>

long int factorial(long int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

long int funct(long int n) {
	return ((factorial(n)+4)*(factorial(n)+4));
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	long int n;
	printf("¬ведите n: "); scanf("%ld", &n);
	if (n<5) {
		printf("P= %ld", funct(n));
	}
	else {
		printf("P= %ld", factorial(n));
	}
    getch();
}

