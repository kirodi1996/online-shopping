#include <bits/stdc++.h>
using namespace std;
vector <int> plusone (vector<int> v){
	reverse(v.begin(),v.end());
	vector <int> ans;
	int carry=1,sum=0;
	for (int i = 0; i < v.size(); ++i)
	{
		sum=v[i]+carry;
		ans.push_back(sum%10);
		carry=sum/10;
	}
	while(carry){
		ans.push_back(carry%10);
		carry=carry/10;
		//cout<<"hello";
	}
	while(ans[ans.size()-1]==0 && ans.size()>1){
		ans.pop_back();
	}
	reverse(ans.begin(),ans.end());
	reverse(v.begin(),v.end());
	return ans;
}
int main(){
	vector <int> A;
	int n,f;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>f;
		A.push_back(f);
	}
	 vector <int> B=plusone(A);
	 for (int i = 0; i < B.size(); ++i)
	 {
	 	cout<<B[i];
	 }

}
