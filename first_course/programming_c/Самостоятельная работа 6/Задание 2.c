#include<stdio.h>
#include<math.h>
#include <locale.h>

void main() {
 char *locale = setlocale(LC_ALL, "");
    int a,b=0,i=0,n=0;
    printf("������� ����������� �����: "); scanf("%d", &a);
    while(a!=0) {
        b+=(a%2)*pow(10,i);
        a/=2;
        i++;
    }
    while (b!=0) {
        if(b%10==0) {
		    n++;
		}
        b/=10;
    }
    printf("����� 0 ����������� � �������� ������ ����� ����� %d ���(�).", n);
    getch();
}
