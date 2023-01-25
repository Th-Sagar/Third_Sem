#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>

void circlemid(int, int, int);
void drawcircle(int, int, int, int);
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TC/BGI");
    int xc = 200, yc = 250, r = 100;

    circlemid(xc, yc, r);
    getch();
    closegraph();
}

void circlemid(int xc, int yc, int r)
{
    int x = 0, y = r;
    int p = 1 - r;

    while (x < y)
    {
        drawcircle(xc, yc, x, y);
        x++;
        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            y--;
            p = p + 2 * (x - y) + 1;
        }
        drawcircle(xc, yc, x, y);
        delay(50);
    }
}
void drawcircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}
