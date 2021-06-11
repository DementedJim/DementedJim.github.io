#include<stdio.h>
#include<locale.h>
#include<math.h>

long int factorial(long int t) {
    if (t == 0 || t == 1) return 1;
    return t * factorial(t - 1);
}

void main() {
	char *locale = setlocale(LC_ALL, ""); 
	int i=1;
	for (i;i<=10;i++) { 
		printf("%ld!=%ld\n",i,factorial(i)); 
	} 
	getch(); 	
}

