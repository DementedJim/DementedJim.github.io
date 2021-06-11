#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int a[2][2] = {{1,-1}, {-1,1}};
	int b[2][2] = {{2,0}, {-3,1}};
	int c[2][2] = {{3,-1},{2,3}};
	int r[2][2]; int x[2][2];
	int m[2][2]; int z[2][2];
	
	printf ("(AB)*C = \n");
	matrixmultiply (2,2,2,a,b,r);
	matrixmultiply (2,2,2,r,c,x);
	display (2,2,x);
	printf ("A*(BC) = \n");
	matrixmultiply (2,2,2,b,c,m);
	matrixmultiply (2,2,2,a,m,z);
	display (2,2,z);
	getch();
}

void display(int i, int j, int a[i][j])
{
for (i = 0; i<2; i++) {
    	for (j = 0; j<2; j++) {
      		printf("%d ", a[i][j]);
    	}
    	printf("\n");
	} 
}

void matrixmultiply (int n, int m, int m2, int a[n][m], int b[][m2],  int r[n][m2]) { 	//n - строки А, m - стоблцы A, m2 - стлбцы B
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


