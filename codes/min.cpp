#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,max=0;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if (a[i]>max)
			{
				/* code */
				max=a[i];
			}
		}
		cout<<n-max<<"\n";
	}
}