#include<stdio.h>
#include<locale.h> 

int main() {
	
	char *locale = setlocale(LC_ALL, "");
	int a[2][4]={{1,2,3,4},{5,6,7,8}};
	int i, j, b[4][2];
	printf ("Исходная матрица:\n");
	display (2,4,a);
	printf ("Перевернутая матрица:\n");
	turn (2,4, a, b);
	display (4,2,b);
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

void turn (int n, int m, int a[n][m], int b[m][n]) {
int i, j;
  for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            b[i][j] = a[j][3-i];
        }
	}
}
		


