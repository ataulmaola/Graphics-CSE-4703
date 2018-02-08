#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int angle = 0;
    double x=200, y=100, w=200, z=10;


    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 rectangle(50,50,500,400);

 putpixel(x, y, 15);
 putpixel(w, z, 15);
 char ch;
 ch=getch();
 for(;;)
 {
   if(ch=='1') {
    if(!((50 < w) && (w < 500) && (50 < z) && (z < 400))){
        putpixel(w, z, BLACK);
    }
    else
        putpixel(x, y, BLACK);
   }
    if(ch=='2') {
        putpixel(w, z, 15);
        putpixel(x, y, 15);
   }

   ch=getch();

   if(ch=='e') break;
   }
 getch();

 /* deallocate memory allocated for graphics screen */
 closegraph();

 return 0;
}
