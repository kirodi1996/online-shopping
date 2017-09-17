#include <bits/stdc++.h>
using namespace std;
int getSum(int index,int *fenwik){
	 index=index+1;
	int sum=0;
	while(index>0){
		cout<<"hello1"<<endl;
		sum+=fenwik[index];
		index-=index & (-index);
	}
	return sum;
}
void update(int val,int n,int *fenwik,int index){
	 index=index+1;
	while(index<=n){
		cout<<"hello2"<<endl;
		fenwik[index]+=val;
		index+=(index) & (-index);
	}
}
int *BIT(int *a,int n){

	int *fenwik=new int[n+1];
	for (int i = 1; i <= n; ++i)
	{
		fenwik[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		update(a[i],n,fenwik,i);
	}
	return fenwik;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int *test=BIT(a,n);
	cout<<getSum(5,test);
}