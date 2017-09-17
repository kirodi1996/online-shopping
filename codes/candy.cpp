#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--){
		int limark,bob,limark1,bob1,flag1=0,flag2=0;
		cin>>limark>>bob;
	
		int n=1;
		while(1){
			limark1=pow(n,2);
			if(limark1>limark){
				flag1=1;
				break;
			}
			bob1=pow(n,2)+n;
			if(bob1>bob){
				flag2=1;
				break;
			}
			n++;	
		}
		if(flag1){
			cout<<"Bob"<<"\n";
		}
		else{
			cout<<"Limak"<<"\n";
		}
	}

}