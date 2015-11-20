#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int gd=DETECT,gm,i,j,k,l;
	initgraph(&gd,&gm,NULL);


	//Car
	int x=0,y=0,x1=0,y1=0;
	int flag=0;
	for(i=0;i<400;i+=5)
	{
		cleardevice();
		line(0,400,600,400);
		int points1[]={40+i,380-y-y1,10+i,380-y-y1,10+i,200-y-y1,100+i,200-x-x1,100+i,320-x-x1,200+i,320-x-x1,200+i,380-x-x1,160+i,380-x-x1};
		//setcolor(BLUE);
		line(60+i,380-y-y1,140+i,380-x-x1);
		//setfillstyle(SOLID_FILL,BLUE);
		//floodfill(60+i,380,WHITE);
		line(10+i,320-y-y1,100+i,320-x-x1);
		line(50+i,200,50+i,320);
		circle(50+i,390-y-y1,10);
		circle(150+i,390-x-x1,10);
		drawpoly(8,points1);
		arc(350,395,180,360,10);
		delay(100);
		if((i>=175)&&(i<=195))
		{
			x+=5;
			y1-=1;
		}
		else
		{
			x=0;
			y1=0;
		}
		if(i>195&&i<=215)
		{
			x1=20;
			x1-=5;
		}
		else
		{
			x1=0;
		}
		if(i>275&&i<=295)
		{
			y+=5;
		}
		else
		    y=0;
		if(i>295&&i<=315)
		{
			y1=20;
			y1-=5;
		}
		else
		    y1=0;
	}
	
	delay(1000);
	return 0;
}