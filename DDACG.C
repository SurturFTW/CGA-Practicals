#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
int x1,y1,x2,y2,i=0;
float delx,dely,len,x,y;
int gr=DETECT,gm;
initgraph(&gr,&gm,"C:\\TURBOC3\\BGI");
printf("\n Please enter coordinates of x1, y1 = ");
scanf("%d %d",&x1,&y1);
printf("\n Enter the coordinates of x2, y2 = ");
scanf("%d %d",&x2,&y2);
dely=(y2-y1);
delx=(x2-x1);

if(delx<dely)
{
len = dely;
}
else
{
len=delx;
}
delx=delx/len;
dely=dely/len;
x=x1;
y=y1;
do{
putpixel(x,y,3);
x=x+delx;
y=y+dely;
i++;
delay(20);
}while(i<=len);
getch();
closegraph();
}