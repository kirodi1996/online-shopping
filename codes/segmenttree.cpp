#include <iostream>
using namespace std;
int Tree[1000];
int a[1000];
void build(int node,int start,int end)
{
//cout<<"jksndkj\n";
	if(start==end)
	{
		Tree[node] = a[start];
	}
    else
	{
        int	mid = (start+end)/2;
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		Tree[node] =Tree[(node*2)+1]+Tree[(node*2)+2];
    }
}
void update(int node,int start,int end,int k,int num)
    {
    if(start==end)
        Tree[node] = num;
    else
       {
         int mid = (start+end)/2;
        if(k<=mid)
         update(2*node+1,start,mid,k,num);
        else
           update(2*node+2,mid+1,end,k,num); 
        	Tree[node] =Tree[(node*2)+1]+Tree[(node*2)+2];
    	} 
}
int query(int node,int start,int end,int l,int r)
{
	if(start==l&&end==r)
	return Tree[node];
	else
	{
		int mid = (start+end)/2;
		if(mid>=r)
		return query(2*node+1,start,mid,l,r);
		else if(mid<l)
		return query(2*node+2,mid+1,end,l,r);
		else
		return query(2*node+1,start,mid,l,mid)+query(2*node+2,mid+1,end,mid+1,r);
	}
}
int main()
{
	int n;
	cin>>n;
    cout<<"krnfno\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
    cout<<"lghk\n";
	build(0,0,n-1);
	for(int i=0;i<(2*n-1);i++)
		cout<<Tree[i]<<" ";
	update(0,0,6,3,10);
	cout<<endl;
	for(int i=0;i<(2*n-1);i++)
		cout<<Tree[i]<<" ";
	cout<<endl<<query(0,0,6,2,5);
	return 0;
}
