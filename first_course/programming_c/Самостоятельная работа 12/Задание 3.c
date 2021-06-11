#include<stdio.h>
#include<locale.h>

void display(int n, int m, int a[n][m]) {
	int i,j;
	for (i = 0; i<n; i++) {
    	for (j = 0; j<m; j++) {
      		printf("%d ", a[i][j]);
    	}
    	printf("\n");
	} 
}

void transpose (int n, int m, int a[n][m], int b[m][n]) {
	int i,j;
	for (j=0;j<m;j++) {
		for (i=0;i<n;i++) {
			b[j][i]=a[i][j];
		}
	}
}

void matrixmultiply (int n, int m, int m2, int a[][m], int b[][m2],  int r[][m2]) { 	
	int i,j,k;
	for (i=0;i<n;i++) {
		for (j=0;j<m2;j++) {
			r[i][j]=0;
			for (k=0;k<m;k++) {
				r[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}



int main() {
	
	char *locale = setlocale(LC_ALL, "");
	int a[2][4]={{1,2,1,3},{4,-1, 5, -1}};
	int d[2][2],c[4][4],b[4][2];
	printf ("Матрица А \n");
	display (2, 4, a);
	printf ("Транспонированная матрица А \n");
	transpose (2,4,a,b);
	display (4, 2, b);
	printf("Матрица A*A(T) \n");
	matrixmultiply (2,4,2 ,a,b,d);
	display (2, 2, d);
	printf("Матрица A(T)*A \n");
	matrixmultiply (4,2,4,b,a,c);
	display (4,4,c);
	return 0;
}
		


