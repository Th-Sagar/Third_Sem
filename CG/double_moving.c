#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>


void main()  {
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:/turboc3/bgi");
for(i=0;i<300;i++){
delay(2);
cleardevice();
rectangle(300-i,50,350-i,100);
setfillstyle(SOLID_FILL,GREEN);
floodfill(301-i,51,15);
delay(2);
cleardevice();
rectangle(100+i,200,150+i,250);
setfillstyle(SOLID_FILL,RED);
floodfill(101+i,201,15);
}
for(i=0;i<300;i++){
delay(2);
cleardevice();
rectangle(0,50+i,50,100+i);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1,51+i,15);
delay(3);
cleardevice();
rectangle(400,200+i,450,250+i);
setfillstyle(SOLID_FILL,RED);
floodfill(401,201+i,15);
}
for(i=0;i<300;i++){
delay(2);
cleardevice();
rectangle(0+i,350,50+i,400);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1+i,351,15);

delay(4);
cleardevice();
rectangle(400-i,500,450-i,550);
setfillstyle(SOLID_FILL,RED);
floodfill(401-i,501,15);
}
for(i=0;i<300;i++){
delay(2);
cleardevice();
rectangle(300,350-i,350,400-i);
setfillstyle(SOLID_FILL,GREEN);
floodfill(301,351-i,15);

delay(2);
cleardevice();
rectangle(100,500-i,150,550-i);
setfillstyle(SOLID_FILL,RED);
floodfill(101,501-i,15);
}


getch();
closegraph();



}