    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	long long int n,k,p,a[100000],f,l,count,max;
    	
    	scanf("%lld",&n);
    	scanf("%lld",&k);
    	scanf("%lld",&p);
     
    	for(int i=0;i<n;i++)
    	{
    		scanf("%lld",&a[i]);
    	}
    	f=0;
    	l=n-1;
    	char d;
    	//printf("cc %lld %lld\n",f,l);
    	while(p--)
    	{
    		//printf("cc %lld %lld\n",f,l);
    		//scanf("%c",&d);
    		cin>>d;
    		if(d=='?')
    		{
    			//printf("xxxx %lld %lld\n",f,l);
    			count=0;
    			max=-1;
    			int i=f;
     
    			l=0;

                    count=0;
                for(int j=0;j<k && j<n;j++)
                {
                    if(a[i]==1)
                        count++;
                    i++;
                    if(i==n)
                        i=0;
                }
                max=count;
                // printf("%lld=%lld\n",f,max );
                i=f+1;
               if(k<=n)
               { 
        			for(int j=1;j<(n-k+1);j++)
                    {
                        count=count+a[k+i-1]-a[i-1];
                        if(max<count)
                            max=count;
                       // printf("%d=%lld a[%d]=%lld a[%d]=%lld %lld\n",i,max,i-1,a[i-1],i+k-1,a[i+k-1] ,count);
                        i++;
                        if(i==n)
                            i=0;
                    }
               }
    
    			printf("%lld\n",max );
    		}
    		else
    		{
    			//printf("yyyy\n");
    			f--;
    			
    			if(f==-1)
    				f=n-1;
    			//printf("f=%lld\n",f );
    		}
    	}
     
    } 