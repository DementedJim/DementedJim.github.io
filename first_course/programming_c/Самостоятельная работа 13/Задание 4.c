#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include<locale.h>

int main() {
	char *locale = setlocale(LC_ALL, "");
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);
	float r,scale=1, x1,y1,x2,y2;
	int color, midx,midy, xs1,ys1,xs2,ys2;
    printf("Введите  радиус окружности, описываемой квадрат: ");
    scanf("%f",&r);
	printf("Нажимайте пробел для смены цвета");
    midx = getmaxx()/2;
    midy = getmaxy()/2;
    x1 = r*cos(M_PI/4);
    y1 = r*sin(M_PI/4);
    x2 = r*cos(M_PI+M_PI/4);
    y2 = r*sin(M_PI+M_PI/4);
    xs1 = midx+x1*scale;
    ys1 = midy+y1*scale;
    xs2 = midx+x2*scale;
    ys2 = midy+y2*scale;
    setcolor(WHITE);
    rectangle(xs1,ys1,xs2,ys2);
    for (color=0; color <=15; color++) {
		setcolor(color);
		ellipse(midx,midy,0,360,r,r);
		getch();
	}
    getch();
    return 0;
}
