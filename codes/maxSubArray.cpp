#include <bits/stdc++.h>
using namespace std;
int sum (vector<int> A){
	int total=0,high=INT_MIN;
	for (long long int i = 0; i < A.size(); ++i)
	{
		total+=A[i];
		if(total>high && total>=A[i]){
			high=total;
		//	cout<<"high="<<high<<endl;
		}
		else if(total<A[i] && high<A[i]){
			total=A[i];
			high=A[i];
		//	cout<<"total="<<total<<endl;
		}
		/*if(total<0){
			total=0;
		}*/
		//cout<<"total="<<total<<" "<<"high="<<high<<endl;
	}
	return high;
}
int main(){
	vector <int> v;
	int n,s;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		v.push_back(s);
	}
	int v2=sum(v);
	cout<<v2;
}
