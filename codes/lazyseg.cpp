#include <bits/stdc++.h>
using namespace std;
#define MAXIMUM 1000000
long long int modulo = pow(10,9)+7;
long long int trees[MAXIMUM] = {0};  
long long int lazy[MAXIMUM] = {0};  
long long int tree1[MAXIMUM] = {0};
long long int lazy1[MAXIMUM] = {0};

void updateRange(long long int *lazy,long long int *trees,long long int si1, long long int ss, long long int se, long long int us,
                     long long int ue, long long int diff)
{
   if (lazy[si1] != 0)
    {
       trees[si1] += ((se-ss+1)*lazy[si1])%modulo;
        if (ss != se)
        {
           lazy[si1*2 + 1] =(lazy[si1*2 + 1]+ lazy[si1])%modulo;
           lazy[si1*2 + 2] =(lazy[si1*2 + 2]+ lazy[si1])%modulo;
        }
 
       lazy[si1] = 0;
    }
 
    if (ss>se || ss>ue || se<us)
        return ;
 
    if (ss>=us && se<=ue)
    {
       
        trees[si1] =(trees[si1]+((se-ss+1)*diff)%modulo)%modulo;
 
        
        if (ss != se)
        {
            lazy[si1*2 + 1] =(lazy[si1*2 + 1]+ diff)%modulo;
            lazy[si1*2 + 2] =(lazy[si1*2 + 2]+ diff)%modulo;
        }
        return;
    }
 
    
    long long int mid = (ss+se)/2;
    updateRange(lazy,trees,si1*2+1, ss, mid, us, ue, diff);
    updateRange(lazy,trees,si1*2+2, mid+1, se, us, ue, diff);
 
    
    trees[si1] = (trees[si1*2+1] + trees[si1*2+2])%modulo;
}
 
void updateRange1(long long int *lazy,long long int *trees,long long int n, long long int us, long long int ue, long long int diff)
{
   updateRange(lazy,trees,0, 0, n-1, us, ue, diff);
}
 

long long int getSum1(long long int *lazy,long long int *trees,long long int ss, long long int se, long long int qs, long long int qe, long long int si)
{
    if (lazy[si] != 0)
    {
        trees[si] =(trees[si]+((se-ss+1)*lazy[si])%modulo)%modulo;
         if (ss != se)
        {
           lazy[si*2 + 1] =(lazy[si*2 + 1]+ lazy[si])%modulo;
            lazy[si*2 + 2] =(lazy[si*2 + 2]+ lazy[si])%modulo;
        }
 
       lazy[si] = 0;
    }
 
   if (ss>se || ss>qe || se<qs)
        return 0;
 
    if (ss>=qs && se<=qe)
        return trees[si];
 
    long long int mid = (ss + se)/2;
    return (getSum1(lazy,trees,ss, mid, qs, qe, 2*si+1) +
           getSum1(lazy,trees,mid+1, se, qs, qe, 2*si+2))%modulo;
}
 
long long int getSum1(long long int *lazy,long long int *trees,long long int n, long long int qs, long long int qe)
{
   if (qs < 0 || qe > n-1 || qs > qe)
    {
      return -1;
    }
 
    return getSum1(lazy,trees,0, n-1, qs, qe, 0);
}
 
void constructUtil(long long int *lazy,long long int *trees,long long int arr[], long long int ss, long long int se, long long int si)
{
   if (ss > se)
        return ;
   if (ss == se)
    {
        trees[si] = arr[ss];
        return;
    }
   long long int mid = (ss + se)/2;
    constructUtil(lazy,trees,arr, ss, mid, si*2+1);
    constructUtil(lazy,trees,arr, mid+1, se, si*2+2);
 
    trees[si] = (trees[si*2 + 1] + trees[si*2 + 2])%modulo;
}
 
void construct(long long int *lazy,long long int *trees,long long int arr[], long long int n)
{
   constructUtil(lazy,trees,arr, 0, n-1, 0);
}
 
 

struct query{
	long long int c;
	long long int s;
	long long int e;
};

int main()
{
	long long int t,n,m;
	cin>>t;
	
	while(t--)
	{
		long long int arrs[MAXIMUM]={0};
		memset(trees, 0, MAXIMUM* sizeof(trees[0]));
		memset(tree1, 0, MAXIMUM* sizeof(tree1[0]));
		memset(lazy, 0, MAXIMUM* sizeof(lazy[0]));
		memset(lazy1, 0, MAXIMUM* sizeof(lazy1[0]));
		cin>>n>>m;
		query q[m+3];
		construct(lazy,trees,arrs, m-1);
		construct(lazy1,tree1,arrs, n-1);

		for(long long int i=0;i<m;i++)
		{
			cin>>q[i].c>>q[i].s>>q[i].e;
		}
		
		for(long long int i=m-1;i>=0;i--)
		{
			if(q[i].c==1)
			{
				updateRange1(lazy,trees,m, i,i,1);				
			}
			if(q[i].c==2)
			{
				long long int x=getSum1(lazy,trees,m,i,i);
				
				updateRange1(lazy,trees,m, q[i].s-1,q[i].e-1,x+1);
			}
		}
		
		for(long long int i=0;i<m;i++)
		{
			
			if(q[i].c==1)
			{
				long long int x=getSum1(lazy,trees,m,i,i);
				updateRange1(lazy1,tree1,n, q[i].s-1,q[i].e-1,x);
				
			}
		}
		for(long long int i=0;i<n-1;i++)
		{
			
			long long int x=getSum1(lazy1,tree1,n,i,i);
			cout<<x<<" ";
		}
		cout<<getSum1(lazy1,tree1,n,n-1,n-1)<<endl;

	}
	
}