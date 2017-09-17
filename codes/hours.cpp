#include <bits/stdc++.h>
using namespace std;
/*int test(vector<pair<int,int>> v,int a[n][m],max,n,m){
	int b[n][m]={0};
	int inc=0;
	int sz=v.size();
	for(int i=0;i<sz;i++){
		int k=v[i].first;
		int l=v[i].second;
		if(a[k-1][l-1]!=max && (k-1>=0)(l-1>=0)){
			b[k-1][l-1]=inc++;
		}	
	}
	


}*/
int main(void){
	int t;
	cin>>t;
	while(t--){
		vector <pair<int,int>> v[100000];
		int n,m,max=0,k=0,total=0;
		cin>>n>>m;
		int a[n][m];
		int b[n][m]={0};
		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j){
				cin>>a[i][j];
				if(a[i][j]>max){
					max=a[i][j];
					//total++;
					 //v[k++].push_back(make_pair(i,j));
					// cout<<"b";
				}
			}
			//cout<<"a";
		}
		//cout<<max;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(a[i][j]==max){
					//cout<<i<<" "<<j<<endl;
					total++;
					v[k++].push_back(make_pair(i,j));
				}
			}
		}
		//cout<<total;
		for(int i=0;i<total;i++){
			vector<pair<int,int>> v1=v[i];
			for(int j=0;v1.size()<sz;i++){
			//int sz=v.size();
			int inc=0;
			
			int k=v1[j].first;
			++inc;
				if(a[k-1][l-1]!=max && (k-1>=0) && (l-1>=0)){
					b[k-1][l-1]=inc;
				}
				if(a[k+1][l+1]!=max && (k+1<n) && (l+1<m)){
					b[k+1][l+1]=inc;
				}
				if(a[k-1][l]!=max && (k-1>=0) ){
					b[k-1][l]=inc;
				}
				if(a[k][l-1]!=max  && (l-1>=0)){
					b[k][l-1]=inc;
				}
				if(a[k+1][l-1]!=max && (k+1<n) && (l-1>=0)){
					b[k+1][l-1]=inc;
				}
				if(a[k][l+1]!=max  && (l+1<m)){
					b[k][l+1]=inc;
				}
				if(a[k+1][l]!=max && (k+1<n){
					b[k-1][l-1]=inc;
				}	
				if(a[k-1][l+1]!=max && (k-1>=0) && (l+1<m)){
					b[k-1][l+1]=inc;
				}
			}	
		}
	}
}