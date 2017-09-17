#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,vtotal=0,htotal=0;
		cin>>n;
		string a1,a2;
		cin>>a1;
		cin>>a2;
		int j=1;
		for (int i = 0; i < n; ++i)
		{
			
			if(a1[i]=='*'){
				if(a1[i]!='*' && (i+j)<n){
					j++;
					continue;
					//cout<<"1-->"<<endl;
				}
				if(a2[i]=='*'){
					total++;
					//cout<<"2-->";
				}
				else if(a2[i+1]=='*'){
					total++;
					//cout<<"3-->"<<endl;
				}

			}
			else if(a2[i]=='*'){
				if(a2[i+1]=='*'){
					total++;
					//cout<<"4-->"<<endl;
				}
				else if(a1[i+1]=='*'){
					total++;
					//cout<<"5-->"<<endl;
				}
			}
		}
		cout<<total<<endl;
	}
}