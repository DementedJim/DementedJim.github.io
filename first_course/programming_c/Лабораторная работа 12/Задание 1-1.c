#include<stdio.h>
#include<locale.h>

int fibonacci(int m)  // ����������� �������
{
  if (m == 1 || m == 2) return 1; // ������ 2 ����� ����� 1
  return fibonacci(m - 1) + fibonacci(m - 2); // ���������� ���������� 2 �����
}

int main()
{
  char *locale = setlocale(LC_ALL, "");
  int m, a[m], i=1;
  printf("������� m=");
  scanf("%d", &m); // ������ ����� N
  for (i; i <= m; i++) { // � ����� ������� N ����� ���������
    a[i]=fibonacci(i);
    printf("a[%d]=%d; ",i, a[i]);
}
  getch();

}
