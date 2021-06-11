#include<stdio.h>
#include<locale.h>
#include<math.h>

int factorial( int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

float s(float m) {
	int i=0;
	float r=0;
    for (i;i<m;i++) {
		r=r+((pow((-1),i)*pow(m,(2*i+1)))/(factorial(2*i+1)));
    	return r;
	}
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x;
	printf("¬ведите x"); scanf("%f", &x);
	printf("sin(%f)=%f",x, s(x));	
}
