#include<stdio.h>
#include<locale.h>
#define N 3
#define M 3
int main() {
	char *locale = setlocale(LC_ALL, "");
	int s,i,j, a[N][M]={{1,2,3},{4,5,6},{7,8,9}};
	printf ("Исходная матрица: \n");
	display (N, M, a);
	for (i=0;i<N;i++) {
		s=0;
		for (j=0;j<M;j++) {
			s+=a[i][j];
		}
		a[i][0]=s/j;
	}
	printf ("Измененная матрица: \n");
	display (N, M, a);
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
