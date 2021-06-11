#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int s1=3,s2=2;
	printf("Даны площади квадрата и круга: %d, %d\n",s1,s2);
	if (s1*sqrt(2)==sqrt(s2/M_PI)) {	//Диагональ квадрата == диаметр круга
		printf ("Квадрат поместится в круг");
	}
	else {
		printf ("Квадрат не поместится в круг");
	}
	getch();
}
