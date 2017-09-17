#include<bits/stdc++.h>
int main()
{
	srand(time(NULL));
	int t=0,m=0;
	scanf("%d",&t);
	int s=t;
	double x,y;
	while(t--)
	{
		x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      if(x*x+y*y<=1)
      	m++;
	}
	printf("m=%d t=%d\n",m,s);
	double ans=(double)(4.0*m)/(s*1.0);
	printf("value of pi=%f",ans);
}
