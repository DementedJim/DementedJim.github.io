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
	double p;
    printf("¬ведите натуральное число n: "); scanf("%d", &n);
    if (n>=5) {
    	p=pow((factorial(n)+4), 3);
    	printf("P = %.0f", p);
	}
	else {
		p=sin(factorial(n));
		printf("\nP = %f", p);
	}
    getch();
}

