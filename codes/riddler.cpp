	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			long long int A,B,M,ans;
			cin>>A>>B>>M;
			ans=(B/M)-ceil(float(A)/float(M))+1;
			printf("%lld\n",ans);
			//cout<<ceil(float(A)/float(M))<<endl;
			//cout<<(B/M)<<endl;
		}
	}