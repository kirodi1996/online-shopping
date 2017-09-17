#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<bool> isPrime(n+1,true);
	isPrime[0]=false;
	isPrime[1]=false;
	for (int i = 2; i <= n; ++i)
	{
		if(isPrime[i])
		for(int j=2;i*j<=n;++j){
			isPrime[i*j]=false;
		}
	}
	for (int i = 0; i <= n; ++i)
	{
		if(isPrime[i] && isPrime[n-i]){
			cout<<i<<" ";
			cout<<n-i;
			break;
		}	
	}
	
}
