#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	long int f1=1,f2=1,f;
	int m;
	printf("Введите m: "); scanf("%d", &m);
	while (f<=m) {
		f=f1+f2;
		f1=f2;
		f2=f;
		}
	printf("Первое число Фибоначчи после m: %d",f);
	getch();
}
