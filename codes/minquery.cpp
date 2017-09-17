#include <bits/stdc++.h>
using namespace std;
int getmid(int ss,int se){
	return (ss+(se-ss)/2);
}

int buildUtils(int *st,int *a,int ss,int se,int si){
	if(ss==se){
		st[si]=a[ss];
		return a[ss];
	}
	int mid=getmid(ss,se);
	st[si]=min(buildUtils(st,a,ss,mid,si*2+1),buildUtils(st,a,mid+1,se,si*2+2));
	return st[si];

}
int* build(int* a,int n){

	int height=(int )(ceil(log2(n)));
	int max_size=2*(int)pow(2,height)-1;
	int *st=new int[max_size];
	 buildUtils(st,a,0,n-1,0);
	 return st;
}
/*int rmqUtil(int *st,int ss,int se,int qs,int qe,int index){
	if(qs<=ss || qe>=se){
		return st[index];
	}
	int mid=getmid(ss,se);
	return min(rmqUtil(st,ss,mid,qs,qe,2*index+1),rmqUtil(st,mid+1,se,qs,qe,2*index	+2));
}*/

int rmq(int *st,int n ,int qs,int qe){
	if(qs<0 || qe>n-1){
		return -1;
	}
	rmqUtil(st,0,n-1,qs,qe,0);
}
int main(){
	int n,qs,qe;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int* st=build(a,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<st[i]<<" ";
	}
	cout<<"range to find min val\n";
	cin>>qs>>qe;
	cout<<rmq(st,n,qs,qe)<<endl;
}