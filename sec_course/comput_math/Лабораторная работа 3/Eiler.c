#include <stdio.h>
#include <math.h>
#include <locale.h>

float function (float x, float y) {
	float z;
	z = y * (1 - x);
	return z;
}

void main () {
 	char *locale = setlocale(LC_ALL, "");
	 int n;
	 float x, y, a, b, h;
	 x = 0;
	 y = 1;
	 a = 0;
	 b = 1;
	 printf("¬ведите n: \n");
	 scanf ("%d", &n);
	 h = ((b - a)/n);
	 printf("h = %f \n",h);
	 while (x <= (b - h)) {
		  y += h * function(x, y);
	   printf("x = %1.3f\ty = %f\n", (x + h), y);
	   x = x + h;
	 }  
  getch();
}
