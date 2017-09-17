#include <bits/stdc++.h>
using namespace std;
int main(){
	list <int> l1={1,2,3,4,5};
	list <int> :: iterator it;
	l1.push_back(20);
	l1.remove(4);
	l1.pop_back();
	for ( it = l1.begin(); it != l1.end() ; ++it)
	{
		cout<<*it<<" ";
	}
	l1.clear();
	for ( it = l1.begin(); it != l1.end() ; ++it)
	{
		cout<<*it<<" ";
	}
}