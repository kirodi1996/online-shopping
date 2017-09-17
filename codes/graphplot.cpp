#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main() 
{
    
     int gd = DETECT, gm;
     initgraph(&gd, &gm, NULL);
     int iSecret,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    char c;
    int j;
     srand (time(NULL));
     outtextxy(10,10,"Enter the no") ;

     cin>>j;
     
         line(50,50,50,300);
         line(50,300,300,300);
    
    while(j--)
     {
        
        
        iSecret = rand() % 6 + 1;
        cout<<"Random no::"<<iSecret;
        cout<<"\n";
        if(iSecret==1)
        {
            c1++;
        }
        else if(iSecret==2)
        {
            c2++;
        }
        else if(iSecret==3)
        {
                c3++;
        }
        else if(iSecret==4)
        {
                c4++;
        }
        else if(iSecret==5)
        {
                c5++;
        }
        else if(iSecret==6)
        {
                c6++;
        }
        if(c=='e')
            break;
    }
        
    cout<<c1;
    rectangle(60,300-c1*10,80,300);
    rectangle(100,300-c2*10,120,300);
    rectangle(140,300-c3*10,160,300);
    rectangle(180,300-c4*10,200,300);
    rectangle(220,300-c5*10,240,300);
    rectangle(260,300-c6*10,280,300);
    delay(1000);

    getch();
    closegraph();
   return 0; 

}
