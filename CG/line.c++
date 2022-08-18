#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
line(10,100,100,100);
getch();
closegraph();

}
