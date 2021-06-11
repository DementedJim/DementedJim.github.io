#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  a;
	printf("Введите число: "); scanf("%d", &a);
	if (a%2!=0 && a/10<10){
	  printf ("Число %d является двузначным и нечетным", a);
	}  
	else {
	  printf("Число %d не является двузначным и нечетным", a);	
	}
	getch();
}

	


