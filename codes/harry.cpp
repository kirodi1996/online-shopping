#include <bits/stdc++.h>
using namespace std;
int main(){
		int t;
		cin>>t;
		while(t--){
			long long int N,S,sum=0,flag=0,count=0;
			cin>>N>>S;
			std::vector<int> v(N);
			for (int i = 0; i < N; ++i)
				{
					cin>>v[i];
				}	
			sort(v.begin(),v.end());
			int i;
			for ( i = 0; i < N; ++i)
			{

				sum+=v[i];
				S-=v[i];
				//cout<<"sum="<<sum<<"s="<<S<<" "<<(N-(i+1))*v[i]<<" "<<v[i]<<endl;
				if(((N-(i+1))*v[i])==S){
					flag=1;
					break;
				}

			}
			if(flag){
					cout<<v[i]<<endl;
				}
			else{
				cout<<"-1"<<endl;
			}	
		}	
}