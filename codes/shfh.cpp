#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	int a[n];
	string b;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < q; ++i)
	{
		cin>>b[i];
	}
	
	for (int i = 0; i < q; ++i)
	{ int temp=a[n];
		if(b[i]=='!'){
			for (int k = 0; k < n-1; ++i)
			{
				a[k+1]=a[k];
			}
			a[0]=temp;		
		}
		if(b[i]=='?'){
			int j=0,max=0,count=0;
			while(j<n){
				int i,count=0;;
				for (i=0; i < m; ++i,++j)
				{	
					if(a[j]==1){
					count++;
				}
			
			}
				if(max<count){
					max=count;
				}	
			}
		}
		cout<<max<<"\n";
	}
	
}