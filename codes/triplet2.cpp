	#include <bits/stdc++.h>
	#define x 1000000007
	using namespace std;
	int main(void){
		int t;
		scanf("%d",&t);
		while(t--){
			int p,q,r,max=0;
			long long int sum=0,sumA=0,sumC=0,m=0,n=0;
			scanf("%d %d %d",&p,&q,&r);
			int A[p],B[q],C[r];
			int A1[100001]={0},B1[100001]={0},C1[100001]={0};
			
			for (int i = 1; i <= p; ++i)
			{
				scanf("%d",&A[i]);
				
				A1[A[i]]+=A[i];
				
			}
			for (int i = 1; i <= q; ++i)
			{
				scanf("%d",&B[i]);
				
			}
			for (int i = 1; i <= r; ++i)
			{
				scanf("%d",&C[i]);
				C1[C[i]]+=C[i];
			
			}
			/*for (int i = 1; i <= p; ++i)
			{
					cout<<C1[i]<<" ";
			}*/
			//cout<<A1[3];
			for(int i=1;i<=q;i++){
				for(int j=1;j<=B[i];j++){

					sumA=sumA+A1[j];
					sumC=sumC+C1[j];
					if(A1[j]!=0){
						m=m+A1[j]/j;
					}
					if(C1[j]!=0){
						n=n+C1[j]/j;
					}

				}
				//cout<<"sumA="<<sumA<<"sumC="<<sumC;
				sum+=((B[i]*n)+sumC)*(sumA+(m*B[i]));
				
				//cout<<sum<<endl;
				sumA=0;
				sumC=0;
				m=0;
				n=0;
			}
			long long int ans=sum%x;
			printf("%lld\n",ans);
		}
	}