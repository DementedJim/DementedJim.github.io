#include<stdio.h>
#include<math.h>
#include <locale.h>

void main() {
 char *locale = setlocale(LC_ALL, "");
    int a,b=0,i=0,n=0;
    printf("¬ведите двоичное натуральное число: "); scanf("%d", &a);
    while(a!=0) {
        if(a%10==1){
		    b=b+pow(2, i); 
		}
        i++;
        a/=10;
    }
    while (b!= 0) {
        n+=(b % 10);
        b/=10;
    }
    printf("—умма цифр этого числа: %d", n);
 getch();
}
