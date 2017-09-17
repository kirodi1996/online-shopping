#include <bits/stdc++.h>
using namespace std;
#define n 3
int minCost(int a[n][n]){
	int cost[n][n];
	cost[0][0]=a[0][0];
	for (int i = 1; i <= n-1; ++i)
	{
		cost[i][0]=a[i][0]+cost[i-1][0];
	}
	for (int i = 1; i <= n-1; ++i)
	{
		cost[0][i]=a[0][i]+cost[0][i-1];
	}
	for (int i = 1; i <= n-1; ++i)
	{
		for (int j = 1; j <= n-1; ++j)
		{
			cost[i][j]=min(cost[i-1][j],min(cost[i][j-1],cost[i-1][j-1]))+a[i][j];
		}
	}
	return cost[n-1][n-1];
}
int main(){
	
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
		
	}
	cout<<minCost(a);
}