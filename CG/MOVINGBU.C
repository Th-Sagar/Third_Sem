#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
int i;
initgraph(&gd,&gm,"C:/TC/BGI");
for(i=0;i<300;i++){
delay(10);
cleardevice();
rectangle(250+i,100,350+i,50);
rectangle(200+i,100,400+i,200);
rectangle(300+i,100,350+i,50);
circle(250+i,240,40);
circle(350+i,240,40);
//line(300+i,50,300+i,100);
}




getch();
closegraph();
}
