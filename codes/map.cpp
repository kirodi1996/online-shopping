#include <bits/stdc++.h>
using namespace std;
int main()
{
	map <string,int> m1{{"ganesh",10},{"mohan",20},{"karan",500},{"ramesh",80}};
	map <string ,int> :: iterator it=m1.begin();
	while(it!=m1.end()){
		cout<<it->first<<" ";
		it++;
	}
}