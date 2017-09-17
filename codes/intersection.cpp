#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int A[n],B[m];
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	for (int j = 0; j < m; ++j)
	{
		cin>>B[j];
	}
	int szA=n,szB=m;
	/*for( ;(szA>=0 && szB>=0);){
		if(a[szA]>b[szB]){
			szA--;
		}
		else if(a[szA]<b[szB]){
			szB--;
		}
		else{
			
			cout<<a[szA]<<" ";
			szA--;
			szB--;
		}
	}*/
	int i=0,j=0;
	for( ;(i<szA) && (j<szB);){
	    if(A[i]<B[j]){
	       while(A[i]<B[j]){
		        i++;
		    }
	    }
		else if(B[j]>A[i]){
		 
	    	while(B[j]>A[i]){
		        j++;
		    }   
		}
		else if(A[i]==B[j]){
			
			cout<<A[i]<<" ";
			i++;
			j++;
		
		}
	}

}