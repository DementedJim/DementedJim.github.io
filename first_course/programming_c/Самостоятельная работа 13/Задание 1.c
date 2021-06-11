#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);
    int xmin = -3, xmax = 3, ymin = -9, ymax = 9, midx, midy;
    float xscale, yscale, x;
    midx = getmaxx()/2; midy = getmaxy()/2;
	xscale=getmaxx()/(xmax-xmin), yscale=getmaxy()/(ymax-ymin);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(0,0,getmaxx(),getmaxy());
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
    setcolor(BLUE);
    x=xmin;
    moveto(x*xscale*midx, midy-x*x*yscale);
    while (x<=xmax) {
        lineto(x*xscale+midx,midy-x*x*yscale);
        x+=0.1;
    }
    getch();
    return 0;
}
