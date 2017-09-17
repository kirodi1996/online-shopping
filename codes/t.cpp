#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	std::vector<int> b;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	b=v;
	v.push_back(4);
	v.push_back(5);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < b.size(); ++i)
	{
		cout<<b[i]<<" ";
	}

}