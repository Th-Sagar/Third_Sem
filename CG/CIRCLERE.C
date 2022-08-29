#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C:/TC/BGI");
	for(j=0;j<3;j++)
	{
	for(i=0;i<50;i++)
	{
	delay(50);
	cleardevice();
	rectangle(100+i,100,200+i,200);
	setfillstyle(SOLID_FILL,RED);
	floodfill(101+i,101+i,15);
	}

	for(i=0;i<50;i++)
	{
	delay(50);
	cleardevice();
	rectangle(150-i,100,250-i,200);
	setfillstyle(SOLID_FILL,RED);
	floodfill(151-i,151-i,15);
	}
	}
	getch();
	closegraph();
}