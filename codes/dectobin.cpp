#include <bits/stdc++.h>
using namespace std;
int main(){
	int A;
	string s;
	cin>>A;
	while(A>0){
		//A%2;
		//cout<<A%2<<" ";
		if(A%2==1){
			s.push_back('1');
		}
		else{
			s.push_back('0');
		}
		A=A/2;
	}
	reverse(s.begin(),s.end());
	cout<<s;
}