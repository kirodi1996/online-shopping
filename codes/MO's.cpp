#include <bits/stdc++.h>
using namespace std;
int block;
struct Query{
	int l,r;
};
bool compare(Query x,Query y ){
	if(x.l/block!=y.l/block){
		return x.l/block<y.l/block;
	}
	return x.r<y.r;
}
void Mo(int *a,int n,int m,Query *q){
	block=(int)sqrt(n);
	sort(q,q+m,compare);
	int currL=0,currR=0,sum=0;
	for (int i = 0; i < 2; ++i)
	{
		int L=q[i].l;
		int R=q[i].r;
		while(currL<L){
			sum-=a[currL];
			currL++;
			//cout<<"1.sum="<<sum<<endl;	
		}
		while(currL>L){
			sum+=a[currL-1];
			currL--;
			//cout<<"2.sum="<<sum<<endl;
		}
		while(currR<=R){
			sum+=a[currR];
			currR++;

		//	cout<<"3.sum="<<sum<<endl;
		}
		while(currR>R+1){
			sum-=a[currR-1];
			currR--;

			//cout<<"4.sum="<<sum<<endl;
		}

		//cout<<"sum="<<sum<<endl;	

	}
}
int main(){
	int n,q;

	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the array elements::\n";
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<"Enter the no of query\n";
	cin>>q;
	cout<<"Enter the query::\n";
	Query query[q];
	for (int i = 0; i < q; ++i)
	{
		cin>>query[i].l>>query[i].r;
	}
	Mo(a,n,q,query);
}