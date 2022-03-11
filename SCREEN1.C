#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
int gd=DETECT,gm,i=0,x,xx,y,yy,r;


//Initializes the graphics system

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

x=getmaxx();

y=getmaxy();

while(i<50)

{

i++;

// setfillstyle(random(i),random(30));
    circle(xx=random(x),yy=random(y),random(40));

    setfillstyle(random(i),random(20));

    floodfill(xx,yy,getmaxcolor());

    delay(200);
}

getch();

}