#include<stdio.h>
#include<locale.h>
	
int main() {
	char *locale = setlocale(LC_ALL, "");
	int a[3][3];
	int i,j;
	for (i=0;i<=2;i++) {
		printf("������� ����� ������ �������� %d�� ������� ����� ������: ", i+1);
		for (j=0;j<=2;j++) {
			scanf("%d",&a[j][i]);
		}
	}
	printf("��� ������: \n");
	for (i=0;i<=2;i++) {
		for (j=0;j<=2;j++) {
		printf("%d ",a[i][j]);
		}
	printf("\n");
	}
getch();
}

