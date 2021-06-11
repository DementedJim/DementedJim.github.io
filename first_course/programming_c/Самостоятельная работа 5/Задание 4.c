 #include<stdio.h>
 #include<locale.h>
 
 void main() {
 	char *locale = setlocale(LC_ALL, "");
 	int x=1,y,z;
 	printf("Будем вычислять значение функции y=2*x+z.\n");
 	printf("Введите значение z: "); 
	scanf("%d",&z);
 	while ((x<100) && (y!=50)) {
 		y=2*x+z; x++;
 		if (y==50) {
 			printf("y=50\n"); 
 		}
 	}
 	if (y==50) {
 	printf("Цикл закончен!\n");
 	}
 	else {
 		printf("Цикл закончен! Но y<>50.\n");
	}
 	getch();
}

