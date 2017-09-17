	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		long long int n,k;
		
		cin>>n>>k;
		long long int a[n],s[n];
		memset(a,0,sizeof(a));
		memset(s,0,sizeof(s));
		while(k--){
			int q;
		long long int xors=0;
			cin>>q;
			if(q==1){
				long long int index,value;
				cin>>index>>value;
				a[index-1]=value;
				s[0]=a[0];
				for (int i = 1; i < n; ++i)
				{
					s[i]=a[i]^s[i-1];
					//cout<<s[i]<<" ";
				}
				//cout<<endl;
			}	
			else if(q==2){
				long long int val,flag=0;
				cin>>val;
				for (int i = 0; i < n; ++i)
				{
					xors=0;
					//flag=0;
						for (int j = i; j < n; ++j)
					{
						for (int k = i; k <= j; ++k)
						{
							xors=xors^a[k];
							//cout<<xors<<endl;
							if(xors==val){
								flag=1;
								break;
							}
						}
							
					}
				}
				if(flag){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			
			}	
		}
		
	}