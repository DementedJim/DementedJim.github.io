#include <stdio.h>
#include <math.h>
#include<locale.h>

int main (void) {
  char *locale = setlocale(LC_ALL, "");
  int n = 5;
  float a[5] = {7.48, 7.49, 7.52, 7.47, 7.5};
  float pr1[5], pr2[5], m0 = 7.48, mSr, d, stndOtkl, absPgr, otnPgr, sumpr1 = 0, sumpr2 = 0;
  for (int i = 0; i < n; i++) {
    pr1[i] = a[i] - m0;
    sumpr1 += pr1[i];
    pr2[i] = pr1[i] * pr1[i];
    sumpr2 += pr2[i];
  }
  mSr = m0 + sumpr1/n;
  printf ("Среднее m = %.2f\n", mSr);
  d = (sumpr2 - n * pow((mSr - m0), 2))/(n*(n-1));
  printf ("Дисперсия = %.5f\n", d);
  stndOtkl = sqrt(d);
  printf ("Станд. отклонение = %.3f\n", stndOtkl);
  absPgr = 2.57 * stndOtkl;
  printf ("Абсолютная погрешность = %.3f\n", absPgr);
  otnPgr = absPgr/mSr * 100;
  printf ("Относительная погрешность = %.1f%%\n", otnPgr);
getch();
}


