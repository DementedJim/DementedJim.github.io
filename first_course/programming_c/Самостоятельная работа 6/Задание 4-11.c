#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
    int i, a, j=0, b=0, c=0;
    printf("Введите восьмеричное число: "); scanf("%d", &a);
    printf("Перевертыш: ");
	while(a>0) {
    	c=a%10;
    	for (i=0;i<=2;i++) {
        	if(((c>>i)&0x01)==1) {
            	b+=pow(2, j); 
  	        }
        j++;
    	}
    	printf("%d", b); 
		j=0; 
		b=0; 
		a/= 10;
    }
    getch();
}
