#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
rectangle(200,200,500,400);
	setfillstyle(SOLID_FILL,RED);
	floodfill(201,201,15);

rectangle(100,180,600,200);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(101,181,15);

rectangle(230,240,280,290);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(231,241,15);

rectangle(420,240,470,290);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(421,241,15);
rectangle(320,300,380,400);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(321,301,15);

getch();
closegraph();

}