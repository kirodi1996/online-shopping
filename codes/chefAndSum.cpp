#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	long long	int n;
		cin>>n;
		long long int a[n],sum=0,min=LLONG_MAX;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
	  long long	int temp1=0;
	  long long	int temp2=sum;
	  long long	int ans=0;
		for (int i = 0; i < n; ++i)
		{
			temp1+=a[i];
	//		cout<<temp1<<" "<<temp2<<" "<<ans<<endl;
			if(temp1+temp2<min){
				min=temp1+temp2;
				ans=i+1;
			}
			
			temp2-=a[i];
			
		}
			cout<<ans<<endl;
	}
}