#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
    int gm=DETECT,gd,i,j;
    int x,y,x1,y1,x2,y2,dx,dy;
    int p_er;
    printf("Enter x1 and y1 value\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter x2 and y2 values\n");
    scanf("%d %d",&x2,&y2);
    initgraph(&gm,&gd,"C:\\TC\\BGI");
    x = x1;y = y1;
    dx = x2-x1;
    dy = y2-y1;
    p_er = 2*dy-dx;

    while(x < x2){
        putpixel(x,y,3);
        delay(20);
        if(p_er < 0){
            p_er += 2*dy;
        }
            else{
                p_er += 2*dy-2*dx;
                y++;
            }
        x++;
    }
    getch();
}
