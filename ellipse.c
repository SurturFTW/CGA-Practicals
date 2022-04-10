#include <stdio.h>
#include <graphics.h>

int main()
{
    int gm = DETECT,gd;
    float a = 200,b = 200,rx = 30,ry = 20,x,y;
    float dx , dy;
    float p1,p2;
    initgraph(&gm,&gd,"C://TC//BGI");
    x = 0 ; y = ry;
    dx = 2 ry * ry * x;
    dy = 2 * rx * rx * y;
    p1 = (ry * ry) - (rx * rx * ry) + ((rx * rx)/4);

    while(dx <= dy){
        putpixel(a+x,b+y,7);
        putpixel(a+x,b-y,7);
        putpixel(a-x,b+y,7);
        putpixel(a-x,b-y,7);

        if(p1 <= 0){
            p1 += dx + (ry * ry);
        }
        else{
            p1 += dx - dy + (ry * ry);
            y--;
        }
        x++;
        dx = 2 * ry * ry * x;
        dy = 2 * rx * rx * y;
    }

    //region 2
    p2 = ((ry * ry) (x + 0.5)(x+0.5)) + ((rx * rx) * (y-1) * (y-1)) - ((rx * rx) * (ry * ry));
    while(y >= 0){
        delay(200);
        putpixel(a+x,b+y,7);
        putpixel(a+x,b-y,7);
        putpixel(a-x,b+y,7);
        putpixel(a-x,b-y,7);
        if(p2 >= 0){
            p2 += - dy + (rxrx);
        }
        else{
            p2 += dx - dy + (rx rx);
            x++;
        }
        y--;
        dx = 2 * ry * ry * x;
        dy = 2 * rx * rx * y;
    }
    return 0;
}