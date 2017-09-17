#include <bits/stdc++.h>
using namespace std;
int findUtil(int *st,int qs,int qe,int ss,int se,int index){
	if(qs<=ss && se<=qe){
		return st[index];
	}
	else if(qs>se || qe<ss){
		return INT_MAX;
	}
	int mid=(ss+se)/2;
	return min(findUtil(st,qs,qe,ss,mid,(index*2)+1),findUtil(st,qs,qe,mid+1,se,(index*2)+2));
}
int find(int *st,int qs,int qe,int n){
	if(qs<0 || qe>=n){
		cout<<"not possible";
		return 0;
	}
	return findUtil(st,qs,qe,0,n-1,0);
}
int buildSegmentTreeUtil(int *a,int *st,int low,int high,int si){
	if(low==high){
		st[si]=a[low];
		return a[low];
	}
	int mid=(low+high)/2;
	st[si]=min(buildSegmentTreeUtil(a,st,low,mid, (si*2)+1),buildSegmentTreeUtil(a,st,mid+1,high,(si*2)+2));
	return st[si];

}
int *buildSegmentTree(int *a,int n){
	int height=(int)ceil(log2(n));
	int max_size=2*(int)(pow(2,height))-1;
	int *st=new int[max_size];
	buildSegmentTreeUtil(a,st,0,n-1,0);
	return st;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int qs,qe;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int *st=buildSegmentTree(a,n);
	cin>>qs>>qe;
	cout<<find(st,qs,qe,n);
}