#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j,k,l;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
for(i=0;i<200;i++){
delay(5);
cleardevice();
circle(100,50+i,30);
circle(100,50+i,15);
line(80,27+i,90,40+i);
line(120,27+i,110,40+i);
line(80,70+i,90,60+i);
line(120,70+i,110,60+i);
setfillstyle(SOLID_FILL,RED);
floodfill(101,51+i,15);
}
for(i=0;i<150;i++){
delay(5);
cleardevice();
circle(100,250-i,30);
circle(100,250-i,15);
line(80,227-i,90,240-i);
line(120,227-i,110,240-i);
line(80,270-i,90,260-i);
line(120,270-i,110,260-i);
setfillstyle(SOLID_FILL,RED);
floodfill(101,251-i,15);
}




getch();
closegraph();
}