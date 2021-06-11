#include<stdio.h>
#include<math.h> 
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	float x;
	printf("¬ведите x: "); scanf("%f", &x);
	if (x<=0) {
		printf("y(x)=1");
	}
	else {
		if (x>0 && x<=1) {
			printf("y(x)=%f", x);
		}
		else {
			if (x>1 && x<=2) {
				printf("y(x)=%f"), x+1;
			}
			else {
				if (x>2 && x<=3){
					printf("y(x)=%f",x+2);
				}
				else {
					printf("y(x)=%f", x+3);
				}
			}
		}
	}
	getch();
}
