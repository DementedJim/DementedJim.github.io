#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int b[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
	int c[3][3];
	int i,j,k;
	printf("Матрица A = \n");
	for (i = 0; i<3; i++) {
    	for (j = 0; j<3; j++) {
      		printf("%d ", a[i][j]);
    	}
    	printf("\n");
	} 
	printf("Матрица B = \n");
	for (i = 0; i<3; i++) {
    	for (j = 0; j<3; j++) {
      		printf("%d ", b[i][j]);
    	}
    	printf("\n");
	} 
	printf("\nA*B= \n");
	for (i=0;i<=2;i++) {
		for (j=0;j<=2;j++) {
			c[i][j] = 0;
			for (k=0;k<=2;k++) {
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for (i=0;i<=2;i++) {
		for (j=0;j<=2;j++) {
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}

