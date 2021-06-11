 #include<stdio.h>
 #include<locale.h>
 
 int main() {
 	char *locale = setlocale(LC_ALL, "");
 	long int i=1;
 	while ((i*i+(i+1)*(i+1)+(i+2)*(i+2)+(i+3)*(i+3))!=((i+4)*(i+4)+(i+5)*(i+5)+(i+6)*(i+6))) {
 	i++;	
 	}
 	printf ("Такая четверка есть: %d,%d,%d,%d", i,i+1,i+2,i+3,i+4);
 	getch();
}
