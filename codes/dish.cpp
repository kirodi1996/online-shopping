#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a[4],b[4];
		int count=0;
		for (int i = 0; i < 4; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < 4; ++i)
		{
			cin>>b[i];
		}
		for(int i=0;i<4;i++){
			for (int j = 0; j < 4; ++j)
			{
				if(a[i]==b[j])
					count++;
			}
		}
			
			if(count>=2)
				cout<<"similar"<<"\n";
			else{
				cout<<"dissimilar"<<"\n";
			}	
		}
	
}