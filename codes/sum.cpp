#include <bits/stdc++.h>
using namespace std;
int main(){
	int B,n,c;
	std::vector<int> A,ans;
	for (int i = 0; i < n; ++i)
	{
		cin>>c;
		A.push_back(c);
	}
	if(n==0){
		return 0;
	}
	map<int, int> hash;
	int required;
	for (int i = 0; i < n; ++i)
	{
		required =B-A[i];
		if(hash.find(required)!=hash.end()){
			ans.push_back(required);
			ans.push_back(i+1);
			return ans;
		}
		else if(hash.find(required)==hash.end()){
			A[num[i]]=i+1;
		}
		
	}
	return ans;
}