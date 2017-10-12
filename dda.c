#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int gd=DETECT,gm,x1,y1,x2,y2,i,j,k,length,cor1,cor2;
  float dx,dy,x,y;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  initgraph(&gd,&gm,NULL);
  if(abs(x2-x1)>abs(y1-y2))
    length = abs(x2-x1);
  else
    length = abs(y1-y2);
  dx = (x2-x1)/(float)length;
  dy = (y2-y1)/(float)length;
  x = x1+0.5;
  y = y1+0.5;
  //printf("%d\n",length);
  //printf("%d %d\n",dx,dy);
  cor1 = ((int)x);
  cor2 = ((int)y);
  for(i=1;i<=length;i++)
    {
      printf("%d %d\n",((int)x),((int)y));
      putpixel(x,y,YELLOW);
      //putpixel(round(x),round(y),RED);
      //printf("%d %d ",((int)x),((int)y));
      //line(((int)x),((int)y),cor1,cor2);
      //line(100,100,200,200);
      x += dx;
      y += dy;
      cor1 = ((int)x);
      cor2 = ((int)y);
    }
  delay(50000);
  return 0;
}
