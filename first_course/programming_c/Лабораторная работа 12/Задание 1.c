#include<stdio.h>
#include<locale.h>

int fibonacci(int m)  
{
  if (m == 1 || m == 2) return 1;
  return fibonacci(m - 1) + fibonacci(m - 2); 
}

int main()
{
  char *locale = setlocale(LC_ALL, "");
  int m, a[m], i=1;
  printf("Введите m=");
  scanf("%d", &m); 
  printf("Массив из чисел Фибоначчи: ");
  for (i; i <= 1000; i++) { 
    if (fibonacci(i)<=m) {
    a[i]=fibonacci(i);
    printf("a[%d]=%d; ",i, a[i]);
    } 
	else break;
  }
  getch();
}
