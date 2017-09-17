#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,b,l,r,n1,j,l1,r1,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		l1=n%b;
		n1=n-l1;
		l=l1;
		r1=n/b;
		//cout<<"r1="<<r1;
		j=r1/2;
		l=l1+(j*b);
		//cout<<"  l="<<l;
		r=l*(r1-j);
		//cout<<" r="<<r1-j<<endl;

		
		cout<<r<<endl;
	}
}