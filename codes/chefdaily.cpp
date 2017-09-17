#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag=1;
		for (int i = 0; i < s.length(); ++i)
		{
			
			if((s[i]=='E' && s[i+1]=='C') || (s[i]=='S' && (s[i+1]=='E' || s[i+1]=='C') ) && ((i+1)<s.length())){
				 flag=0;
				 break;
				}
		}
		if(flag)
			cout<<"yes"<<"\n";
		else
			cout<<"no"<<"\n";
	}
}