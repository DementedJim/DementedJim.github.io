#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	long int a;
	int b, n, i;
	printf("¬ведите число: "); scanf("%d",&a);
	printf("¬ведите позицию: "); scanf("%d", &b);
	n=(a>255)?(a>65535)?31:15:7; 
	printf("»тог: ");
	for (i=n;i>=0;i--) {
    	if(i!=b-1) {
		printf("%d",(a>>i)&0x1);
		}	
	}
	getch();
}
