#include <bits/stdc++.h>
using namespace std;
unsigned long long int fact(int n){
	if(n==1){
		return 1;
	}
	return (n*fact(n-1));
}
int main(){
	int n;
	cin>>n;
	unsigned long long int j=fact(2*n)%1000000007;
	unsigned long long int k=fact(n+1);
	unsigned long long int l=fact(n);
	cout<<j<<" "<<k<<" "<<l<<endl;
	cout<<((j)/((k)*(l)));
}