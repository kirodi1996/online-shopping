    #include<stdio.h>
    #include<iostream>
    using namespace std;   
    int main()
    {
       long long int n,u,k,x,m,a,b,c,test;
        cin>>test;
        while(test--)
        {
       	    cin>>n>>k>>x>>m>>u;
       	    long long int distance[n];
            long long int visited[n],count,mindistance,nextnode;
            long long int G[n][n];
        for(int i=1;i<=n;i++)
        {
        	for(int j=1;j<=n;j++)
        	{
        		G[i][j]=99999;
    		}
    	}
        for(int i=1;i<=k;i++)
        {
    	  for(int j=i+1;j<=k;j++)
        {
        	G[i][j]=x;
        	G[j][i]=x;
    		}
    	}
    	
    	for(int i=0;i<m;i++)
    	{
    		cin>>a>>b>>c;
    		G[a][b]=c;
    		G[b][a]=c;
    	}
    	for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cout<<G[i][j]<<" ";
                cout<<endl;        
            }
        
        for(int i=1;i<=n;i++)
        {
            distance[i]=G[u][i];
           // pred[i]=u;
            visited[i]=0;
        }
        
        distance[u]=0;
        visited[u]=1;
        count=1;
        
        while(count<n-1)
        {
            mindistance=999999;
            
            //nextnode gives the node at minimum distance
            for(int i=1;i<=n;i++)
                if(distance[i]<mindistance && !visited[i])
                {
                    mindistance=distance[i];
                    nextnode=i;
                }
                
                //check if a better path exists through nextnode            
                visited[nextnode]=1;
                for(int i=1;i<=n;i++)
                    if(!visited[i])
                        if(mindistance+G[nextnode][i]<distance[i])
                        {
                            distance[i]=mindistance+G[nextnode][i];
                           
                        }
            count++;
        }
      	for(int i=1;i<=n;i++)
        {
        	cout<<distance[i]<<"\t";
    	}
    	cout<<endl;    
    	}
    }
     
     