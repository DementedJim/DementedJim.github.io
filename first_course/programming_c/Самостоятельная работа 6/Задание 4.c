#include<stdio.h>
#include<math.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int oct,dec=0,base=1;
	scanf("%o", &oct);
	printf("%o",oct);
	printf("%o",oct/8);
/*	while (oct) {
		int last=oct%10;
		oct/=10;
		dec+=last*base;
		base<<=3;
	}
	while(dec) {
		printf("%d",dec%10);
		dec/=10;
	}
	printf("\n");
*/	getch();
}
