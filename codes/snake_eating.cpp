#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,total=0;
		scanf("%d%d",&n,&q);
		int a[n],b[q];
		for (int i = 0; i < n; ++i){
		 	scanf("%d",a[i]);
		 }
		 sort(a,a+n); 
		 /*for (int i = 0; i < n; ++i)
		 {
		 	cout<<a[i]<<" ";
		 }*/
		 //cout<<endl;
		 for(int i=0;i<q;i++){ 
		 	cin>>b[i];
		 	total=0;
		 
		 for(int j=n-1,k=0;j>=0 && j>k;j--){
		 		if(a[j]>=b[i]){
		 			total++;
		 		}
		 		else if(a[j]>a[k]){
		 			a[j]++;
		 			j++;
		 			k++;
		 			 		}
		 	}

		 	cout<<total<<endl;
		 }

	}
}