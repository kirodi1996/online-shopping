#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n,j=0;
	cin>>n;
	int x;
	int u=n, total=1,l=1,m=1;
	while(total<=n){
		m=1;
		if(total==1 || total==n){
			x=(n-1);
			for (int i = total-1; i < s.length();)
			{	
				cout<<s[i];
				i=i+(2*x);
				if(x==0){
					i++;
					//cout<<i;
					//break;
			}

		}	
			j++;
				
		}
		else {
			
			
			for (int i = total-1; i < s.length();)
			{
				if(m%2==1){
					x=u-total;	
				}
				else{
					x=total-l;
				}	
				cout<<s[i];
				i=i+(2*x);
				if(x==0){
					i++;
			}
			//cout<<endl;
			m++;
			
			
		}
		
			
	}
	total++;
}
}