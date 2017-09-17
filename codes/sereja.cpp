#include <bits/stdc++.h>
using namespace std;
struct query
{
	int id;
	int r1,r2;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		query a[100001]={0};
		for (int i = 1; i <= n; ++i)
		{

			cin>>a[i].id>>a[i].r1>>a[i].r2;
			if(a[i].id==1){
				for(int j=a[i].r1;j<=a[i].r2;j++){
						a[j]++;
				}
			}
			else{
				for(int j=a[i].r1;j<=a[i].r2;j++){
						
				}
			}
		}
		

	}
}