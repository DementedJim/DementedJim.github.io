#include<stdio.h>
#include<conio.h>
#include<locale.h>

void funct (char t) {
	if (t == 'Q') return 0;
	scanf("%c",&t);
	printf("Aдрес ch=%c равен %u.\n",t,&t);
	funct (t);
}

int main()
{
	char *locale = setlocale(LC_ALL, "");
	char ch;
	funct (ch);
	return 0;
}
