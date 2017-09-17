#include <bits/stdc++.h>
using namespace std;

long long int  TotalTree(long long int n){
	
   int lookup[n+1];	
	lookup[0]=1;
   lookup[1]=1;
   lookup[2]=1;
   int k=3,l;
   while(n>=k){
      l=1;
      while(l>0){
         lookup[k]=(l)*lookup[k-1]+(l)*lookup[l-2];
      }
   }
   

}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<TotalTree(n)<<endl;
	}
}