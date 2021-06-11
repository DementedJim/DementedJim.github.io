#include<stdio.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	printf ("Матрица А  \n");
	display (2, 3, a);
	printf ("Транспонированная матрица А  \n");
	transpose (2, 3, a, b);
	display (3, 2, b);
	getch();
}
		
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
	
