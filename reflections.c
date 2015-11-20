#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,i,j,k,x1,y1,x2,y2;
	int gd=DETECT,gm;
	printf("Enter the coordinate x1,y1,x2&y2\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("Enter the slope of line\n");
	int m;
	scanf("%f",&m);
	printf("Enter the value of c\n");
	int c;
	scanf("%d",&c);
	initgraph(&gd,&gm,NULL);
	setcolor(YELLOW);
	rectangle(x1,y1,x2,y2);
	rectangle(x1,(-1*y1),x2,(-1*y2));
	rectangle((-1*x1),y1,(-1*x2),y2);
	rectangle((-1*x1),(-1*y1),(-1*x2),(-1*y2));
	float s1 = 1.0/(1+m*m);
	int t1,t2,t3,t4;
		y1 = y1-c;
		y2 = y2+c;
	t1 = (int)(x1*(1-(m*m))*s1+y1*2*m*s1);
	t2 = (int)(x1*(m*m-1)*s1+y1*2*m*s1);
	t3 = (int)(x2*(1-m*m)*s1+y2*2*m*s1);
	t4 = (int)(y2*(m*m-1)*s1+y2*2*m*s1);
		t2 += c;
		t4 += c;
	setcolor(RED);
	rectangle((int)t1,t2,t3,t4);
	delay(5000);
	return 0;
}