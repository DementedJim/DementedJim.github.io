#include<stdio.h>
#include<locale.h>

int fibonacci(int m)  // рекурсивная функция
{
  if (m == 1 || m == 2) return 1; // первые 2 числа равны 1
  return fibonacci(m - 1) + fibonacci(m - 2); // складываем предыдущие 2 числа
}

int main()
{
  char *locale = setlocale(LC_ALL, "");
  int m, a[m], i=1;
  printf("Введите m=");
  scanf("%d", &m); // вводим число N
  for (i; i <= m; i++) { // В цикле выводим N чисел Фибоначчи
    a[i]=fibonacci(i);
    printf("a[%d]=%d; ",i, a[i]);
}
  getch();

}
