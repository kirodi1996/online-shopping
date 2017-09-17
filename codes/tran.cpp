#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,m,p;
	cin>>n>>k>>m;
	int t[k][2];
	int s[m];
	int count=0;
	map<int, int> hash;
	for (int i = 0; i < k; ++i)
	{
		int j;
		cin>>p;
		if(hash.find(p)==hash.end()){
			cin>>j;
			hash[p]=j;	
		}
		else if(hash.find(p)!=hash.end()){
			cin>>j;
			hash[hash[p]]=j;
		}
		
	}
	/*for (int i = 0; i < 11; ++i)
	{
		cout<<i<<" "<<hash[i];
		cout<<endl;
	}
	*/
	for (int i = 0; i < m; ++i)
	{
		cin>>s[i];
	}
	int i,j,flag=0;
	for ( i = 0,j=m-1; i < j; )
	{
		if(hash[s[i]] ==s[j] || hash[s[j]]==s[i] ||hash[s[i]]==hash[s[j]] || hash[hash[s[i]]]==s[j] || hash[hash[s[j]]]==s[i]){
		//	cout<<"i="<<i<<"j="<<j<<endl;
			count++;
			i++;
			j--;
			flag=1;
		}
		
		else{
			j--;
			flag=0;
		}
		
	}
	if(j=i+1 && flag){
		cout<<count*2<<endl;
		//return 0 ;	
	}
	else{
		cout<<count*2+1<<endl;
		//	
		return 0;
	}
	
}