#include <bits/stdc++.h>
using namespace std;
int binarysearch(int n,vector <int> v,int start,int end,int mid){
		//cout<<"hello";
		while(start<=end){
			mid=start+(end-start)/2;
			if(v[mid]==n){
				//cout<<"1"<<endl;
				//cout<<mid<<endl;
				return mid;
			}
			else if(v[mid]>n){
				//cout<<"2"<<endl;
				end=mid-1;
			
			}
			else if(v[mid]<n){
				//cout<<"3"<<endl;
				start=mid+1;
			
			}
			
		}
		return -1;	
	

}
int main(void){
	vector <int> v={1,2,3,4,5};
	int mid,n,start=0,end=v.size()-1;
	cin>>n;
	int pos=binarysearch(n,v,start,end,mid);

	
	if(pos==-1){
		cout<<"Not Found";
	}
	else{
		cout<<pos+1;	
	}
}