#include <bits/stdc++.h>
using namespace std;
long long int w[1000001],c[1000001],sum[1000001],has[1000001];
struct node
    {
    	long long int val,start,end;
    }max_sf,sumx;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		long long int a,b,n,x,i;
    		max_sf.start=sumx.start=max_sf.end=sumx.end=max_sf.val=sumx.val=0;	
    		cin>>n;
     
    		for(i=0;i<n;i++)
    			{cin>>c[i];has[c[i]]=-1;}
    		cin>>w[0];
    		sum[0]=w[0];
    		for(i=1;i<n;i++)
    		{
    			cin>>w[i];
    			sum[i]=sum[i-1]+w[i];
    		}
    		sumx.val=0;max_sf.val=-1;max_sf.start=0;sumx.start=0;
    		for(i=0;i<n;i++)
    		{
    			if(has[c[i]]==-1)
    			{
    				has[c[i]]=i;
                    cout<<"1."<<has[c[i]]<<endl;
    				sumx.val=sumx.val+w[i];
    				sumx.end=i;
    				if(max_sf.val<sumx.val)
    					{	
    						max_sf.end=sumx.end;
    						max_sf.val=sumx.val;
                            cout<<"2."<<max_sf.end<<" "<<max_sf.val<<endl;
    					}	
    			}
    			else
    			{
    				if(sumx.start<has[c[i]]+1)				
    					{   cout<<"3.before upadate"<<sumx.start<<" "<<sumx.val<<" "<<has[c[i]]<<endl;   
                            sumx.start=has[c[i]]+1;sumx.val=sum[i]-sum[sumx.start-1];
                            cout<<"3.After upadate"<<sumx.start<<" "<<sumx.val<<endl;
                        }
    				else
    				{
    					sumx.val=sumx.val+w[i];
                        cout<<"4."<<sumx.val<<endl;
    				}
    				sumx.end=i;
    				if(max_sf.val<sumx.val)
    					{
    						max_sf.val=sumx.val;
    						max_sf.start=sumx.start;
    						sumx.end=max_sf.end=i;
                            cout<<"5."<<max_sf.val<<" "<<max_sf.start<<" "<<sumx.end<<endl;						
    					}
    				has[c[i]]=i;
    			}
    		//	cout<<sumx.start<<" "<<sumx.end<<" "<<sumx.val<<endl;
    		//	cout<<max_sf.start<<" "<<max_sf.end<<" "<<max_sf.val<<endl;
    		}
    		cout<<"6."<<max_sf.val<<endl;
    	}
    	return 0;
    } 