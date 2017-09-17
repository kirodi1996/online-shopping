    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	long long int test,u=0;
    	cin>>test;
    	while(test--)
    	{
    		
    	long long int a,b,c,in,i,sum_x=0,sum_y=0,sum_z=0,f=0,g,h;
    	vector<long long int>x,y,z;
    	long long int result=0,l,t;
    	u=0;
     	cin>>a>>b>>c;
    	while(a--)
    	{
    		cin>>in;
    		x.push_back(in);
    	}
    	while(b--)
    	{
    		cin>>in;
    		y.push_back(in);
    	}
    while(c--)
    	{
    		cin>>in;
    		z.push_back(in);
    	}
    	sort(x.begin(),x.end());
    	sort(y.begin(),y.end());
    	sort(z.begin(),z.end());
     
     	for(int i=0;i<x.size();i++)
    {
    	sum_x=sum_x+x[i];
    }
  //  g=sum_x;
    
    	for(int i=0;i<z.size();i++)
    {
    	sum_z=sum_z+z[i];
    }
    //h=sum_z;
     l=x.size()-1;
     t=z.size()-1;
    for(i=y.size()-1;i>=0;i--)
    {
    	while(y[i]<x[l])
    	{
    		sum_x=sum_x-x[l];
    		l--;
		}
			while(y[i]<z[t])
    	{
    		sum_z=sum_z-z[t];
    		t--;
		}
    		sum_y=sum_y%(100000007)+(sum_x+((l+1)*y[i]))*y[i]*(t+1)+sum_z*(sum_x+(y[i]*(l+1)));

    }
     cout<<(sum_y)%(100000007)<<endl;
    } 
}
