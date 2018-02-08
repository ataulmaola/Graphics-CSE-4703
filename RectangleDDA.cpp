#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
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
    delay(15);
    }
}
int main()
{
    int gd =DETECT, gm, x1=100, y1=100;
    int h,w;
    cout<<endl<<"Enter Height and width: ";
    cin>>h>>w;
    initgraph(&gd, &gm, "C:\\tc\\bgi");
    drawline(x1,y1,x1+w,y1);
    getch();
}
