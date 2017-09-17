#include <bits/stdc++.h>
using namespace std;
//int dp[250]={-1};
int fibonci(int n){
	int f[n+1];
	f[1]=1;
	f[0]=0;
	
	for (int i = 2; i <= n; ++i)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	return f[n];
}
int main(){
	int fib;
	cin>>fib;
	cout<<fibonci(fib)<<endl;
}