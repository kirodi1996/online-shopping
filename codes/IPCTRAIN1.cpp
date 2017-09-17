#include <bits/stdc++.h>
using namespace std;

struct per
{

  long long int s;	
  long long int d;
  long long int t;
  long long int ind;
  //long long int ind;
  
 
  per(long long int iM1,long long int iM2,long long int iM3,long long int iM4) : s(iM1), t(iM2), d(iM3),ind(iM4) {}

  bool operator < (const per &iData) const
  {
    return d < iData.d;
  }

};
struct per2
{
  long long int s;	
  long long int ind;
  //long long int ind;
  
 
  per2(long long int iM1,long long int iM2) : s(iM1), ind(iM2) {}

  bool operator < (const per2 &iData) const
  {
    return s < iData.s;
  }

};

int main()
{ 
	long long int t,n,d;
	cin>>t;
	while(t--)
	{
  		vector<per> vect;
		cin>>n>>d;
		priority_queue<per2> q;
		for(int i=0;i<n;i++)
		{
			int da,t,s;
			cin>>da>>t>>s;
			vect.push_back(per(s,t,da,i));
			//q.push(per2(s,i));
		}
  		//vect.push_back(per(5,2,1));
 
  		sort(vect.begin(), vect.end());
 
	  //for(vector<per>::iterator it = vect.begin(); it != vect.end(); it++)
	  //  cout << "(" << it->d << "," << it->t << "," << it->s << ")" << endl;
  		
  		for(int i=0;i<vect.size();i++)
  		{	
  			/*cout<<" "<<vect[i].d;
  			cout<<" "<<vect[i].t;
  			cout<<" "<<vect[i].s;
  			*/
  			vect[i].ind=i;
  			//cout<<" "<<vect[i].ind<<endl;

  		}
  		
  		//priority_queue<per> q;
  		int j=0;
  		for(int i=1;i<=d;i++)
		{

			while(vect[j].d<=i && j<vect.size())
			{
				//cout<<i<<" "<<j<<" "<<vect[j].s<<" "<<vect[j].ind<<endl;
				//q.push(per(vect[j].s,vect[j].t,vect[j].d,vect[j].ind));
				/*cout<<"*"<<vect[j].d;
	  			cout<<" "<<vect[j].t;
	  			cout<<" "<<vect[j].s;
	  			cout<<" "<<vect[j].ind<<endl;
	  			*/
				q.push(per2(vect[j].s,vect[j].ind));
				j++;
			}

			/*
			cout<<q.top().d<<" "<<q.top().t<<" "<<q.top().s<<endl;
			q.pop();
			cout<<q.top().d<<" "<<q.top().t<<" "<<q.top().s<<endl;
			q.pop();
			cout<<q.top().d<<" "<<q.top().t<<" "<<q.top().s<<endl;
			q.pop();
			cout<<q.top().d<<" "<<q.top().t<<" "<<q.top().s<<endl;
			q.pop();
			cout<<q.top().d<<" "<<q.top().t<<" "<<q.top().s<<endl;
			q.pop();
			/**/
			
			int ind=q.top().ind;
			//cout<<ind<<endl;
			
			q.pop();

			/*
			cout<<"---"<<vect[ind].d;
  			cout<<" "<<vect[ind].t;
  			cout<<" "<<vect[ind].s;
  			cout<<" "<<vect[ind].ind<<endl;
			*/

			
			if(vect[ind].t)
			{
				vect[ind].t=vect[ind].t-1;
  				q.push(per2(vect[ind].s,vect[ind].ind));
			}
  			
			//if(vect[ind].t!=0)
			//	q.push(per2(vect[ind].s,vect[ind].ind));	

		}
		/*
		cout<<q.size()<<endl;
		//q.top().t=q.top().t-1;
		int x=q.size();
		for(int j=0;j<x;j++)
		{
			cout<<q.top().ind<<" "<<q.top().s<<endl;
				q.pop();
		}
		*/
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			/*
			cout<<" "<<vect[i].d;
  			cout<<" "<<vect[i].t;
  			cout<<" "<<vect[i].s;
  			cout<<" "<<vect[i].ind<<endl;
  			
  			cout<<"sum="<<sum<<endl;
  			*/
  			sum=sum+(vect[i].t*vect[i].s);
		}
		cout<<sum<<endl;
		//cout<<"ss";
		
	}
  return 0;
}