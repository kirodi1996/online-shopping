#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int flag1=0;
		int flag2=0;
		cin>>s;
		int n=s.length();
		for (int i = 0; i < n; ++i)
		{

			if(s[i]=='U' && ((s[i+1]=='D' && i+1<n) || (i+1==n))){
				//cout<<"Ui="<<i+1<<endl;
				flag1++;
			}
			else if(s[i]=='D' && ((s[i+1]=='U' && i+1<n) || (i+1==n))){
				//cout<<"Di="<<i+1<<" "<<s[i]<<" "<<s[i+1]<<endl;
				flag2++;
			}


		}
		// /cout<<flag1<<" "<<flag2;
		cout<<min(flag2,flag1)<<endl;


	}
}