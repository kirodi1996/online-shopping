#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int A[502]={0},j=4;;
		int n,prev1,prev2;
		cin>>n;
		if(n==1){
			cout<<"7"<<endl;
		}
		else if(n==2){
			cout<<"2"<<" "<<"3"<<endl;
		}
		else{
			int k=1;
			vector <int> a;
			a.push_back(2);A[2]=1;
			a.push_back(3);A[3]=1;
			cout<<"2"<<" "<<"3"<<" ";
			for (int i = 3;i<=n ; )
			{
			
				for( k=0;k<a.size();k++){
				//cout<<"a[k]="<<a[k]<<endl;
					if(A[j-a[k]] && ((j/2)!=a[k])){
						//flag=0;
						break;
					}
				}
				if((k)==a.size()){
			//	cout<<"hello";
					A[j]=1;
					i++;
					a.push_back(j);
					cout<<j<<" ";

				}
				j++;
			//cout<<"1";
			}
			cout<<endl;
			
		}
		
	}
}