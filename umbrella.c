#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int t,i,j,k,gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int flag=0;
	for(i=0;i<400;i++)
	{
		cleardevice();
		t=15;
		
		line(0,450,600,450);
		line(50+i,400,0+i,450);
		line(100+i,450,50+i,400);
		line(50+i,400,50+i,300);
		line(100+i,350,100+i,200);
		circle(50+i,280,20);
		line(50+i,300,100+i,350);
		line(0+i,350,50+i,300);
		arc(100+i,200,180,360,100);
		line(i,200,200+i,200);
		delay(10);
		for(j=0;j<450;j+=15)
		{
			for(k=0;k<=600;k+=t)
			{
				if(k<i||k>(200+i))
				{
				 	arc(k,j,0,360,1);
				}
				if(j<100)
				{
					arc(k,j,0,360,1);
				}
			}	
			if(flag==0)
				{
					delay(10);
				}
		}
		flag = 1;
		t+=10;
		if(t==35)
		{
			t=15;
		}
	}

	delay(5000);
	closegraph();
	return 0;
}