#include <bits/stdc++.h>
using namespace std;
int calmid(int ss,int se){
	return (ss+(se-ss)/2);
}
int getSumUtil(int *st,int ss,int se,int qs,int qe,int si){

    if (qs <= ss && qe >= se)
        return st[si];
 

    if (se < qs || ss > qe)
        return 0;
 
    
    int mid = calmid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);

}
int getSum(int *st,int n,int qs,int qe){
	if(qs<0 || qe>=n || qs>qe){
		cout<<"Invalid input"<<endl;
		return -1;
	}
	return getSumUtil(st,0,n-1,qs,qe,0);
}

int buildUtil(int *a,int ss,int se,int *st,int si){
	if(ss==se){
		st[si]=a[ss];
		return a[ss];
	}
	int mid=calmid(ss,se);
	st[si]=buildUtil(a,ss,mid,st,si*2+1)+buildUtil(a,mid+1,se,st,si*2+2);
	return st[si];
}
int* build(int *a,int n){
	int height=(int)(ceil(log2(n)));
	int max_size=2*(int)(pow(2,height))-1;
	int *st=new int[max_size];
	buildUtil(a,0,n-1,st,0);
	return st;
}
void updateUtils(int *st ,int ss,int se,int i,int diff,int si){
	if(i<ss || i>se){
		return ;
	}
	st[si]=st[si]+diff;
	if(se!=ss){
		int mid=calmid(ss,se);
		updateUtils(st,ss,mid,i,diff,(si*2)+1);
		updateUtils(st,mid+1,se,i,diff,(si*2)+2);
	}
}
void updatevalue(int *a,int *st,int i,int z,int n){
	if(i<0 && i>n-1){
		cout<<"Invalid index"<<endl;
		return ;
	}
	int diff=a[i]-z;
	a[i]=z;	
	 updateUtils(st,0,n-1,i,diff,0);
}
int main(){
	int n,x,y,z;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	//int st[n];
	int *st=build(a,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<st[i]<<" ";
	}
	
	cout<<endl;
	cout<<"get sum\n";
	cin>>x>>y;

	cout<<getSum(st,n,x,y);
	int i;
	cout<<"Enter index & value for update\n";
	cin>>i>>z;
	updatevalue(a,st,i,z,n);
	cout<<"get sum\n";
	cin>>x>>y;

	cout<<getSum(st,n,x,y);

}
