#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include<locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);
    float a,b, xscale=5, yscale, t=0, x, y;
    int midx, midy;
    printf("Введите a: ");
    scanf("%f",&a);
    printf("Введите b: ");
    scanf("%f",&b);
    yscale = getmaxy()/(10*b);
    midx=0; midy=getmaxy();
    midx = getmaxx()/2, midy = getmaxy()/2;
    x=a*t-b*sin(t);
    y=a-b*cos(t);
    moveto(x*xscale+midx,midy-y*yscale);
    setcolor(WHITE);
    while (t<50) {
        x=a*t-b*sin(t);
        y=a-b*cos(t);
        lineto(x*xscale+midx,midy-y*yscale);
        t+=0.1;
    }
    getch();
    return 0;
}
