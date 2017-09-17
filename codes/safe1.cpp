#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,vtotal=0,htotal=0,atotal=0,btotal=0;
		cin>>n;
		string a1,a2;
		cin>>a1;
		cin>>a2;
		int j=1;
		int flag1=0,flag2=0;
		for (int i = 0; i < n; ++i)
		{
			if(a1[i]=='*'){
				atotal++;
				flag1=1;
			}
			if(a2[i]=='*'){
				btotal++;
				flag2=1;
			}
			if(a1[i]=='*' && a2[i]=='*'){
				htotal=1;
				
			}
			if(flag1 && flag2){
				htotal=1;
			}
			
		}
		if(atotal>btotal){
			atotal--;
			vtotal=atotal;
		}
		else{
			btotal--;
			vtotal=btotal;
		}
		if(vtotal<0){

			vtotal=0;
		}
		cout<<vtotal+htotal<<endl;

	}
}