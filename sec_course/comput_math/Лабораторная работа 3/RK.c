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
	 float x, y, a, b, h, k1, k2, k3, k4;
	 x = 0;
	 y = 1;
	 a = 0;
	 b = 1;
	 printf("¬ведите n: ");
	 scanf ("%d", &n);
	 h = ((b - a)/n);
	 printf("h = %f \n",h);
	 while (x <= (b - h)) {
		  k1 = function(x, y);
		  k2 = function((x+h/2), (y+(h/2)*k1));
				k3 = function((x+h/2), (y+(h/2)*k2));
				k4 = function((x+h), (y+h*k3));
		  y += ((h/6)*(k1+2*k2+2*k3+k4));
	   printf("x = %1.3f\ty = %f\n", (x + h), y);
	   x = x + h;
	   
	 }  
  getch();
}
