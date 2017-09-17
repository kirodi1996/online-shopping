#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector < pair <int,int> > circls;
 
int main(){
//load
int n,s,d;
cout<<"insert the size of the vector"<<endl;
cin>>n;
cout<<"insert the size and the dots of each cirlce"<<endl;
for(int i=0;i<n;i++){
    cin>>s>>d;
    circls.push_back(make_pair(s,d));
}
sort(circls.begin(),circls.end());
//output
cout<<"The vector sorted:"<<endl;
for(int i=0;i<n;i++){
        //cout<<circls[i].first<<" "<<circls[i].second;
        if(circls[i].first==1){
        	cout<<circls[i].second<<"hello";
        }
        cout<<endl;
}
}