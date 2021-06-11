#include<stdio.h>
#include <locale.h>
void main()
{
char *locale = setlocale(LC_ALL, ""); 
int n,i=1;
printf("¬ведите число повторений: "); scanf("%d",&n);
if (n<i)
goto exit;
povt: printf("i=%d\n",i++);
if (n>=i)
goto povt;
exit: ;
}
