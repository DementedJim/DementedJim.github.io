#include<stdio.h>
#include<math.h>
#include <locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
    int a, b=0, i=0;
    printf("������� ����������� �����: "); scanf("%d", &a);
    while(a!=0) {
        b+=(a%8)*pow(10,i);
        a/=8;
        i++;
    }
    printf("� ������������ ������� ���������: %d", b);
    getch();
}
