#include<stdio.h>
#include<locale.h>

void MaxMin (int *x, int *y){
	if (*x<*y) {
		int z = *y;
     	*y = *x;
     	*x = z;
	}
     	return;
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	float a,b,c;
	printf ("������� ����� ������ ��� �����: "); scanf("%f %f %f", &a, &b, &c);
		MaxMin(&b,&a);
		MaxMin(&c,&b);
		MaxMin(&b,&a);
	}
	printf("%f, %f, %f", a, b, c);
	getch();
}

