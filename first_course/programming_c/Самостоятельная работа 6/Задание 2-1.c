#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int i,n,a,b,s=0; 
	printf("������� �����: "); scanf("%d",&a);
	n=(a>255)?(a>65535)?31:15:7;
	printf("� �������� ������� ���������: "); 
	for (i=n;i>=0;i=i-1) {
		b=(a>>i)&0x1;
		printf("%d",b);
		if (b==0) {
			s=s+1;	
		}  
	}
	printf("\n����� 0 ����������� %d ���(�)",s);
	getch();
}
