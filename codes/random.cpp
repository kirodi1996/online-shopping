#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,s,m,nn;
	float t,b,sum,x,mul,sigma;
	cout<<"enter values of mul and sigma:";
	cin>>mul>>sigma;
	cout<<"values of x are:"<<endl;
	for(m=1;m<=nn;m++)
	{
		sum=0;
		for(i=1;i<=12;i++)
		{
			x=rand()/32+68;
			sum+=x;

		}
		t=mul+sigma+(sum-b);
		cout<<t<<endl;
	}
}