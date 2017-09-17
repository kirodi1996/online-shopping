#include <bits/stdc++.h>
using namespace std;
int main(){
	string A;
	cin>>A;
	int count=0;
	int n=(int)A.size();
	//cout<<n;
	for (int i = 0; i < A.length(); ++i)
	{
		if(isalnum(A[i])){
			count++;
		}
		if(A[i]==' ' && isalnum(A[i+1]) && (i+1<n)){
			count=0;
		}
	}
		cout<<count;
	}

}