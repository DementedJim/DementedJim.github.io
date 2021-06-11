#include <graphics.h>
#include <stdio.h>
#include <math.h>

void rectangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4) {
    moveto(x1,y1);
    lineto(x2,y2);
    lineto(x3,y3);
    lineto(x4,y4);
    lineto(x1,y1);
}

int main() {
    int gd = DETECT, gm; initgraph(&gd, &gm, 0);    
    int sizex = 600, sizey = 600, midx, midy, x1,x2,x3,x4,y1,y2,y3,y4,xn1,xn2,xn3,xn4,yn1,yn2,yn3,yn4;
    float period = 0.2;
    midx = getmaxx()/2;
    midy = getmaxy()/2;
    x1 = midx-sizex/2;
    y1 = midy-sizey/2;
    x2 = midx+sizex/2;
    y2 = midy-sizey/2;
    x3 = midx+sizex/2;
    y3 = midy+sizey/2;
    x4 = midx-sizex/2;
    y4 = midy+sizey/2;
    setcolor(RED);
    for (int i=0;i<20;i++) {
        rectangle(x1,y1,x2,y2,x3,y3,x4,y4);
        xn1 = x1+(x2-x1)*period;
        yn1 = y1+(y2-y1)*period;
        xn2 = x2+(x3-x2)*period;
        yn2 = y2+(y3-y2)*period;
        xn3 = x3+(x4-x3)*period;
        yn3 = y3+(y4-y3)*period;
        xn4 = x4+(x1-x4)*period;
        yn4 = y4+(y1-y4)*period;
        x1=xn1; 
        y1=yn1;
        x2=xn2;
        y2=yn2;
        x3=xn3; 
        y3=yn3;
        x4=xn4; 
        y4=yn4;
    }
    getch();
    return 0;
}
