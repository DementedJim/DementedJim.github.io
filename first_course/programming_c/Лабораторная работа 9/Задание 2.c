#include <stdio.h>
void swap(int *a, int *b) { 
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int x = 3,y = 5;
printf("x=%d \t y=%d \n",x,y);
swap(&x,&y);	//���������� ���� 
printf("x=%d \t y=%d \n",x,y);
return (0);
}
