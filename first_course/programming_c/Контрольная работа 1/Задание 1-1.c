#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 
int factorial( int m) {
    if (m == 0 || m == 1) return 1;
    return m * factorial(m - 1);
}

double sin(double x) {
    double n = x, sum = 0;
    int i = 1;
    do {
        sum += n;
        n *= -1.0 * x * x / factorial (2*i+1);
        ++i;
    } while ((n > 0.0 ? n : -n) > 1e-9);
    return sum;
}

void main () { 
	char *locale = setlocale(LC_ALL, "");
	double a;
    	printf ("¬ведите x: "); scanf("%lf",&a);
	printf("sin x = %lf\n", sin(a));
    getch();
}

