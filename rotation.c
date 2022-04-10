#include <graphics.h>
#include<math.h>

void main (){
    int gm = DETECT, gd;
    int x1 = 300, y1 = 100, x2 = 200, y2 = 200;
    float dx, dy, co, si, d;
    float angle;
    int xn1, yn1, xn2, yn2;

    initgraph (&gm, &gd, "C://TC/BGI");
    line (x1, y1, x2, y2);
    xn1 = x1;
    yn1 = y1;

    dx = x2 - x1;
    dy = y2 - y1;
    angle = 180;
    d = 3.14 / 180 * angle;
    co = cos (d);
    si = sin (d);

    xn2 =  x1 + dx * co - dy * si;
    yn2 =  y1 + dx * si + dy * co;

    line (xn1, yn1, xn2, yn2);
    return 0;
}