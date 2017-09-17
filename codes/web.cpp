#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a;
	string b[20000]="\0";
	string ub[20000]="\0";
	int i=0,j=0;
	while(n--){
		cin>>a;
		if(a=='+'){
			cin>>ub[i++];
		}
		else{
			cin>>b[j++];
		}
	}
	for (int k = 0; b[k]!="\0"; ++k)
	{
		
		cout<<b[k]<<" ";

	}
	cout<<"\n";
	for (int k = 0; ub[k]!="\0"; ++k)
	{
		
		cout<<ub[k]<<" ";
	}
	for(int i=0;b[i]!="\0";i++){
		for (int j= 0; ub[j]!="\0"; ++j)
		{
			if()
		}
		cout<<s[1]<<" ";
	}
}