#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
circle(210,176,70);
circle(185,152,10);
circle(240,150,10);
arc(210,176,180,350,50);
setfillstyle(1,YELLOW);
floodfill(210,176,YELLOW);
setcolor(BLACK);
arc(210,176,180,360,49);
arc(210,176,180,360,48);
arc(210,176,180,360,47);
arc(210,176,180,360,46);


getch();
closegraph();
return 0;
}
