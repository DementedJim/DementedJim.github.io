#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int i,x;
	printf("Исходный массив: ");
	for (i=0;i<=9;i++)
	printf("%d ",a[i]); 
	printf("\n");
	printf("Массив с обратным порядком следования элементов: ");
	for (i=0;i<=4;i++) {
		x=a[i];
		a[i]=a[9-i];
		a[9-i]=x;
	}
	for (i=0;i<=9;i++)
	printf("%d ",a[i]); 
getch();
return 0;
}

