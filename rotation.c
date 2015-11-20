#include <graphics.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int gd=DETECT,gm,i,j,k,l,x1,x2,y1,y2,x3,y3,angle,b[8];
	printf("Enter the coordinates of triangle\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	int a[]={x1,y1,x2,y2,x3,y3,x1,y1};
	printf("Enter the angle\n");
	scanf("%d",&angle);
	initgraph(&gd,&gm,NULL);
	setcolor(WHITE);
	drawpoly(4,a);
	b[0] = (int)((float)(x1*cos(angle))-(float)(y1*sin(angle)));
    b[1] = (int)((float)(x1*sin(angle))+(float)(y1*cos(angle)));
	b[2] = (int)((float)(x2*cos(angle))-(float)(y2*sin(angle)));
	b[3] = (int)((float)(x2*sin(angle))+(float)(y2*cos(angle)));
	b[4] = (int)((float)(x3*cos(angle))-(float)(y3*sin(angle)));
	b[5] = (int)((float)(x3*sin(angle))+(float)(y3*cos(angle)));
	b[6]=b[0];
	b[7]=b[1];
	drawpoly(4,b);
	for(i=0;i<8;i++)
	{
		printf("%d ",b[i]);
	}
	delay(5000);
}