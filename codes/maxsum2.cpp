#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k=n,s;
	std::vector<int> A;
	std::vector<int> B;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		A.push_back(s);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		B.push_back(s);
	}
	priority_queue<pair<int,pair<int,int>> > heap;

	set<pair<int,int>> s;
	std::vector<int> ans;
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	heap.push_back(make_pair(A[n-1]+B[n-1],make_pair([n-1],[n-1])));
	s.insert(make_pair(int,int));
	while(k--){
		pair<int,pair<int,int>>  top;
		top=heap.top();
		hp.pop();
		ans.push_back(top.first);
		int L=top.second.first;
		int R=top.second.second;
		if(L>=0 && R>0 && (s.find(L,R-1)==s.end())){
			heap.push_back(make_pair(A[L]+B[R-1],make_pair([L],[R-1])));
			s.insert(L,R-1);
		}
		if(L>=0 && R>0 && (s.find(L-1,R)==s.end())){
			heap.push_back(make_pair(A[L-1]+B[R],make_pair([L-1],[R])));
			s.insert(L-1,R);
		}
	}
}