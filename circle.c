#include <graphics.h>

void main(){
    int gd = DETECT,gm;
    float a,b,x,y,r,p1;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    printf("enter a and b :");
    scanf("%f %f",&a,&b);
    printf("enter radius :");
    scanf("%f",&r);

    x = 0;
    y = r;
    p1 = 5/4 - r;
    while(x<=y){
        delay(100);
        putpixel(a+x,b+y,3);
        putpixel(a+x,b-y,3);
        putpixel(a-x,b+y,3);
        putpixel(a-x,b-y,3);
        //symmetry
        delay(100);
        putpixel(a+y,b+x,3);
        putpixel(a+y,b-x,3);
        putpixel(a-y,b+x,3);
        putpixel(a-y,b-x,3);

    if(p1 <= 0){
        p1 =p1+ 2 * x + 1;
        }
    else{
        p1 =p1+ 2*x - 2*y + 1;
        y--;
        }
    x++;
    }
    getch();
}
