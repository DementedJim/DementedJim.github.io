#include <stdio.h>
#include <math.h>
#include <locale.h>    

int main () {
 	double x1, y1, z1, t, x ,y ,z, h, t2;
	printf("vvedite t2: ");
	scanf ("%f", &t2);
	printf("vvedite h: ");
	scanf ("%d", &h);
	t = 0;
 	x = 2;
 	y = 1;
 	z = 1;
 	while(t < t2) { 
		printf("t = %f\tx = %f\ty = %f\tz = %f\n", t, x, y, z);
		x1 = x + (-2 * x + 5 * z)*h; 
		y1 = y + (sin(t - 1) * x - y - 3 * z)*h; 
		z1 = z + (-x + 2 * z)*h; 
		x = x1; 
		y = y1; 
		z = z1; 
		t += h; 
	} 
 	return 0;
} 
