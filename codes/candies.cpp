#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> ratings(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>ratings[i];
	}
	 int len = ratings.size(), res = 0, i;
        if(len>0)
        {
           vector<int> number(len,0); 
           number[0] = 1; 
           for(i=1; i<len;++i) number[i] = ratings[i]>ratings[i-1]?number[i-1]+1:1;
           	for (int i = 0; i < n; ++i)
           	{
           		cout<<number[i]<<" ";
           	}
           	cout<<endl;
            for(i=len-2, res = number[len-1]; i>=0;--i)
            {
               if( (ratings[i]>ratings[i+1]) && number[i]<(number[i+1]+1) ) number[i] = number[i+1]+1;
                res += number[i];
            }
           for (int i = 0; i < n; ++i)
           	{
           		cout<<number[i]<<" ";
           	}
           	cout<<endl;
        }
        cout<< res;
} 