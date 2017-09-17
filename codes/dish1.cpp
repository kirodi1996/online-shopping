#include <bits/stdc++.h>

using namespace std;
map <int,int> my;
vector <pair<int ,int> > v[1000005];
int test(vector <pair <int,int> > d){
	int sz=d.size();
	if(sz==0){
		return 0;
	}
	int ans=1;
	sort(d.begin(),d.end());
	int prev=d[0].first;
	for(int i=1;i<sz;i++){
		if(d[i].second>=prev){
			ans++;
			prev=d[i].first;
		}
	}
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		my.clear();
		int n,com;
		int pos=0;
		scanf("%d%d",&n,&com);
		if(n==0){
			printf("0\n");
			continue;
		}
		for (int i = 0; i < n; ++i)
		{
			v[i].clear();
		}
		for (int i = 0; i < n; ++i)
		{
			int s,f,c;
			scanf("%d%d%d",&s,&f,&c);
			if(my.count(c)==0){
				my[c]=pos++;
			}
			v[my[c]].push_back(make_pair(f,s));
		}
		int ans=0;
		for(int i=0;i<pos;i++){
			ans=ans+test(v[i]);
		}
		printf("%d\n",ans);
	}
}