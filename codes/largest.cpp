#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> A,B;
	int dist;
	std::map<long long, int > hash;
	map<long long,bool> Hash;
	int s,n;long long sum=0;
	cin>>n;
	int k=0,l=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		A.push_back(s);
	}
	int j;
	for (int i = 0; i < n; ++i)
	{
		sum+=A[i];
		//B.push_back(sum);
		//cout<<sum<<endl;
		
		if(hash.find(sum)!=hash.end() ){
			cout<<"hello";
			if(i-hash[sum]>dist){
				k=i;
				l=hash[sum];

				//cout<<"1"<<endl;
			}
			
			//cout<<hash[sum]<<endl;;		
		}
		hash[sum]=i;
		//cout<<"2"<<endl;
	}
	for (int i = l; i < k; ++i)
	{
		cout<<A[i];
	}
	
}