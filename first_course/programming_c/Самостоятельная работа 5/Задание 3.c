#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
    long int n;
    int s=1, k=1;
    printf("���������� n!\n������� n: ");
    scanf("%d", &n);
    while (k<n) {
    	k++;
    	s*=k;
	}
	printf("%d! = %d\n",n, s);
    getch();
}
