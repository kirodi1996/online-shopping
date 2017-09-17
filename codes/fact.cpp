#include <bits/stdc++.h>
using namespace std;
int fact(int a){
	if(a==1){
		return a;
	}
	a=a*fact(a-1);
	return a;
}
int main(void){
	int n;
	cin>>n;
	int c=fact(n);
	cout<<c;
}
