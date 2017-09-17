
#include <bits/stdc++.h>
using namespace std;
bool isRepeated(int n,int *visited){
	int flag=0;
	
 	while (n%2 == 0)
    {
    	if(visited[2]){
    		return true;
    	}
        visited[2]=1;
        n=n/2;
    }
 
    for (int i = 3; i <= (n); i = i+2)
    {
    	
       while (n%i == 0)
        {
        	if(visited[i]){
        		return true;
        	}
        	visited[i]=1;
            n = n/i;
           
        }
    }
     
    return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0,flag;
		cin>>n;

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i <= n-1; ++i)
		{
			int visited[100000]={0};
			flag=0;
			for (int j = i; j < n; ++j)
			{
				//cout<<"hello";
				if(isRepeated(a[j],visited) && a[j]!=1){
					break;
				}
				else{
					t++;
					count++;
				}
			}
			
		}
		
		//long long int total=(((n)*(n+1))/2);
		cout<<count<<endl;
		
	}
}