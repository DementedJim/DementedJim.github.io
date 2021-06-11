#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int i,n,a,b,s=0; 
	printf("Введите число: "); scanf("%d",&a);
	n=(a>255)?(a>65535)?31:15:7;
	printf("В двоичной системе счисления: "); 
	for (i=n;i>=0;i=i-1) {
		b=(a>>i)&0x1;
		printf("%d",b);
		if (b==0) {
			s=s+1;	
		}  
	}
	printf("\nЦифра 0 встречается %d раз(а)",s);
	getch();
}
