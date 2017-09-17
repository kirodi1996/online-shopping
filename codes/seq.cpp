#include <bits/stdc++.h>
using namespace std;
int main(){
	int D,A=3,B=11,C=7;
	int s;
	vector<int> initial;
	for (int i = 0; i < 3; ++i)
	{
		cin>>s;
		initial.push_back(s);
	}
	cin>>D;
	int k=D;
	vector<int> final(3,0);
	vector<int> ans;
	//cout<<initial[0]<<" "<<initial[1]<<" "<<initial[2]<<" ";
	while(1){
		int m=min(initial[0],min(initial[1],initial[2]));
		//cout<<m;
		if(ans.empty()){
			ans.push_back(m);
		}
		else if(!ans.empty() && ans.back()!=m){
			j
			ans.push_back(m);
			
		}
		if (m==initial[0])
		{
			initial[0]=ans[final[0]]*A;
			final[0]+=1;
		}
		else if (m==initial[1])
		{
			initial[1]=ans[final[1]]*B;
			final[1]+=1;
		}
		else if (m==initial[2])
		{
			initial[2]=ans[final[2]]*C;
			final[2]+=1;
		}

	}
	for (int i = 0; i < k; ++i)
	{
		cout<<ans[i]<<" ";
	}
}