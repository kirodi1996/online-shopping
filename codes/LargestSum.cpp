#include <bits/stdc++.h>
using namespace std;
int LargestSum(int *a,int n){
	int so_far=INT_MIN,max_end=0;
	for (int i = 0; i < n; ++i)
	{
		max_end=max_end+a[i];
		if(max_end>so_far){
			so_far=max_end;
		}
		if(max_end<0){
			max_end=0;
		}
	}
	return so_far;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<LargestSum(a,n)<<endl;
}