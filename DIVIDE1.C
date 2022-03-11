#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(2);
printf("%d,%d",getmaxx(),getmaxy());
line(getmaxx()/2,0,getmaxx()/2,getmaxy());
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
setcolor(3);
outtextxy(57,14,"1.circle");
circle(150,120,82);
outtextxy(400,45,"2.rectangle");
line(388,86,552,86);
line(552,86,553,161);
line(553,161,390,163);
line(390,163,388,86);
outtextxy(421,293,"3.ellipse");
ellipse(488,373,0,360,80,30);
outtextxy(66,303,"4.half ellipse");
ellipse(157,383,0,180,80,30);
getch();
closegraph();
return 0;
}
