
#include <bits/stdc++.h>
#include<graphics.h>
typedef unsigned int outcode;


using namespace std;
double xmin,ymin,h,w,l,t,r,b;

void drawline(int x1,int y1,int x2,int y2)
{
    int dx,dy,i,steps;
    float xi,yi,x,y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xi = dx / (float) steps;
    yi = dy / (float) steps;
    x = x1+.5;
    y = y1+.5;
    putpixel(x1, y1,GREEN);
    for (i = 0; i < steps; i++)
    {
        x += xi;
        y += yi;
        putpixel(x, y, GREEN);

    }
}

void translate(double Tx,double Ty)
{
    double nx1,ny1;

    nx1=Tx+xmin;
    ny1=Ty+ymin;
    drawline(nx1,ny1,nx1+w,ny1);
    drawline(nx1+w,ny1,nx1+w,ny1+h);
    drawline(nx1+w,ny1+h,nx1,ny1+h);
    drawline(nx1,ny1+h,nx1,ny1);
    getch();
}

void rotatetherect(double angle)
{
    double rad,x1,y1,x2,y2,x3,y3,x4,y4;

    rad=angle*(3.14/180);
    x1=l*cos(rad)-b*sin(rad);
    y1=l*sin(rad)+b*cos(rad);
    x2=r*cos(rad)-b*sin(rad);
    y2=r*sin(rad)+b*cos(rad);
    x3=l*cos(rad)-t*sin(rad);
    y3=l*sin(rad)+t*cos(rad);
    x4=r*cos(rad)-t*sin(rad);
    y4=r*sin(rad)+t*cos(rad);

    drawline(fabs(x1),fabs(y1),fabs(x2),fabs(y2));
    drawline(fabs(x1),fabs(y1),fabs(x3),fabs(y3));
    drawline(fabs(x3),fabs(y3),fabs(x4),fabs(y4));
    drawline(fabs(x2),fabs(y2),fabs(x4),fabs(y4));
    getch();
}
void scale(int sx,int sy)
{
    int sxx,syy,sw,sh;
    sxx=xmin*sx;
    syy=ymin*sy;
    sw=w*sx;
    sh=h*sy;
    drawline(sxx,syy,sxx+sw,syy);
    drawline(sxx+sw,syy,sxx+sw,syy+sh);
    drawline(sxx+sw,syy+sh,sxx,syy+sh);
    drawline(sxx,syy+sh,sxx,syy);

}
int main()
{
    int ch;
    double tx,ty,angle,sx,sy;

    initwindow(500,600);

    cout<<"Enter the X coordinate of top left corner : ";
    cin>>xmin;
    cout<<"Enter the Y coordinate of top left corner : ";
    cin>>ymin;
    cout<<"Enter the width : ";
    cin>>w;
    cout<<"Enter the height : ";
    cin>>h;
    l=xmin;
    t=ymin;
    r=xmin+w;
    b=ymin+h;

//Draw the rectangle withh dda algorithm
    drawline(xmin,ymin,xmin+w,ymin);
    drawline(xmin+w,ymin,xmin+w,ymin+h);
    drawline(xmin+w,ymin+h,xmin,ymin+h);
    drawline(xmin,ymin+h,xmin,ymin);




    printf("---MENU---");
    printf("\n 1)Translate\n 2)Rotate\n 3)Scale");
    printf("\nEnter your choice: ");
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"Translate  "<<endl;
        cout<<"Enter the X coordinate of new translated rectangle : "<<endl;
        cin>>tx;
        cout<<"Enter the Y coordinate of new translated rectangle : "<<endl;
        cin>>ty;
        cout<<"Enter the Y coordinate of new translated rectangle : "<<endl;
        cout<<"So The Translated Rectangle of given rectangle : "<<endl;
        delay(500);
        cleardevice();
        translate(tx,ty);
        getch();
        break;
    case 2:
        cout<<"Rotate  "<<endl;
        cout<<"Enter the Y coordinate of new translated rectangle : "<<endl;
        cin>>angle;
        cout<<"So The Translated Rectangle of given rectangle : "<<endl;
        delay(500);
        cleardevice();
        rotatetherect(angle);
        getch();
        break;
    case 3:
        cout<<"Scale  "<<endl;
        cout<<"Enter the scaling argument i X axis : "<<endl;
        cin>>sx;
        cout<<"Enter the scaling argument i Y axis : "<<endl;
        cin>>sy;
        delay(500);
        cleardevice();
        scale(sx,sy);
        getch();
        break;
    default:
        printf("you have enterd wrong choice");
        break;
    }

    closegraph();
}
