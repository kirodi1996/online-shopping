#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		vector <long long int> v;
		long long int n,sum=0,sump=0,sumn=0,p=0;
		scanf("%lld",&n);
		long long int A[n];
		for (long long int i = 0; i < n; ++i)
		{
			scanf("%lld",&A[i]);
		}
		for( long long int i=0;i<n;i++){
			if(A[i]>=0){

				
					
					sump+=A[i];
					p++;
					//cout<<A[i]<<" ";		
			}
		
			
			if(A[i]<0){
				//sumn+=A[i];
				v.push_back(-A[i]);
			}
		
			
		}
		//cout<<p<<" ";
		sort(v.begin(),v.end());
		int avg=sump/p;
		//cout<<avg<<" ";
		if(v.size()==0){
			sum=(sump*p);	
		}
		else{
			for (long long int i = 0; i < v.size(); ++i)
			{
				//cout<<v[i]<<" ";
				while(avg>=v[i] && i<v.size()){
					p++;
					sump+=(-v[i]);
					//cout<<v[i]<<" ";
					i++;
				}	
					
			//cout<<p<<" ";
				//cout<<sump<<" "<<p<<" ";
				sum+=(-v[i]);
			}	
			v.clear();
			sum=sum+(p*sump);
		}
		
		printf("%lld\n",sum);
	}	
}