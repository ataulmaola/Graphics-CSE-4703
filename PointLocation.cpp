#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int angle = 0;
    double x=100, y=50, x1 = 50, y1 = 200, x2 = 300, y2 = 100;


    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

char ch;
line(x1,y1,x2,y2);
 putpixel(x, y, 15);
 outtextxy(x,y,"p(100,50)");
ch=getch();
if(ch='e'){
    if(((x2-y1)*(y-y1)- (y2-y1)*(x-x1))>0){
    printf("point is located right");
 }
 else{
    printf("point is located left");
 }

}



 /* deallocate memory allocated for graphics screen */
 closegraph();

 return 0;
}
