#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#include<locale.h>

void main() {	//–ешал задачи заранее, а оформлением занималс€ второп€х перед сроком закрыти€, из-за чего просто забыл скопировать код в документ :C
	char *locale = setlocale(LC_ALL, "");
	bool P=0;
	float n;
	printf("¬ведите n: "); scanf("%f", &n);
	if (n>=1) {
		P=1;
	}
	printf("P=%d", P);
	getch(0);
}
