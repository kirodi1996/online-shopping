#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
  int gd=DETECT,gm;
  float x2,y2;
  initgraph(&gd,&gm,NULL);
  int u,x1=5,y1=300,t=0;
  float theta,x,y;
  cout<<"Enter the velocity and angle:";
  cin>>u>>theta ;
  while(1)
  {  cleardevice();
   x= u*cos(theta*3.14/180)*(t/1000);
    y= u*sin(theta*3.14/180)*(t/1000) - (5*t*t)/1000000 ;
    x2=x1+x;
    y2=y1-y;
    circle(x1,y2,5) ;
    delay(1000);
    t=t+1000;
    if(y2==100)
   break;
  }

 closegraph();
}