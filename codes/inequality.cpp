#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		long long int count=0;
		cin>>a>>b>>c>>d;
		for (int i=a; i<=b && i<d; ++i)
		{
			
			if(i>=c)
			{
				count+=(d-i);
			}
			else if (i<c)
			{
				count+=(d-c+1);
			}
		}
		cout<<count<<"\n";	
	}
	
}