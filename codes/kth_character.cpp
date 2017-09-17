#include <bits/stdc++.h>
using namespace std;
int main(){
		int t;
		cin>>t;
		while(t--){
			long long int n;
			int flag=0;
			cin>>n;
			while(n%2!=1){
				n/=2;
				if(n==1){
					flag=1;
					break;
				}
			}
			if(flag){
				cout<<"a"<<endl;
			}
			else{
				int k=n%4;
				if(k==1){
					cout<<"a"<<endl;
				}
				else if(k==2){
					cout<<"a"<<endl;
				}
				else if(k==3){
					cout<<"c"<<endl;
				}
			}
		}
}