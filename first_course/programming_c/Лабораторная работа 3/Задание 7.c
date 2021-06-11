#include<stdio.h>
#include<locale.h>

void main() {
	char *locale = setlocale(LC_ALL, "");
	int x=0,y=-1,x1=2,y1=-3,x2=4,y2=-5;
	printf ("Координаты точки С=(%d,%d);\nКоординаты точки А=(%d,%d);\nКоординаты точки B=(%d,%d);\n",x,y,x1,y1,x2,y2);
	if ((x-x2)*(y1-y2)-(x1-x2)*(y-y2)==0) {
		printf ("Точка С принадлежит прямой, заданой точками А и B");
	}
	else {
	printf ("Точка С не принадлежит прямой, заданой точками А и B");
	}
	getch();
}
