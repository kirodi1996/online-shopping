#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m,q,flag=0;
	cin>>n>>m>>q;
	int a[n];
	string b;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]==1){
			flag=1;
		}
	}
	for (int i = 0; i < q; ++i)
	{
		cin>>b[i];
		if(flag){
			if(b[i]=='!'){
			int temp=a[n-1];
			for (int k = n-1; k >= 0; --k)
			{
				a[k+1]=a[k];
			}
				a[0]=temp;	
			}	
		}
		
		if(b[i]=='?'){
			int j=0,max=0,count=0;
			if(flag==0){
				max=0;
			}
			else if(m>=n){
				for (int i = 0; i < n; ++i)
				{
					
					if(a[i]==1){
						count++;
					}
				}
				max=count;
			}
			else{
				while((j+m-1)<n){
				int i,count=0;;
				for (i=0; i < m; ++i)
				{	
					if(a[j+i]==1){
						count++;
				}
			
				}
				if(max<count){
					max=count;
				}	
				j++;

				}	
			}
			
				cout<<max<<"\n";
		}	
	}
	

	
}