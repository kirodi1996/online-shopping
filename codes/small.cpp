#include <bits/stdc++.h>
using namespace std;
int main(){
	int top=-1;
	int n,s;
	vector<int> S,A,B,C;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		A.push_back(s);
		while(top!=-1){
			if(S[top]<A[i]){
				cout<<"hello";
				B.push_back(S[top]);
				C.push_back(A[i]);
				break;
			}
			top=top-1;
		}
		if(top==-1){
			B.push_back(-1);
			C.push_back(A[i]);
		}
		S=C;
		top=C.size()-1;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<B[i]<<" ";
	}
	
}