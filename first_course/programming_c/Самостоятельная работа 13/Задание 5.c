#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void anim(float tochka) {
    cleardevice();
    float yscale, xscale, x=0;
    int midx, midy;
    yscale = getmaxy()/3;     
    xscale = getmaxx()/10;
    midx = 0;
    midy = getmaxy()/2;
    setcolor(WHITE);
    moveto(x*xscale+midx,cos(x)*yscale+midy);
    setfillstyle(SOLID_FILL, WHITE);
    while (x<10) {
        if (x==tochka) {
            fillellipse(x*xscale+midx,cos(x)*yscale+midy,5,5);
        }
        float y = cos(x);
        lineto(x*xscale+midx,cos(x)*yscale+midy);
        x+=0.1;
    }   
}

int main() {
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);
    float tochka = 0;
    while (tochka <10) {
        anim(tochka);
        Sleep(10);
        tochka+=0.1;
    }
    getch();
    return 0;
}

