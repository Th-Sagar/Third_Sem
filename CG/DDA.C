#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
void main()
{
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    printf("enter x1 and y1:");
    scanf("%f%f", &x1, &y1);
    printf("enter x2 and y2:");
    scanf("%f%f", &x2, &y2);

    dx = (x2 - x1);
    dy = (y2 - y1);

    if (dx >= dy)
        step = dx;
    else
        step = dy;

    dx = dx / step;
    dy = dy / step;
    x = x1;
    y = y1;

    i = 1;
    while (i <= step)
    {
        putpixel(x, y, 5);
        x = x + dx;
        y = y + dy;
        i = i + 1;
        delay(100);
    }

    getch();
    closegraph();
}