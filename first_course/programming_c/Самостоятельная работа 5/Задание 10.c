#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int k,b,n=10,i=0,c=1,s=0,a;
	printf ("������� k: "); scanf("%d",&k);
	printf ("����� ��������� �� ������ �����: ");
	while (s<k) {
	i++;
	b=i*i;
		while (b/n!=0) {
			n=n*10;
			c++;
		}
	s=s+c;
	printf("%d",b);
	}
	printf("\n");
	s=s-c;
	n=n/10;
	while (s!=k) {
	a=(b/n)%10;
	n=n/10;
	s++;
	}
	printf("������ �����: %d",a);
	getch();
}
