	#include <bits/stdc++.h>
	#define x 1000000007
	using namespace std;
	int main(void){
		int t;
		scanf("%d",&t);
		while(t--){
			long long int p,q,r,max=0,j=0,k=0;
			long long int sum=0,sumA=0,sumC=0,m=0,n=0,s;
			scanf("%lld %lld %lld",&p,&q,&r);
			vector<long long int> A,B,C;
			//int A1[100001]={0},B1[100001]={0},C1[100001]={0};
			
			for (int i = 0; i < p; ++i)
			{
				
				scanf("%lld",&s);
				A.push_back(s);				
			}
			for (int i = 0; i < q; ++i)
			{
				scanf("%lld",&s);
				B.push_back(s);
				
			}
			for (int i = 0; i < r; ++i)
			{
				scanf("%lld",&s);
				C.push_back(s);
			}
			sort(A.begin(),A.end());
			sort(B.begin(),B.end());
			sort(C.begin(),C.end());
			for(int i=0;i<q;i++){
				while(B[i]>=A[j] && j<p){
					sumA+=A[j];
					m++;	
					j++;
					
					
				}
				while(B[i]>=C[k] && k<r){
					
					sumC+=C[k];
					n++;
					k++;
					
					
				}	
				sum+=((((B[i]*n)+sumC)%1000000007)*((sumA+(m*B[i]))%1000000007)%1000000007);
				sumA=0;
				sumC=0;
				m=0,j=0,k=0;
				n=0;
		
			}

/*
cout<<"----------------------------------------Yeh Kyun Bhai,wese shyd frk ni pdra isse------------------------";
			 int ans=sum;
			if(ans>1000000007){
				ans=sum%x;
			}
*/			
			printf("%lld\n",sum%1000000007);	
		}
			
			
	}
