#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include<assert.h>

int StepFast (int x,int y) {
	int a=x,b=y,z=1;
	while (b!=0)
		if (odd(b)) {
			z*=a; b--;
		}
		else {
		a*=a; b/=2;
		}
	return z;
}

int odd (int t) {
return (t%2==0)?0:1;
}

void main() {
	char *locale = setlocale(LC_ALL, "");
	printf("������������...\n");
	assert(StepFast(5,3)==125);
	assert(StepFast(11,4)==121*121);
	printf("������������ ���������: ������ �� ����������.\n");
	getch();
return 0;
}


