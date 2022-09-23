#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j,k,l;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
circle(100,50,30);
circle(100,50,15);
line(80,27,95,35);
line(125,27,100,30);



getch();
closegraph();
}