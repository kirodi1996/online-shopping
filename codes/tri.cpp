#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	vector<int> a;int triangle=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		a.push_back(s);
	}
	int i,j,k;
	sort(a.begin(),a.end());
	for (i=0,j=i+1; i < n-2; ++i,j++)
	{
		for ( k=2; k < n; ++k)
		{
			if(a[i]+a[j]>a[k] && (j!=k) && (k!=i) && (i!=j)){
				triangle++;
			}	
		}
	}
	cout<<triangle;
	
}