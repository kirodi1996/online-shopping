#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mini=INT_MIN;
		int sum=0;
		int arr1[n],arr2[n],arr[n][n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr1[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>arr2[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = i; j < n; ++j)
			{
				sum+=arr2[i]+arr2[j];
				arr[i][j]=sum;
			}
		}
		
	}
}