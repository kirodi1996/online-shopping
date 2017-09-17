#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;
		long long int  max=1;
		long long int count=1;
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=='<')
			{
				count++;
			}
			else if(s.at(i)=='>')
			{
				count--;
			}
			if(count==0)
			{
				max=max+1;
				count=1;
			}
			else
			{
				if(count>max)
				{
					max=count;
				}
			}
			
		}
		cout<<max<<endl;
	}
}
