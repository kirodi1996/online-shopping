#include <bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1){
		return 1;
	}

	return fact*fact(n-1);

}
int main(){
	int N;
	cin>>N;
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	int k=0;
	while(pow(2,k)<N)
	{
		k++;
	}	
	int M=1+N-pow(2,k);
	int L=pow(2,k-1)-1+min(pow(2,k-1),M);
	int R=pow(2,k-1)-1+max(0,M-pow(2,k-1));
	int t1=fact(N-1);
	t1=t1%1000000007;
	int t2=fact(L);
	t2=t2%1000000007;
	

}