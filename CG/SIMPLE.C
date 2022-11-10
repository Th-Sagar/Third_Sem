#include <graphics.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <math.h>

void main()
{
    int cX = 80, cY = 100, r = 60;
    int x = 0, y;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");

    while (x <= y)
    {
	y = sqrt((r * r) - (x * x));
	putpixel(80 + x, 100 + y, RED);
	putpixel(80 - x, 100 + y, RED);
	putpixel(80 + x, 100 - y, RED);
	putpixel(80 - x, 100 - y, RED);
	putpixel(80 + y, 100 + x, RED);
	putpixel(80 - y, 100 + x, RED);
	putpixel(80 + y, 100 - x, RED);
	putpixel(80 - y, 100 - x, RED);
	x++;
    }
    getch();
    closegraph();
}
