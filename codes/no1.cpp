#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int A;
	cin>>A;
	int total=0;
	while(A!=0){
		if(A%2==1){
			total++;
		}
		A/=2;
	}
	cout<<total;
}