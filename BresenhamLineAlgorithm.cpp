#include<stdio.h>
#include<graphics.h>
int main()
{
    double x1,y1,x0,y0,dx,dy,p,x,y;
    printf("Enter two end points:(x0,y0) and (x1,y1):\n");
    scanf("%lf %lf %lf %lf",&x0,&y0,&x1,&y1);
    dx=x1-x0;
    dy=y1-y0;
    p=2*dy-dx;
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    x=x0;
    y=y0;
    while(x<x1)
    {
        if(p>=0)
        {
            y++;
            putpixel(x,y,2);
            delay(15);
            p+=2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,6);
            delay(15);
            p+=2*dy;
        }
        x++;
    }
    getch();
    return 0;
}

