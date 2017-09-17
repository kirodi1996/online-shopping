#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,i=0,flag1=1,flag2=0;
		scanf("%d",&n);
		string s1,s2;
		cin>>s1;
		cin>>s2;
		for (i = 0; i < n; ++i)
		{
			if(s1[i]=='#'){
				x=i;
				if(s2[i]=='#'){
					y=i;
				}
				break;
			}
			if(s2[i]=='#'){
				y=i;

				break;
			}
			flag1=1;
		}
		//cout<<x<<i<<endl;
		for(;i<n;i++){
			if(s2[i]=='#'){
				if(abs(y-i)==0){
					//y=i;
					flag1=1;
					//cout<<"1";
				}
				else if(y!=i){
				//	cout<<"2";
					flag1=0;
				}
			}
			if(s1[i]=='#'){
				//cout<<x-i;
				if(abs(x-i)==1){//for adjacency check
					flag1=1;
					//x=i;
					//cout<<"3";
				}
				else if(x!=i){
					flag1=0;
					//cout<<"4";
				}
			}
			
		}
		if(flag1){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}