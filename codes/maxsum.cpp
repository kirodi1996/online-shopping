#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s;
	std::vector<int> A;
	std::vector<int> B;
	cin>>n;
	cin>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		A.push_back(s);
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>s;
		B.push_back(s);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int k;
	cin>>k;
	int total=1n;
	int i=n-1,j=m-1;
	int l=n-1,o=m-1;
	std::vector<int> sum;
	sum.push_back(A[l]+B[o]);
	while(1){

		
		total++;
		if(total>k){
			break;
		}
		if(A[i]+B[o-1]==B[j]+A[l-1]){
			sum.push_back(A[i]+B[o-1]);
			total++;

			if(total>k){
				break;
			}
			sum.push_back(B[j]+A[l-1]);
			total++;
			if(total>k){
				break;
			}
			l--;
			o--;
			total++;
		}
		else if(A[i]+B[o-1]>B[j]+A[l-1]){
			o--;
		}
		else {
			l--;
		}
		
	
	}
	for (int f = 0; f < k; ++f)
	{
		cout<<sum[f]<<" ";	
	}
	
		
}