#include <bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	int t;
	cin>>t;
	while(t--){
		string s;
		int flag=0,count=0;
		cin>>s;
		int n=s.length();
		
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1' && s[i+1]=='0' && (i+1)<n){
				i++;
				//cout<<"p";
				while((s[i]=='0') && (i<n)){
					i++;
					flag=1;
					//cout<<"cc"<<endl;
				}
			}
			if(i<n && s[i]=='1' && flag){
				count++;
				i--;
			}
			flag=0;
		}
		cout<<count<<endl;
	}
}