#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	set<string>se;
	int n;
	cin>>n;
string s1[10000],s2[10000];
string s;
string name;
int r,p=0;
char c;
int max=0;
int count=0;
bool b=true;
bool d=true;
for(int i=1;i<=n;i++)

{
	cin>>c;
	cin>>s;
//	cout<<s<<endl;
	if(c=='+')
	{
		s1[r]=s;
			
		//	cout<<s1[r];
			r++;
	}
	else if(c=='-')
	{
		s2[p]=s;
	
		p++;
	}
}
sort(s2,s2+p);
for(int i=0;i<p;i++)
{
	
for(int j=0;j<r;j++)
{
		auto mis1=mismatch(s1[j].begin(),s1[j].end(),s2[i].begin());
		if(mis1.first==s1[j].end()||mis1.second==s2[i].end())
		{
			cout<<"-1"<<endl;
			d=false;
			goto x3;
			
		}
				auto dis=distance(s2[i].begin(),mis1.second);
		if(dis>max)
		{
			max=dis;
		}
}
count++;
name=s2[i].substr(0,max+1);
se.insert(name);
d=true;
x3:max=0;
}
if(d==true)
{
auto it=se.begin();
cout<<count<<endl;
while(it!=se.end())
{
	cout<<*it<<endl;
	it++;
}
}
}
