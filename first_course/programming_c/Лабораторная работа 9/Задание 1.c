#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int a=2,b=1, *p_1=&a,*p_2=&b;
double x, *p_dbl=&x;
*p_dbl=*p_1/(*p_2);
printf("%f",*p_dbl);
getch();
}
