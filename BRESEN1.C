#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int gd,gm,x,y,end,p,x1,x2,y1,y2,dx,dy;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C://TurboC3//BGI");

	printf("Enter the value of x1 y1 : ");
	scanf("%d %d",&x1,&y1);

	printf("Enter the value of x2 y2 : ");
	scanf("%d %d",&x2,&y2);


	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p = 2*dy-dx;

	if(x1>x2)
	{
		x=x2;
		y=y2;
		end=x1;
	}
	else
	{
		x=x1;
		y=y1;
		end=x2;
	}

	while(x<=end)
	{
		if(p<0)
		{
			x++;
			p=p+2*dy;
		}
		else
		{
			x++;
			y++;
			p=p+2*dy-2*dx;
		}
		putpixel(x,y,BLUE);
		delay(30);
	}

	getch();
	closegraph();
	return 0;
}