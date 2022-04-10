#include <stdio.h>
#include <graphics.h>

void main()
{
	int gm = DETECT,gd;
	float a ,b ,rx ,ry ,x,y;
	float dx , dy;
	float p1,p2;
	initgraph(&gm,&gd,"C://TURBOC3//BGI");
	printf("enter a and b:");
	scanf("%f %f",&a,&b);
	printf("enter rx and ry:");
	scanf("%f %f",&rx,&ry);
    x = 0 ; y = ry;
    dx = 2*ry * ry * x;
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
    p2 = ((ry * ry)*(x + 0.5)*(x+0.5)) + ((rx * rx) * (y-1) * (y-1)) - ((rx * rx) * (ry * ry));
    while(y >= 0){
	    delay(200);
	    putpixel(a+x,b+y,7);
	    putpixel(a+x,b-y,7);
	    putpixel(a-x,b+y,7);
	    putpixel(a-x,b-y,7);
	    if(p2 >= 0){
	        p2 += - dy + (rx*rx);
	    }
	    else{
	        p2 += dx - dy + (rx*rx);
	        x++;
	    }
	    y--;
	    dx = 2 * ry * ry * x;
	    dy = 2 * rx * rx * y;
        }
    getch();
}
