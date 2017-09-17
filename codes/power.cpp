#include <bits/stdc++.h>
using namespace std;
int main(void){
	int base;
	lomg long int ans=1,n,d;
	cin>>base>>n>>d;
	if(n==0){
		return 1%d;
	}
	while(n>0){
		if(n%2==1){
			ans=(ans*base)%d;
			n--;
		}
		else{
			//cout<<"hello";
			base=(base*base)%d;
			//cout<<base*base<<endl;
			cout<<ans<<endl;
			n/=2;
		}
		//cout<<ans<<endl;
	}
	if(ans<0){
		ans=(ans+d)%d;
	}
	cout<<ans<<endl;
}