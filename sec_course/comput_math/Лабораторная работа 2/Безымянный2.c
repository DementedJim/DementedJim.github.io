#include <stdio.h>
#include <math.h>
#include <locale.h>


float fxy (float x, float y) {
	float z;
	z = sin(x + y);
	return z;
}

void main () {
		char *locale = setlocale(LC_ALL, "");
		double a, b, c, d, nx, ny, Hx, Hy, Sx, Sy, x, y, Ix, Iy;
		a = 0;
		b = 3.14159265359 / 2;
		c = 0;
		d = 3.14159265359 / 4;
		printf ("Введите кол-во разбиений nx: ");
		scanf ("%lf", &nx);
		printf ("Введите кол-во разбиений ny: ");
		scanf ("%lf", &ny);
		Hx = (b - a) / nx;
		Hy = (d - c) / ny;
		printf("Hx = %lf\nHy = %lf\n", Hx, Hy);
		x = a;
		y = c;
		Sx = 0;
		while (x <= b - Hx) {
			Sy = 0;
	  y = c;
			while (y <= d - Hy) {
			  Sy += fxy(x, y);
				 y += Hy;
			}
			Iy = Hy * Sy;
			Sx += Iy;
			x += Hx;
		}
		Ix = Hx * Sx;
		printf ("Ответ: %lf", Ix);
		getch();
}

