#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
int gd= DETECT,gm;
int i;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
for(i=0;i<255;i++){
delay(10);
cleardevice();
circle(100+i,100,80);
}
getch();
closegraph();
}