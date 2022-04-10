#include<graphics.h>
#include<conio.h>

void main (){  
    int gm = DETECT, gd;
    int x, y;
    int i,j;
    int xn,yn;
    xn = 100;
    yn = 10;

    initgraph (&gm, &gd, "C://TC/BGI");
    x = getmaxx() / 2;
    y = getmaxy() / 2;

    circle (x, y, 23);
    printf("Movig object .....");
    delay(100);

    setcolor(YELLOW);
    circle (x+xn, y+yn,23);
}