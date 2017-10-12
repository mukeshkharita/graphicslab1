#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int gd=DETECT,gm,i,j,k,l;
  int p[]={35,180,20,180,50,130,120,130,150,180,135,180};
  initgraph(&gd,&gm,NULL);
  //for(i=0;i<=200;i++)
  //{
  //use this function to create polygon
  drawpoly(6,p);
  line(75,180,95,180);
  circle(55,180,20);
  circle(115,180,20);
  line(0,200,600,200);
  circle()
    //}
    delay(1000);
  return 0;
}
