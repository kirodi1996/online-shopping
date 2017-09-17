#include <bits/stdc++.h>
using namespace std;
int main(){
	int A;
	cin>>A;
	char str[20];
	map <long long ,bool> Hash;
	//cout<<Hash[0];
	int n=sprintf(str,"%d",A);
	for (int i = 0; i < n; ++i)
	{
		long long mul=1;
		for (int j = i; j < n; ++j)
		{
			cout<<(long long)(str[j]-'0')<<endl;
			mul*=(long long)(str[j]-'0');
			cout<<"mul"<<mul<<endl;
			if(Hash.find(mul)!=Hash.end()){
			//	cout<<"1";
				//return 0;
			}
			
				Hash[mul]=true;
			
		}
	}
	//cout<<"1";
}