#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int i=0;
		int flag=0,flag1=0;
		cin>>s;
		int n=s.length();
		//cout<<n;
		while(n--){
			if(s[i]=='1'){
				//cout<<"Hello";
				flag=1;
			}
			if (s[i]=='0' && flag){
					flag1=1;
			}
			if(flag1 && s[i]=='1'){
				flag=0;
			}
			i++;
		}
		if(flag){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
}