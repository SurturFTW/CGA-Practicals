#include<graphics.h>
#include<conio.h>
 
void main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    
    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);
    getch();
    closegraph();
} 
