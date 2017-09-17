#include <bits/stdc++.h>
using namespace std;
 struct trainee{
	int start,days,sad;
};
bool compare(trainee x,trainee y){
	if(x.start!=y.start){
		return x.start<y.start;
	}
	if(x.sad<y.sad) {
		return false;
	}
}
void sadness(int n,int d,trainee *data){
	sort(data,data+n,compare);
	/*for (int i = 0; i < n; ++i)
	{
		cout<<data[i].start<<" "<<data[i].days<<" "<<data[i].sad<<endl;
	}*/
	int count=0,sad=0,temp=0;
	int i;
		for ( i = 0; i < n ; ++i)
		{

			if(count<data[i].start-1){
				count=data[i].start-1;	
			}
			
			while(count<(data[i].days+data[i].start-1) && count<d ){
				
				
				
				if((data[i+1].start-1==count) && (data[i+1].sad>data[i].sad) && (i+1<n)){
					sad+=(data[i].sad*(data[i].days-temp));
				//	cout<<"sad="<<sad<<endl;
					break;
				}
				count++;
				temp++;
				//cout<<"datasad="<<data[i].sad<<"count="<<count<<" "<<"temp="<<temp<<endl;
			}
			
			if(count>=d && temp){
				sad+=(data[i].sad*(data[i].days-(temp)));
				cout<<data[i].sad<<" "<<data[i].days<<" "<<temp<<" "<<sad<<endl;
			}
			//
			else if(!temp && count>=d){
				sad+=(data[i].sad*data[i].days)	;
				count+=data[i].days;
			}
			cout<<sad<<endl;
			temp=0;

		}
		cout<<sad<<endl;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){

		int n,d;
		trainee *data;
		cin>>n>>d;
		data=new  trainee [n];
		
		for (int i = 0; i < n; ++i)
		{
			cin>>data[i].start>>data[i].days>>data[i].sad;
		}
		sadness(n,d,data);
	}

}