#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:/tc/bgi");
 for(int j=0;j<3;j++){
 for(int i=0;i<200;i++){
 delay(5);
 cleardevice();
 circle(100,200+i,50);
 setfillstyle(SOLID_FILL,RED);
 floodfill(101,201+i,15);
 }

 for(i=0;i<200;i++){
 delay(1);
 cleardevice();
 circle(100,400-i,50);
 setfillstyle(SOLID_FILL,RED);
 floodfill(101,401-i,15);
 }
  }


 for(int i=0;i<200;i++){
 delay(5);
 cleardevice();
 circle(100,200+i,50);
 setfillstyle(SOLID_FILL,RED);
 floodfill(101,201+i,15);
 }

 getch();
 closegraph();




}