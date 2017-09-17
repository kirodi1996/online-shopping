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
	for (i=0; i < n-2; ++i)
	{
		for(j=i+1;j<n-1;j++){
			for (k=j+1; k < n; ++k)
			{
				
				if(a[i]+a[j]>a[k] && (j!=k) && (k!=i) && (i!=j)){
					//cout<<"i="<<i<<"j="<<j<<"k="<<k<<endl;
					triangle++;
				
				}
			}
		}
				
	}
	cout<<triangle;
	
}