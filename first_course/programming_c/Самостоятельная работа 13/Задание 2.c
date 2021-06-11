#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(0,0,getmaxx(),getmaxy());
    floodfill(1,1,WHITE);
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, RED);
    rectangle(1,1,150,75);
    floodfill(11,11,BLUE);
    line(1,1,150,75);
    line(150,1,1,75);
    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL, YELLOW);
    ellipse(getmaxx()/2,getmaxy()/2,0,360,180,180);
    fillellipse(getmaxx()/2,getmaxy()/2,180,180);
    getch();
    return 0;
}
