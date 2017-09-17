#include <bits/stdc++.h>
using namespace std;
int a[2500][2500]={0};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,s;
		cin>>n>>k;
		int count=0;
		int b[n][0];
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i][0];
			for (int j = 0; j < b[i][0]; ++j)
			{
				cin>>s;
				a[i][s]=1;
			}
		}
		//cout<<a[0][2];
		for (int i = 0; i < n-1; ++i)
		{
			int flag=1;
			for (int j = i+1; j < n; ++j)
			{
				 for (int p = 1; p <= k; ++p)
				 {
				 	if(a[i][p]!=1 && a[j][p]!=1){
				 		flag=0;
				 		break;
				 	}
				 }
				 if(flag==1){
				 	count++;
				 }
			}
		}
		cout<<count<<endl;
	}
	
}