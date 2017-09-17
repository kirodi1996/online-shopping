#include <bits/stdc++.h>
using namespace std;
bool isstep(int n){
	int prev;
	prev=-1;
	while(n){
		int cur=n%10;
		if(prev==-1){
			prev=cur;
		}
		else if(abs(prev-cur)!=1){
			return false;
		}
		prev=cur;
		n/=10;

	}
	return true;
}

int step(int n,int m){
	for (int i = n; i <= m; ++i)
	{
		if(isstep(i)){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	step(n,m);
}