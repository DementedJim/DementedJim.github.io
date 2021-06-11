#include<stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float p, fi;
	printf("¬ведите фи\n"); scanf ("%f",&fi);
	p=(pow(sin(fi),4)+pow(cos(fi),4)-(1-pow(tan(fi),2)))/pow(tan(fi),2);
	printf("p= %f", p);
	getch();
}
	
