#include <bits/stdc++.h>
using namespace std;
int power(int n,int m){
	if(m==0){
		return 1;
	}

	return n*power(n,m-1);
}
int main(){
	int A,B,C;
	cin>>A>>B;
	int d=power(A,B);
	cout<<d%C;
}