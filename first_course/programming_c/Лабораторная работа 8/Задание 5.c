#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main() { 
	srand(time(NULL)); 
	char*locale = setlocale(LC_ALL, ""); 
	int i; 
	for (i=1;i<=20;i++)  { 
		printf("%3d",1+(rand()%6)); 
		if (i%5==0) {
			printf("\n");
		} 
	} 
	printf(" ————-\n"); 
	getch(); 
}
