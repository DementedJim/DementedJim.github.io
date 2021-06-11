#include<stdio.h>
#include<locale.h> 
#include <stdlib.h>
#define N 4
int main() {
	char *locale = setlocale(LC_ALL, "");
	int i, j, a[N][N], b[N][N];
	printf ("Исходная матрица:\n");
	srand(99);
	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) {
			a[i][j]=rand()%100;
		}
	}
	display(4,4,a);
	printf ("Измененная матрица:\n");
	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) {
			if (i==j) {
				a[i][j]=1;
			}
			a[i][N-i-1]=1;
		}
	}
	display (4,4,a);
	return 0;
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
