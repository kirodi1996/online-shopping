#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int n,sum=0;
	cin>>n;
	int a[32]={0};
	int i=0,j=31;
	for(int k=0;k<32;k++){
		if(n%2==1){
			a[k]=1;
		}
		n/=2;
		//cout<<"1"<<" ";
	}
	//cout<<a[0]<<" "<<a[2];
	/*for (int i = 0; i < 32; ++i)
	{
		cout<<a[i]<<" ";
	}*/
	/*while(i<j){
		if(a[i]^a[j]){
			swap(a[i],a[j]);
		}
		i++;
		j--;
	}*/
	for(int i=0,k=31;i<32;i++,k--){
		sum+=(pow(2,k)*a[i]);
		//cout<<a[i]<<" ";
	}
	cout<<sum;
}