#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
while(T--)
	{
		int n,m,i,j;
		cin>>n>>m;
		int a[n][m],b[n][m]={0};
		
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];

	int	t=0,flag=0;
	
	while(flag!=m*n)		
	{	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
	{	

		if(t%2==0 )
		{
			b[i][j]=max(a[i-1][j-1],a[i-1][j],a[i-1][j+1],a[i][j-1],a[i][j],a[i][j+1],a[i+1][j-1],a[i+1][j],a[i+1][j+1]) ;
		}

		else
		{
			a[i][j]=max(b[i-1][j-1],b[i-1][j],b[i-1][j+1],b[i][j-1],b[i][j],b[i][j+1],b[i+1][j-1],b[i+1][j],b[i+1][j+1]) ;

		}

		if(a[i][j]==b[i][j])
			flag++;


	}
	}
	
		t++;
	}
	}

	cout<<t;



}