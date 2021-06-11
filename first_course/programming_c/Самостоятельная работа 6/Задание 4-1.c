#include<stdio.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
    int i=0, ch, j=0,q=0, ch_d1 = 0, ch_d2 = 0;
    scanf("%d", &ch);
    while(ch) {
    	ch_d2 = ch % 10;
    	for (i;i<=2;i++) {
        	if( ((ch_d2>>i)&0x01) == 1 ) {
            	ch_d1 += pow(2, j); 
        	}
        j++;
    	}
    printf("%d", ch_d1);
	j = 0; 
	ch_d1 =0;  
	ch /= 10;
    }
    getch();
}
