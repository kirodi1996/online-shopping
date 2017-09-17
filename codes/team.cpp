#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,n,m,flag=0;
		cin>>n>>m;
		while(m--){
			cin>>a>>b;
		}
		if(n%2==0){
			flag=1;
		}
		if(flag){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}