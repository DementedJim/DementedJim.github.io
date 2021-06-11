#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int x = 1, y;
char c = 'a'; int *pi, *qi; char *pc;
pi = &x; *pi = 3; y = *pi; *pi = c; qi = pi;
pc = qi; *qi+=1; pi++; *(-- pi) = 5; y = *qi+1;
pc = &c; ++*pc; (*pc)++; *pc++; *pc+=1;
x = (int)pi; pi=(int*)pc; pi=(int*)x; x = 1+ *pi; pc=(char*)pi;
c = *pc; 
pc = &y; 
x = qi - pi; 
qi = 0;
qi+=pi;
y = &pi; y = (int)&pi; pi = pi +5; *(pi+1)=0; pi=&(x+0);
getch();
}
