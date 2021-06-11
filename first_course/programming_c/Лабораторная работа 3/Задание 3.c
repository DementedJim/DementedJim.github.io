#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  a=123, b=456, c=789;
	printf("Даны числа: %d, %d, %d\n",a, b, c);
	if (a>b){
	  if (a>c) {
	  	printf ("Число %d больше всех", a);
	  }
	  else printf ("Число %d больше всех");
	}  
	else {
	  if (b>c) {
	  	printf ("Число %d больше всех", b);
	  }
	  else {
	  	printf ("Число %d больше всех", c);
	  }
	}
	getch();
}

	


