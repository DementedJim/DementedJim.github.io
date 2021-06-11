#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x=sqrt(99);
	for (int i=96; i>=3; i=i-3) {
		x=sqrt(i+x);
	}
	printf("Ответ: %f",x);
	getch();
}
