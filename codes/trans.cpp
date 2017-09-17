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
	
	for (int i = 0; i < m; ++i)
	{
		cin>>s[i];
	}
	int i,j,flag=0;
	vector<vector <int>>v;
	int f;
	vector <int> temp;
	for (int i = 0; i < n; ++i)
	{
		temp.push_back(hash[i]);
		f=hash[i];
		while(hash.find(f)!=hash.end() || ((hash[f])!=0) && (find(temp.begin(),temp.end(),hash[f])==temp.end())){
			temp.push_back(hash[f]);
			f=hash[f];
			cout<<"1"<<endl;
		}
		v.push_back(temp);
		temp.clear();
	}/*
	for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < v[i].size(); ++j)
			{
				cout<<v[i][j]<<" ";
			}
		}*/	
}