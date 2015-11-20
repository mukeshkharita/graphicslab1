#include <graphics.h>
#include <stdio.h>

int main()
{
	int gd=DETECT,gm,i,j,k;
	initgraph(&gd,&gm,NULL);
	cleardevice();
	ellipse(200, 200, 0, 360, 100, 50);
	circle(300,200,5);
	floodfill(301,200,WHITE);
	double thita=0.0;
	while(thita!=-10)
	{
		cleardevice();
		double ans1 = cos(0.0);
		double ans2 = sin(0.0);
		ans1 =ans1 * 100;
		ans2 = ans2 * 50;
		int ans3 = (int)ans1;
		int ans4 = (int)ans2;
		circle((300+ans3),(150+ans4),5);
		thita+=0.100;
	}
	delay(5000);
}