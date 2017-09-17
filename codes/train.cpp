#include <bits/stdc++.h>
using namespace std;
 struct trainee{
	long long int start,days,sad;
};
bool compare(trainee x,trainee y){
	if(x.start!=y.start){
		return x.start<y.start;
	}
	if(x.sad<y.sad) {
		return false;
	}
}
class comparator
{
 public:
   bool operator()(const trainee& a, const trainee	& b)
   {
        return a.sad<b.sad;
   }
};
void sadness(long long int n,long long int d,trainee *data){
	sort(data,data+n,compare);
	/*for (int i = 0; i < n; ++i)
	{
		cout<<data[i].start<<" "<<data[i].days<<" "<<data[i].sad<<endl;
	}*/
		long long int k=0;
	    priority_queue<trainee, vector<trainee>, comparator> pq;
		for (long long int i = 1; i <= d; ++i)
		{
			if(data[k].start==i){
				while(data[k].start==i){

					pq.push(data[k]);//data push day by day	
    	 			k++;	
				}
			}
			if(!pq.empty()){
				trainee temp;
				temp=pq.top();
				pq.pop();
				temp.days--;
				if(temp.days>0){
					pq.push(temp);	
				}
				
			}	
			
		}
		long long int sum=0;
		while (!pq.empty())
   		{
    	 	//cout<<pq.top().start<<" "<<pq.top().days<<" "<<pq.top().sad;
    	 	sum+=pq.top().days*pq.top().sad;
     		pq.pop();
    	 	//cout<<endl;
   		}
   		

		cout<<sum<<endl;
	
		
}
int main(){
	long long int t;
	cin>>t;
	while(t--){

		long long int n,d;
		trainee *data;
		cin>>n>>d;
		data=new  trainee [n];
		
		for (long long int i = 0; i < n; ++i)
		{
			cin>>data[i].start>>data[i].days>>data[i].sad;
		}
		sadness(n,d,data);
	}

}