#include<conio.h>
#include<graphics.h>

void main(){
int gm=DETECT,gd;
int xn1,yn1,xn2,yn2;
int sx,sy;
initgraph(&gm,&gd,"C:\\TurboC3\\BGI");
printf("enter cords x1 y1 x2 y2:");
scanf("%d %d %d %d",&xn1,&yn1,&xn2,&yn2);
rectangle(xn1,yn1,xn2,yn2);
outtextxy(300,200,"SCALING");
printf("Enter the scaling factor");
scanf("%d %d",&sx,&sy);
xn1=xn1*sx;
yn1=yn1*sy;
xn2=xn2*sx;
yn2=yn2*sy;

rectangle(xn1,yn1,xn2,yn2);

getch();//one row two cols



}