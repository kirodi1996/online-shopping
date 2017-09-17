#include <bits/stdc++.h>
using namespace std;
int main(){
	int A,n,s,f;
	priority_queue<int> hp;
	cin>>A;
	cin>>n;
	std::vector<int> B;
	while(n--){
		cin>>s;
		B.push_back(s);
		hp.push(s);
	}
	 int max=0;
	while(A--){
		(max=(max%1000000007)+(hp.top()%1000000007))%1000000007;
		int k=hp.top();
		k/=2;
		cout<<max<<endl;
		hp.pop();
		hp.push(k);
	}
	cout<<max%1000000007<<endl;
}