#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
int co_ords[1][2],trans[1][2];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("enter coordinates of x and y:" );
scanf("%3d%3d",&co_ords[0][0],&co_ords[0][1]);
setcolor(2);
circle(co_ords[0][0],co_ords[0][1],23);
outtextxy(co_ords[0][0]-20,co_ords[0][1]+20,"Original");
printf("\n values to be tanslate :");
scanf("%3d %3d",&trans[0][0],trans[0][1]);
co_ords[0][0]+=trans[0][0];
co_ords[0][1]+=trans[0][1];
setcolor(5);
circle(co_ords[0][0],co_ords[0][1],23);
outtextxy(co_ords[0][0]-20,co_ords[0][1]-20,"Translated");
getch();
return 0;
}
