#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,e,m;
		
		cin>>n>>k>>e>>m;
		long long int a[n-1];
		n=n-1;
		long long int l=n;
		long long int ans=0,marksl=0,marksls=0;
			for(int j=0;j<n;j++){
				long long int marks=0,marks1;
				for (int i = 0; i < e; ++i)
				{
					cin>>marks1;	
					marks=marks+marks1;
				}
				//cout<<marks<<endl;
				a[j]=marks;	
			}
			for(int i=0;i<e-1;++i){
					cin>>marksl;
					marksls=marksls+marksl;
			}	

		
		//cout<<"hello";
		sort(a,a+n);
		/*for (int i = 0; i <n ; ++i)
		{
					cout<<a[i]<<" ";
		}*/
		ans=a[n-k]-marksls+1;
		if(ans<=m){
			cout<<ans<<endl;
		}
		else if(ans<0){
			cout<<"0";
		}
		else{
			cout<<"Impossible"<<endl;
		}
	}
}