#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;	
	//	int n=s.size();
		long long int a[10]={0};
		for (int i = 0; i < s.size(); ++i)
		{
				a[ int(s[i])-48]++;

		}
		for (int i = 6; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if(i==j && a[i]>=2){
						int k=i*10+j;
						if(k>64 && k<90){
						//	cout<<"hello";
						cout<<char(k);	
					}	
				}
				else if(a[i]>0 && a[j]>0 && i!=j){
						int k=i*10+j;
						if(k>64 && k<90){
						cout<<char(k);	
					}	
				}
				
				
			}
		}
		cout<<endl;

	}
}