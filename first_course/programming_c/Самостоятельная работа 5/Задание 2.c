#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int i, k,a=1;
	printf("¬ведите k: "); scanf("%d",&k);
	for (i; i<k; i++) {
		a=a+2;
	}
	printf ("a%d=%d;\n", i,a);
	getch();
}
