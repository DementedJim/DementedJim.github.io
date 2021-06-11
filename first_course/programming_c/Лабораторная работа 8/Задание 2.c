#include<stdio.h>
#include<conio.h>
#include <locale.h>

int func() {
	printf("Мы устали!\n");
}

int main() {
char *locale = setlocale(LC_ALL, "");
int i; 
for (i=1;i<=3;i++)
func();
getch();
return 0;
}
