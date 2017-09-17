#include <bits/stdc++.h>
using namespace std;
 int main(){
 	int n,s,x,min;
 	cin>>n;
 	vector <int> v;
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>s;
 		v.push_back(s);
 	}
 	min=(v[0]^v[1]);
 	for (int i = 1; i < n-1; ++i)
 	{
 		x=(v[i]^v[i+1]);
 		if(x<min){
 			min=x;
 		}
 	}
 	cout<<min;
 }