#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();

	while(t--){
		string s1,s2;
		getline(cin,s1);
		char ans[1000];
		int j=0,extra=0,flag=0;
		int len=s1.length();
		for (int i = 0; i < len; ++i)
		{
			//cout<<s1[i]<<endl;
			if(s1[i]==' '){
				cout<<(char)toupper(s1[0+extra]);
				cout<<'.';
				cout<<' ';
				extra=i+1;
				flag=1;
			}

		}
		cout<<(char)toupper(s1[0+extra]);
		if(flag){
			
			for (int i = extra+1; i < len; ++i)
			{
				cout<<(char)tolower(s1[i]);
				
			}
			cout<<endl;
		}
			
		else{
			for (int i = 1; i < len; ++i)
			{
				cout<<(char)tolower(s1[i]);
				
			}	
			cout<<endl;
		}

	}
}