   #include <bits/stdc++.h>
   using namespace std;
    int main()
    {
    	int test;
    	cin>>test;
    	vector<long long int>v;
    	while(test--)
    	{
    		long long int n;
    		cin>>n;
    		long long int in;
    		long long int sum=0;
    		long long int k=n;
    		while(n--)
    		{
    			cin>>in;
    			v.push_back(in);
    			sum=sum+in;
    		}
    		long long int min=v[0]+sum;
    		long long int index=0;
    		for(int i=1;i<k;i++)
    		{
    			 if(sum+v[i]==min&&i<index)
    			{
    				index=i;
    			//	cout<<"1"<<endl;
    			}
    			else if(sum+v[i]<min)
    			{
    				min=sum+v[i];
    				index=i;
    				//break;
    			//	cout<<"2"<<endl;
    			}
    			//cout<<i<<"i"<<endl;
    		}
    		cout<<index+1<<endl;
    		v.clear();
    	}
    } 