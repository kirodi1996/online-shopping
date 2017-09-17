#include <bits/stdc++.h>
using namespace std;
int main(void){
	string A;
	int s=0,n;
	cin>>A;
	n=A.size();
	//cout<<n;
	for (int i = 0; i < A.size(); ++i)
	{
		s=s+pow(26,i)*(A[n-i-1]-'A'+1);
	}
	cout<<s;
}