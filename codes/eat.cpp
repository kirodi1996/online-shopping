#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q,total=0;
		scanf("%d%d",&n,&q);
		int a[n],b[q];
		for (int i = 1; i <= n; ++i){
		 	scanf("%d",&a[i]);
		 }
		 sort(a+1,a+n+1); 
		/* for (int i = 1; i <= n; ++i)
		 {
		 	cout<<a[i]<<" ";
		 }*/
		 //cout<<endl;
		 for(int i=1;i<=q;i++){ 
		 	scanf("%d",b[i]);
		 	total=0;
		 //	cout<<"hello";
		 for(int j=n,k=0;j>=1 && j>k;j--){
		 		//cout<<"hello";

		 		if(a[j]>=b[i]){
		 			total++;
		 		}
		 		else if(a[j]<b[i] && j>k){
		 			int l=0;
		 			l=b[i]-a[j];
		 			k=k+l;
		 		//	cout<<l<<"-------"<<endl;
		 		if(a[k]<a[j] ){
		 		
		 			a[j]=a[j]+l;
		 			j++;
		 					
		 					
		 			}
		 		}
		 	}

		 	printf("%d\n",total);
		 }

	}
}