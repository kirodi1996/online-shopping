        #include<iostream>
        #include<vector>
        #include<algorithm>
        using namespace std;
        int main()
        {
        	int test;
        	cin>>test;
        	
        	while(test--)
        	{
        	       long long int n,in,i;
        	       vector<long long int>main,neg,rem;	
        		long long int result=0;
        		cin>>n;
        		 long long int sum=0;
        		 long long int pos=0,k=0,c=0;
        		while(n--)
        		{
        			cin>>in;
        			main.push_back(in);
        		}
        		for(i=0;i<main.size();i++)
        		{
        			if(main[i]>=0)
        			
        			{
        				sum=sum+main[i];
        				pos++;
        			}
        			else
        			{
        				neg.push_back(main[i]);
        			}
        			
        		}
        		//cout<<pos;
        	sort(neg.begin(),neg.end());
        	for(i=neg.size()-1;i>=0;i--)
        	{
        		if((neg[i]*(-1)*(pos+1))<=sum)
        		{
        			sum=sum+neg[i];
        		//	c++;
        			pos++;
        		//	neg.erase()
        		}
        		else
        		{
        			rem.push_back(neg[i]);
        		}
        	}
        //	cout<<pos<<endl;
        	result=(sum)*(pos);
        	for(i=0;i<rem.size();i++)
        	{
        		result=result+rem[i];
        	}
        	cout<<result<<endl;
        /*	rem.clear();
        	neg.clear();
        	main.clear();*/
        	}
        }  
