#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> v;
	int flag=0;
	int A;
	cin>>A;
	while(A!=0){
		v.push_back(A%10);
		A=A/10;
	}
	for(int i=0,j=v.size()-1;i<v.size()/2;i++,j--){
		if(v[i]=v[j])
			continue;
		else{
			flag=0;
		}
	}
	if(!flag){
		cout<<"False";
	}
	else{
		cout<<"True";
	}
}