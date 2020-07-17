#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
    time_t isTime;
    struct tm *currentTime;
    char ch[100],chd[100],chp[10];
    while(!kbhit())
    {
       cleardevice();
       isTime=time(NULL);
       currentTime=localtime(&isTime);
       strftime(ch,100,"%I : %M : %S " , currentTime);
       setcolor(2);
       settextstyle(5,0,7);
       outtextxy(30,100,ch);

       strftime(chp,10,"%p",currentTime);
       settextstyle(3,0,3);
       outtextxy(530,138,chp);

     //  strftime(chd,100,"%a | %b %d | %Y ",currentTime);
     //  setcolor(7);
      // settextstyle(3,0,4);
    //   outtextxy(120,190,chd);

       delay(1000);

    }

 getch();
 }
