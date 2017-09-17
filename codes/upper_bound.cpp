#include <bits/stdc++.h>
using namespace std;
struct prime{
	prime index[];
}pt;
bool isPrime(int a){
	for (int i = 2; i <= sqrt(a); ++i)
	{
		if(a%i==0){
			return false;
		}

	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(isPrime(a[i])){
				pt->index=i;
			}
		}
	}

}