#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, x, y, p;

    dx = x1 - x0;
    dy = y1 - y0;

    x = x0;
    y = y0;

    p = 2 * dy - dx;
    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
            delay(100);
        }
        else
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
}
void main()
{
    float x0, y0, x1, y1, error;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    printf("enter x0 and y0:");
    scanf("%f%f", &x0, &y0);
    printf("enter x1 and y1:");
    scanf("%f%f", &x1, &y1);
    drawline(x0, y0, x1, y1);

    getch();
    closegraph();
}