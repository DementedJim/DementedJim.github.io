#include<stdio.h>
#include<conio.h>
#include <locale.h>

void more (char x) {
	if(x!='Q') {
		main();
	}
}
int main() {
char *locale = setlocale(LC_ALL, "");
char ch;
printf("������� ������ (Q - ������� ���������): ");
scanf("%c",&ch);
fflush(stdin); /* ������� ������ ���������� */
printf("�� ������� ������ %c\n",ch);
more(ch);
getch();
return 0;
}

