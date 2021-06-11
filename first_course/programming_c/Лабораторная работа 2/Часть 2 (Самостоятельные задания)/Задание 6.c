#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int n;
	printf("¬ведите n: "); scanf("%d", &n);
	printf("—умма цифр двухзначного числа n: %d", n%10+n/10);
	getch();
} 
