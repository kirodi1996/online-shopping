#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=0,j=0,l=0,r,t,b;
	cin>>b>>r;
	int a[b][r];
	t=0;
	b=r;
	int dir=0;	
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			cin>>a[i][j];
		}
	}
	while(t<=b && l<=r){
		if(dir==0){
			for (i=t,j =l ; j < r; ++j)
			{
				cout<<a[i][j]<<" ";
			
			}
			j--;
			t++;
			i++;
			dir=dir+1;
		}
		if(dir==1){
			for(;i<b;i++){
				cout<<a[i][j]<<" ";
				
			}
			r--;
			i--;
			j--;	
			dir=dir+1;
		}
		
		if(dir==2){
			for (; j >=l ; --j){
				cout<<a[i][j]<<" ";
			
			}
			dir=dir+1;
			b--;
			j++;
			i--;	
		}	
			
		if(dir==3){

			for(;i>=t;i--){
				cout<<a[i][j]<<" ";
			
			}
			l++;
			i++;
			j++;
		}
		dir=(dir+1)%4;
		cout<<endl;
		//cout<<t<<b<<l<<r;
	}
		
}