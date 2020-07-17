#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
     for(int i=1;i<500;i++)
     {
	cleardevice();
	bar(0,350,700,355);
	rectangle(10+i,320,110+i,340);
	arc(25+i,340,180,0,10);
	arc(95+i,340,180,0,10);
	arc(25+i,340,180,0,3);
	arc(95+i,340,180,0,3);
	line(40+i,320,40+i,340);
	bar(100+i,330,110+i,335);
	line(85+i,320,75+i,310);
	rectangle(44+i,330,50+i,332);
	delay(100);
	}
 getch();
 }
