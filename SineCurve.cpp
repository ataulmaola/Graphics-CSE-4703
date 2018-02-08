#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int angle = 0;
    double x, y;

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
 /* generate a sine wave */
 for(x = 0; x < getmaxx(); x+=3) {

     /* calculate y value given x */
     y = 50*sin(angle*3.141/180);

     y = getmaxy()/2 - y;

     /* color a pixel at the given position */
  putpixel(x, y, 15);

  delay(80);

  /* increment angle */
  angle+=5;
 }
  for(x = 0; x < getmaxx(); x+=5) {

     /* calculate y value given x */
     y = 50*sin(angle*3.141/180);

     y = getmaxy()/2 - y;

     /* color a pixel at the given position */
  putpixel(x, y, 15);

  delay(80);

  /* increment angle */
  angle+=5;
 }

 getch();

 /* deallocate memory allocated for graphics screen */
 closegraph();

 return 0;
}
