#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int  a=123, b=456, c=789;
	printf("���� �����: %d, %d, %d\n",a, b, c);
	if (a>b){
	  if (a>c) {
	  	printf ("����� %d ������ ����", a);
	  }
	  else printf ("����� %d ������ ����");
	}  
	else {
	  if (b>c) {
	  	printf ("����� %d ������ ����", b);
	  }
	  else {
	  	printf ("����� %d ������ ����", c);
	  }
	}
	getch();
}

	


