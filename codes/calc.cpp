	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			long long int n,b,c,c1=0,c2,c22,i;
			cin>>n>>b;
			c1=n%b;
			n-=c1;
			c2=n/b;
			i=c2/2;
			c=c1+(i*b);
			c22=c*(c2-i);
			cout<<c22<<endl;
		}
	}