#include<stdio.h>
#include<math.h> 
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int x;
	printf("¬ведите x: "); scanf("%d", &x);
	if (x>4.5) {
		printf("y(x)=0");
	}
	else {
		printf("y(x)=%d",abs(x));
	} 
	getch();
}
