#include <conio.h>
#include <graphics.h>

int main()
{
    int an = DETECT, as, i, a;

    initgraph(&an, &as, "C:\\TURBOC3\\BGI");
     for(i=0;i<500;i++)
     {
   setbkcolor(6);
   setcolor(3);
	line(50 + i, 405, 100 + i, 405);
	line(75 + i, 375, 125 + i, 375);
	line(50 + i, 405, 75 + i, 375);
	line(100 + i, 405, 100 + i, 345);
	line(150 + i, 405, 100 + i, 345);
	line(75 + i, 345, 75 + i, 370);
	line(70 + i, 370, 80 + i, 370);
	line(80 + i, 345, 100 + i, 345);


	circle(150 + i, 405, 30);
	circle(50 + i, 405, 30);
   setcolor(1);
	line(0, 436, getmaxx(), 436);



	delay(7);
     cleardevice();


    }

    getch();

    closegraph();
}