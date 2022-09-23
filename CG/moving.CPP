#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{

int gd=DETECT,gm;
int i;
initgraphic(&gd,&gm,"C:/TURBOC3/BGI");
for(i=0;i<255;i++)
{
cleardevice();
delay(10);
circle(100+i,200,50);
}
getch();
closegraph();
}