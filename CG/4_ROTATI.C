#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j,k,l;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
for( i = 0; i <= 400; i++)
{
delay(10);
cleardevice();
rectangle(50+i,50,100+i,100);
setfillstyle(SOLID_FILL,RED);
floodfill(51+i,51,15);
}
for(j = 0; j<=300; j++){
delay(10);
cleardevice();
rectangle(450,50+j,500,100+j);
setfillstyle(SOLID_FILL,GREEN);
floodfill(451,51+j,15);
}
for(k =0; k<=300; k++){
delay(10);
cleardevice();
rectangle(450-k,350,500-k,400);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(451-k,351,15);
}
for(l =0; l<=300; l++){
delay(10);
cleardevice();
rectangle(150,350-l,200,400-l);
setfillstyle(SOLID_FILL,BLUE);
floodfill(151,351-l,15);
}

getch();
closegraph();
}