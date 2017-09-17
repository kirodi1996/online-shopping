#include <bits/stdc++.h>
using namespace std;
int sparse(int *a,int row,int col,int low,int high){
	
	int spars[row][col];
	for (int i = 0; i < row; ++i)
	{
		spars[i][0]=i;
	}
	for (int j = 1; (1<<j) <=row; ++j)
	{
		for (int i = 0;  (i+(1<<j)-1)<row; ++i)
		{
			if(a[spars[i][j-1]]<a[spars[i+(1<<(j-1))][j-1]]){
				spars[i][j]=spars[i][j-1];
			}
			else{
				spars[i][j]=spars[i+(1<<(j-1))][j-1];
			}
		}
	}
	/*return spars;*/
	int l=high-low+1;
	int k=(int)log(l);
	return min(a[spars[low][k]],a[spars[low+l-(1<<k)][k]]);
}
int main(){
	int n,qs,qe;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>qs >>qe;
	int col=(int)log2(n)+1;
	int ans=sparse(a,n,col,qs,qe);
	cout<<ans;
	
}