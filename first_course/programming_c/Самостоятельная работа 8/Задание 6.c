#include<stdio.h>
#include<locale.h>

 float Stepen (float x, int n) {
    if(n == 0) return 1;
    if(n < 0) return Stepen (1/x, -n);
    return x * Stepen (x, n - 1);
 }

void main() {
	char *locale = setlocale(LC_ALL, "");
	int k;
	float a;
	printf("������� �������� k � a ����� ������: "); scanf("%d, %f", &k, &a);
	printf("�����: %f", Stepen(2.7, k)+Stepen((a+1), -5));	
	getch();
}

