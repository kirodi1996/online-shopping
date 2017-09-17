#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	int m;
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	m=A[0]^A[1];
	for (int i = 1; i < n-1; ++i)
	{
			m=(m^A[i+1]);
			//cout<<m<<" ";
	}
	cout<<m;
}
