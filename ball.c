#include <stdio.h>
#include <graphics.h>
int main()
{
	int gd=DETECT,gm,i=0,j,k,l;
	initgraph(&gd,&gm,NULL);
	while(i!=580&&j!=580)
	{
	if(i!=580&&j!=580)
	{
		circle(80,80+i,10);
		i++;
	}
	else
	{
		circle(80,50+i,10);
		i--;
	}
	
	}
	delay(5000);
}
