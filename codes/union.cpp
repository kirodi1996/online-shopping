#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		//cout<<"hello"<<endl;
		int total=0;
		int s;
		cin>>n>>k;
		s=n;
		int len[n], i=0,j=0,l=0;
		set <int> myset1,myset2;
		int b[100000];
		while(n--){
			
			cin>>len[i];
			for (; j < (l+len[i]); ++j)
			{
				cin>>b[j];
			}
			//cout<<len[i]<<" ";
			l=j;
			
			i++;
		}
		//cout<<"1";
		int z=0;
		int t=0;
		int y=0;
		int length=0,length2=0,length3;
		while(z<s-1){
			while(y<length2+len[z]){
				myset1.insert(b[y]);
				y++;
			}
			length3=length2+len[z];
			int x=z+1;
		//cout<<myset1.size()<<endl;
			while(x<s){
				while(y<length3+len[x]){
				int x=z+1;
				int w=y;
				myset2.insert(b[y]);
				y++;
			}

			myset2.insert(myset1.begin(),myset1.end());
				
				if(myset2.size()==k){
					total++;
				}
				length3=length3+len[x+1];
				x++;	
				//cout<<"1";
			}
				
			length=length+len[z];
			length2=length2+len[z+1];
			y=length;
			z++;
			//cout<<myset1.size();
			myset1.clear();
		}
		
		cout<<total<<endl;
		
	}
}