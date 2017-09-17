#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,flag1=0,flag2=0,flag3=1,flag4=0;
		cin>>l;
		string s;
		cin>>s;
		for (int i = 0; i < l; ++i)
		{
			if(s[i]=='T'){
				flag3=0;
				flag2=0;
				break;
			}
			else if(s[i]=='H'){
				flag1=1;
				flag3=0;
				for(int j=i+1;j<l;j++){
					flag2=0;
					if(s[j]=='H'){
						flag4=1;
						break;
					}
					else if((flag1==1) && (s[j]=='T')){
						i=j;
						flag2=1;
						break;
					}	
				}
			}
			if((s[i]=='H') && ((i+1)==l)){
				flag2=0;
			}
			if(flag4){
				break;
			}
		}
		if(flag3){
			cout<<"Valid"<<endl;
		}
		else if(flag2){
			cout<<"Valid"<<endl;
		}
		else if(flag4){
			cout<<"Invalid"<<endl;
		}
		else{
			cout<<"Invalid"<<endl;
		}
	}
}