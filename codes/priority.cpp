#include <bits/stdc++.h>
using namespace std;
 

struct trainee
{
  int start,days,sad;
};

class comparator
{
 public:
   bool operator()(const trainee& a, const trainee	& b)
   {
        return a.sad<b.sad;
   }
};

int main()
{


	int t;
	cin>>t;
	while(t--){

		int n,d;
		trainee *data;
		cin>>n>>d;
		data=new  trainee [n];
	    priority_queue<trainee, vector<trainee>, comparator> pq;
		for (int i = 0; i < n; ++i)
		{
			cin>>data[i].start>>data[i].days>>data[i].sad;
			pq.push(data[i]);
		}
		while (!pq.empty())
   		{
    	 	cout<<pq.top().start<<" "<<pq.top().days<<" "<<pq.top().sad;
     		pq.pop();
    	 	cout<<endl;
   		}
	//	sadness(n,d,data);
	}
    return 0;
}