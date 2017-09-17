#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m;
		cin>>n>>m;
		long long int j=0,total=0,flag=0;
		long long int i=0,k;
		k=n+m+1;
		long long int sum=(k*(k+1))/2;
		long long int ans=sum-m;
		cout<<ans<<endl;
	}
}