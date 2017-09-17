#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,c;
	cin>>n;
	c=sqrt(n);
	int b[c];
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			b[i]=i;
			b[i+1]=n/i;	
		}
		
	}
	sort(b+1,b+c+1);
	for (int i = 1; i <= sqrt(n); ++i)
	{
		cout<<b[i]<<" ";
	}
}