#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,m;
	int total=0;
	cin>>n>>m;
	
	vector< vector<int> > table(n,vector<int>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>table[i][j];
				
		}
	}
	int starti=0,startj=0;
	int endi=n,endj=m;
	int temp1=0;
	int max=1;
	int initiali;
	int initialj,lasti,lastj;
	//cout<<"hello"<<endl;
	while(1){
		//column over
		if(endj<startj){
			endj=m;
			endi--;
		}
		//row over
		if(endi<starti){
			startj++;
			endi=n;
		}
		//coulmn over
		if(startj==m){
			starti++;
			startj=0;
		}
		if(starti==n){
			break;
		}
		int a[100000]={0};
		//cout<<"starti="<<starti<<"startj="<<startj<<"endi="<<endi<<"endj="<<endj<<endl;
		for (int i = starti; i < endi; ++i)
		{	
			for (int j = startj; j < endj; ++j)
			{
				a[table[i][j]]+=1;

			}
		}
		//cout<<"hello"<<endl;
		for (int i = 0; i < 100000; ++i)
		{
			if(a[i]%2==1){
				//cout<<"i="<<i<<" "<<a[i]<<endl;
				temp1++;
			}
		
		}
		
		
			int temp;
		//cout<<"temp1="<<temp1<<endl;
		if(temp1==0 || temp1==1){
		
			temp=(((endi-starti))*((endj-startj)));
		}

		temp1=0;
		if(temp>max){
			initiali=starti;
			initialj=startj;
			lastj=endj-1;
			lasti=endi-1;
			max=temp;
			//break;
		}
		//a[100000]={0};	
		endj--;
	}
		
	cout<<max<<endl;
	cout<<initiali<<" "<<initialj<<" "<<lasti<<" "<<lastj<<endl;
}