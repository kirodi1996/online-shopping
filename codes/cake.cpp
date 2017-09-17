#include <bits/stdc++.h>
using namespace std;

bool isPrime(int no){
	for (int i = 2; i <= sqrt(no); ++i)
	{
		if(no%i==0){
			return false;
		}
	}
	return true;
}

bool isRepeat(int n){
	int flag=0;
 while (n%2 == 0)
    {
    	if(flag){
    		return true;
    	}
        printf("%d ", 2);
        n = n/2;
        flag=1;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
    	flag=0;
       while (n%i == 0)
        {
        	if(flag){
        		return true;
        	}
            printf("%d ", i);
            n = n/i;
            flag=1;
        }
    }
     if (n > 2)
        printf ("%d ", n);
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
		for (int i = 0; i < n-1; ++i)
		{
			int visited[100000]={0};
			flag=0;
			for (int j = i; j < n; ++j)
			{
				if((isPrime(a[j]) && a[j]!=1) ){
					
					if(visited[a[j]]){
						//cout<<"j="<<j<<"a[j]="<<a[j]<<" ";
						flag=1;
					}
					
					visited[a[j]]=1;
				}
				else if((isRepeat(a[j]) && a[j]!=1)){
					
					flag=1;
					
					visited[a[j]]=1;
				}

				if(flag){
						count++;
				}
			}
			
		}
		//cout<<endl;
		long long int total=(((n)*(n+1))/2);
		cout<<total-count<<endl;
		
	}
}