#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int flag=0,rem;
	int A,B=0;
	cin>>A;
	int n=abs(A);
	while(abs(A)!=0){
		rem=abs(A)%10;
		B=B*10+rem;
		A=abs(A)/10;
	}
	//cout<<B;
	/*bool test=A==B;
	cout<<test;*/
	if(n==B){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}