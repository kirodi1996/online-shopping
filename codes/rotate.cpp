#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s,b;

	vector <int> v1;
	vector <int> v2;
	for (int i = 0; i < 5; ++i)
	{
		cin>>s;
		v1.push_back(s);
	}
	cin>>b;
	//cout<<v1.size()<<endl;
	for (int i = 0; i < 5; ++i)
	{
		int ind=(i-b);

		if(ind>=0){
			v1[i]=v1[ind];
			cout<<ind<<endl;
		}
		else if(ind<0){
			b=b%v1.size();
			ind=v1.size()-b;
			v2.push_back()
			cout<<ind<<endl;
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<v1[i]<<" ";
	}
}