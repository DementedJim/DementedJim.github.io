#include<math.h>
#include<locale.h>

float Eight (int n) {		
	if (n==1) return sqrt(8-sqrt(8+sqrt(8)));
	return sqrt(8-sqrt(8+sqrt(8-Eight(n-1))));
 }

void main() {
	char *locale = setlocale(LC_ALL, "");
	int x;
	printf("������� �������� ���������: "); scanf("%d", &x);
	printf("���������: %f\n", Eight(x));
	printf("��������: %f", 1+2*sqrt(3)*sin(3.141592653/9));
	getch();
}

