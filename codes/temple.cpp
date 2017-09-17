#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,flag1=0,flag2=0;
		cin>>n;
		int a[n];
		int i=0,k;
		for (i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (k = 0; k < (n/2); ++k)
		{
			//cout<<i<<endl;
			if(a[0]!=1){
			//	cout<<"1";
				flag1=1;
				break;
			}
			if((a[k+1]-a[k])!=1){
			//	cout<<"2";
				flag1=1;
				break;
			}
		}
		//cout<<k;
		if(!flag1){
			//cout<<"hello";
			for(int j=k;j<n-1;j++){
		//		cout<<j<<endl;
				if((j==n-2) && a[j+1]!=1){
					//cout<<j;
				//cout<<"3";
					flag1=1;
					break;
				}
				if((a[j+1]-a[j])!=-1){
				//	cout<<"4";
					flag1=1;
					break;
				}
			}	
		}
		
		if(flag1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}