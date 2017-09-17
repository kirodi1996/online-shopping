#include <bits/stdc++.h>
#include <array>
using namespace std;
int main(){
	array <int,4> data={1,2,3,4};
	array <int,4> data2={8,9,5,3};
	for (auto i = data.begin(); i < data.end(); ++i)
	{
		cout<<*i<<" ";
	}
	for (auto i = data.cbegin(); i < data.cend(); ++i)
	{
		cout<<*i<<" ";
	}
	cout<<data.front()<<" ";
	cout<<data.back()<<endl;
	cout<<data.size()<<endl;
	cout<<data.max_size()<<endl;
	cout<<data.at(2)<<endl;
	cout<<data[2]<<endl;
	data.swap(data2);

	for(int &x: data){cout<<x<<" ";}
	cout<<endl;
	for(int &x: data2){cout<<x<<" ";}
	cout<<endl;	
	data.fill(5);
	for(int &x: data){cout<<x<<" ";}
}