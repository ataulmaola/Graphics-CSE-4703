#include<stdio.h>
#include<graphics.h>
int main()
{
    double d,r,x,y,xc,yc;
    printf("Enter center and radius:(xc,yc) and r:\n");
    scanf("%lf %lf %lf",&xc,&yc,&r);
    d=3-2*r;
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    x=0;
    y=r;
    while(x<=y)
    {
        putpixel(xc+x,yc+y,1);
        delay(15);
        putpixel(xc+x,yc-y,2);
        delay(15);
        putpixel(xc-x,yc+y,3);
        delay(15);
        putpixel(xc-x,yc-y,4);
        delay(15);
        putpixel(xc+y,yc+x,6);
        delay(15);
        putpixel(xc+y,yc-x,7);
        delay(15);
        putpixel(xc-y,yc+x,8);
        delay(15);
        putpixel(xc-y,yc-x,10);
        delay(15);
        if(d<=0)
        {
            d+=4*x+6;
        }
        else
        {
            d+=4*x-4*y+10;
            y--;
        }
        x++;
    }
    getch();
    return 0;
}


