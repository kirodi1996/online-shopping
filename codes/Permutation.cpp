#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	//	int a[n];
		if(n%2==0){
			for (int i = 1; i <= n; i=i+2)
			{
				cout<<i+1<<" "<<i<<" ";	
			}	
			cout<<endl;
		}
		else{
			for (int i = 1; i <= n-3; i=i+2)
			{
				cout<<i+1<<" "<<i<<" ";
			}
			int i=n-2;
			cout<<i+1<<" "<<i+2<<" "<<i;
			cout<<endl;
		}
		
	}
}