#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=0,j=0,l=0,t=0,dir=0;
	int b,r,s;
	cin>>r>>b;
	vector < vector <int> > v1;
	vector <int> v2;
	
		for (int i = 0; i < b; ++i)
		{
			/*cin>>s;
			v2.push_back(s);*/
			for (int j = 0; j < r; ++j)
			{
				cin>>s;
				v2.push_back(s);
			}
			v1.push_back(v2);
			v2.clear();
		}
	/*for (int i = 0; i < v1.size(); ++i)
	{
		for (int j = 0; j < v1[i].size(); ++j)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}*/
	while(t<=b && l<=r){
		if(dir==0){
			for (i=t,j =l ; j < r; ++j)
			{
				cout<<v1[i][j]<<" ";
			
			}
			j--;
			t++;
			i++;
			dir=dir+1;
		}
		if(dir==1){
			for(;i<b;i++){
				cout<<v1[i][j]<<" ";
				
			}
			r--;
			i--;
			j--;	
			dir=dir+1;
		}
		
		if(dir==2){
			for (; j >=l ; --j){
				cout<<v1[i][j]<<" ";
			
			}
			dir=dir+1;
			b--;
			j++;
			i--;	
		}	
			
		if(dir==3){

			for(;i>t;i--){
				cout<<v1[i][j]<<" ";
			
			}
			l++;
			i++;
			j++;
		}
		dir=(dir+1)%4;
	
		//cout<<t<<b<<l<<r;
	}
}