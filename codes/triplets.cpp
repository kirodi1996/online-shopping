#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int p,q,r,max=0;
		long long int sum=0;
		scanf("%d %d %d",&p,&q,&r);
		int A[p],B[q],c;
		vector<int> C;
		for (int i = 0; i < p; ++i)
		{
			scanf("%d",&A[i]);
		}
		for (int i = 0; i < q; ++i)
		{
			scanf("%d",&B[i]);
			if(B[i]>max){
				max=B[i];
			}
		}
		for (int i = 0; i < r; ++i)
		{
			scanf("%d",&c);
			if(c<=max){
				C.push_back(c+max);
			}
		}
		for(int i=0;i < C.size();i++){
			for (int j = 0; j <p ; ++j)
			{
				if(A[j]<=max){
					sum+=C[i]*(A[j]+max);
					//cout<<"A[j]="<<A[j];
				}	
			}
			
		}
		int ans=sum%m;
		printf("%d\n",ans);

	}
}