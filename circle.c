#include <graphics.h>

void main(){
    int gm = DETECT,gd;
    float a = 200,b= 200,x,y,r =40;
    float p1;
    initgraph(&gm,&gd,"C://TC/BGI");
    x = 0; y = r;
    p1 = 5/4 - r;
    while(x<=y){
        delay(1000);
        putpixel(a+x,b+y,3);
        putpixel(a+x,b-y,3);
        putpixel(a-x,b+y,3);
        putpixel(a-x,b-y,3);
        //symmetry
        delay(1000);
        putpixel(a+y,b+x,3);
        putpixel(a+y,b-x,3);
        putpixel(a-y,b+x,3);
        putpixel(a-y,b-x,3);

    if(p1 <= 0){
        p1 += 2 * x + 1;
    }
    else{
        p1 += 2x - 2 y + 1;
        y--;
        }
    x++;
    }
  return 0;
}