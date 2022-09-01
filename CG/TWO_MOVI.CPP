#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>


void main()  {
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:/turboc3/bgi");
for(i=0;i<400;i++){
delay(1);
cleardevice();
rectangle(400-i,50,450-i,100);
setfillstyle(SOLID_FILL,GREEN);
floodfill(401-i,51,15);
delay(1);
cleardevice();
rectangle(0+i,100,50+i,150);
setfillstyle(SOLID_FILL,RED);
floodfill(1+i,101,15);
}
for(i=0;i<300;i++){
delay(1);
cleardevice();
rectangle(0,50+i,50,100+i);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1,51+i,15);
delay(1);
cleardevice();
rectangle(400,100+i,450,150+i);
setfillstyle(SOLID_FILL,RED);
floodfill(401,101+i,15);
}
for(i=0;i<400;i++){
delay(1);
cleardevice();
rectangle(0+i,350,50+i,400);
setfillstyle(SOLID_FILL,GREEN);
floodfill(1+i,351,15);

delay(1);
cleardevice();
rectangle(400-i,400,450-i,450);
setfillstyle(SOLID_FILL,RED);
floodfill(401-i,401,15);
}
for(i=0;i<300;i++){
delay(1);
cleardevice();
rectangle(400,350-i,450,400-i);
setfillstyle(SOLID_FILL,GREEN);
floodfill(401,351-i,15);

rectangle(0,400-i,50,450-i);
setfillstyle(SOLID_FILL,RED);
floodfill(1,401-i,15);
}


getch();
closegraph();



}