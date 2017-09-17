#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,k,time,max=0;
		cin>>n>>k>>time;
		int te[n],tm[n],th[n];
		int pe[n],pm[n],ph[n];
		for (int i = 1; i <= n; ++i)
		  	{
		  		cin>>te[n]>>tm[n]>>th[n];

		  	}  	
		for(int i = 1; i <= n; ++i)
			{
				cin>>pe[n]>>pm[n]>>ph[n];
			}
		for (int i = 1; i <= n; ++i)
			{
				if(te[i]<time && max<pe[i]){
					max=pe[i];
				}
				if(tm[i]<time && max<pm[i]){
					max=pm[i];
				}
				if(th[i]<time && max<ph[i]){
					max=ph[i];
				}
			}
			cout<<max<<endl;	
	}
	
}