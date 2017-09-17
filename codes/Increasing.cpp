#include <bits/stdc++.h>
using namespace std;
int lis(int *a,int n){
	int lcs[n+1],max=0;
	for (int i = 0; i < n; ++i)
	{
		lcs[i]=1;
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(lcs[i]<lcs[j]+1 && a[i]>a[j]){
				lcs[i]=lcs[j]+1;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(lcs[i]>max){
			max=lcs[i];
		}
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<lis(a,n);
}