#include <bits/stdc++.h>
using namespace std;
int countpair(set <int > s){

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		while(n--){
			int len,s;
			
			set< set <int> > myset;
			set <int> temp;
			for (int i = 0; i < n; ++i)
			{
				cin>>len;
				for (int j = 0; j < len; ++j)
				{	
					cin>>s;
					temp.insert(s);
					myset[i][j].insert(s);
				}
					//myset[i][j].insert(s);
					temp.clear();
			}
			
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < len; ++j)
				{
					cout<<myset[i][j];
				}
			}
		}
	}
}