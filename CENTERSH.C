#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
printf("%d,%d",getmaxx(),getmaxy());
circle(320,240,182);

/*square*/
setcolor(BLUE);
line(231,155,232,319);
line(232,319,410,318);
line(410,318,411,155);
line(411,155,231,155);
/*rectangle*/
setcolor(YELLOW);
line(190,184,190,291);
line(190,291,450,290);
line(450,290,450,182);
line(450,182,190,184);
/* ellipse */
setcolor(RED);
ellipse(320,240,0,360,230,100);
/*line*/
setcolor(GREEN);
line(0,240,639,241);
line(320,0,320,481);
/*concentric circle*/
setcolor(BLUE);
circle(320,240,20);
setcolor(YELLOW);
circle(320,240,30);
setcolor(RED);
circle(320,240,40);
getch();
closegraph();
return 0;
}

