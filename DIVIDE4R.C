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
getch();
closegraph();
return 0;
}
