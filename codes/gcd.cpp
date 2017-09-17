#include <bits/stdc++.h>
using namespace std;
int gcd(int A,int B){
	if(A<B)
	{
		swap(A,B);
	}
	if(B==0){
		return A;
	}
	gcd (A%B,B);
}
int main(void){
	int A,B;
	cin>>A>>B;
	if(A<B){
		swap(A,B);
	}
	int c=gcd(A,B);
	cout<<c;
}
