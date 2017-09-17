#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector <vector <int>> A;
	vector <int> B;
	int n,m,s;
	cin>>n>>m;
	int l=0,r=n*m-1;
	for(int i = 0;i < n; ++i){
		for (int j = 0; j < m; ++j)
		{
			cin>>s;
			B.push_back(s);
		}
		A.push_back(B);
		B.clear();
	}
	int target;
	cin>>target;
	while(l!=r){
		int mid=(l+r-1)>>1;
		if(A[mid/m][mid%m]<target){
			l=mid+1;
		}
		else{
			r=mid;
		}
		
	}
	if(A[r/m][r%m]==target)
			cout<<"1";
		else{
			cout<<"2";
		}
}