	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int maxi=1;	;
			string s1;
			cin>>s1;
			int n1=0,n2=0,flag=0;
			int n=s1.length();
			for (int i = 0; i < s1.length(); )
			{
				if(s1[i]=='<'){
					//flag=1;
					//cout<<"i=:"<<i;
					while(s1[i]!='>' && i<n){
						//cout<<"i="<<i<<" ";
						if(s1[i]=='<')
							{n1++;}
						i++;
					}
				}
				 if(s1[i]=='>' ){
				 	//flag=1;
					while(s1[i]!='<' && i<n){
						if(s1[i]=='>')
							{n2++;}
						i++;
					}
				}
				if(s1[i]=='='){
					while((s1[i]!='<' && s1[i]!='>') && i<n){
						i++;
					}
					//cout<<i<<endl;
				}
				else if(maxi<max(n1,n2)+1){

					maxi=max(n1,n2)+1;
			
				}
				n1=n2=0;
				/*if(s1[i]=='='){
					while(s1[i]=='=' && i<n){
						n2++;
						i++;
					}
				}*/
				
				
			}
			cout<<maxi<<endl;
		}
	}