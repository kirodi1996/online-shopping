#include <bits/stdc++.h>
using namespace std;
int main(){

	vector <int> A;
	vector<int> ans;
	int B,N,s;
	cin>>N;
	for (int i = 0; i < N; ++i)
	{
		cin>>s;
		A.push_back(s);
	}
	cin>>B;
	sort(A.begin(),A.end());
	for (int i = 0; i < N-4; ++i)
	{
		for (int j = i+1; j < N-3; ++j)
		{
			int k=j+1;
			int l=N-1;
			while(k<l ){
				int req=B-(A[i]+A[j]);
				if(A[k]+A[l]==req){
				//	cout<<"1--->"<<endl;
					ans.push_back(A[i]);
					ans.push_back(A[j]);
					ans.push_back(A[k]);
					ans.push_back(A[l]);
					break;
				}
				else if(A[k]+A[l]>req && k<l){
				//	cout<<"2--->"<<endl;
					l--;
				}
				else if(A[k]+A[l]<req && k<l){
				//	cout<<"3--->"<<endl;
					k++;
				}

			}
				
		}
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
}

