#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int gd=DETECT,gm,j,k,x1,x2,x3,y1,y2,y3,s;
	printf("Enter triangle coordinates\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("Enter your scalling factor or translating factor\n");
	scanf("%d",&s);
	initgraph(&gd,&gm,NULL);
	
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	line(x1+s,y1+s,x2+s,y2+s);
	line(x2+s,y2+s,x3+s,y3+s);
	line(x3+s,y3+s,x1+s,y1+s);
	line(x1*s,y1*s,x2*s,y2*s);
	line(x2*s,y2*s,x3*s,y3*s);
	line(x3*s,y3*s,x1*s,y1*s);
	delay(5000);
}