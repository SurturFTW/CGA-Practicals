#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(2);
setcolor(4);
circle(498,134,10);
setfillstyle(1,BLUE);
floodfill(489,134,4);
line(500,81,463,164);
line(463,164,528,165);
line(528,165,500,81);
line(466,165,468,245);
line(468,245,532,244);
line(532,244,525,165);
line(525,165,527,164);

line(503,85,614,80);
line(614,80,646,159);
line(646,159,528,165);
line(528,165,500,81);

line(642,243,532,249);
line(532,249,525,166);
getch();
closegraph();
return 0;
}
