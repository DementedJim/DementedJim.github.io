#include<stdio.h>
#include<locale.h> 

int main() {
	
	char *locale = setlocale(LC_ALL, "");
	char a[2][2]={{'w','a'},{'s','d'}};
	display (2,2,a)	;
	return 0;
	
}

void display(int n, int m, int a[n][m]) {
	int i,j;
	for (i = 0; i<n; i++) {
    	for (j = 0; j<m; j++) {
    		puts (a);
      		//puts("%c", a[i][j]);
    	}
    	printf("\n");
	} 
}
