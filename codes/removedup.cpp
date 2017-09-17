#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	vector <int> A;
	//int n=A.size();
    int i=0,k;
    for (int i = 0; i < n; ++i)
    {
    	cin>>x;
    	A.push_back(x);
    	//cout<<"hello";
    }
    for(k=i+1;k<n;i++){
       while(A[i]==A[k] && k<n){
           k++;
       }
       A[i+1]=k;
       cout<<"i="<<i<<"k="<<k;
    
   }
   int l=i+1;
    for(i=0;i<l;i++){
       cout<<A[i]<<" ";
    
   }
}