#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
line(10,100,100,100);
line(10,100,1,120);
line(100,100,110,120);
line(1,120,10,120);
line(110,120,100,120);
line(10,120,10,150);
line(100,120,100,150);
line(10,150,100,150);
line(30,120,20,140);
line(30,120,40,140);
line(20,140,40,140);
line(50,150,50,120);
line(50,120,70,120);
line(70,120,70,150);
line(90,120,80,130);
line(90,120,98,130);
line(80,130,98,130);

getch();
closegraph();

}
