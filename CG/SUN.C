#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	circle(200,200,40);
	line(200,160,200,80);
	line(230,170,270,80);
	line(200,240,200,300);
	line(170,170,100,80);
	line(160,200,100,200);
	line(240,200,300,200);
	line(230,230,260,280);
	line(170,230,100,280);

	getch();
	closegraph();


}