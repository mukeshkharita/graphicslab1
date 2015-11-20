#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
	int t,i,j,k;
	int gd=DETECT,gm;
	printf("Enter coordinate of rectangle x1,y1,x2 and y2\n");
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("Enter angle\n");
	float a;
	scanf("%f",&a);
	initgraph(&gd,&gm,NULL);
	setcolor(RED);
	rectangle(x1,y1,x2,y2);
	//int r = a*3.14/180.0;
	float s = tan(a);
	setcolor(YELLOW);
	line(x1,y1,x2,y1);
	line(x2,y1,(int)(x2*s+x2),y2);
	line((int)(x1*s+x1),y2,(int)(x2*s+x2),y2);
	line(x1,y1,(int)(x1*s+x1),y2);
	delay(5000);
	return 0;
}