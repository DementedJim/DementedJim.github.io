#include<stdio.h>
#include<conio.h>
#include <locale.h>

void main()
{
char *locale = setlocale(LC_ALL, "");
int x,y;
printf("¬ведите x и y: "); scanf("%d %d",&x,&y);
while (x!=y)
{
if (x>y)
x=x-y;
else y=y-x;
}
printf(" =%d\n",x);
getch();
}

