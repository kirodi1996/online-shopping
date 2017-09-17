#include <bits/stdc++.h>
using namespace std;
#define N 100005
int n,m,p[N],rank1[N];
vector<pair<int,pair<int ,int> > > B;
void make_set(){
	for (int i = 1; i <= n; ++i)
	{
		p[i]=i;rank1[i]=0;
		//cout<<p[i]<<" "<<rank1[i];	
	}

}
int  find_set(int u){
	int x=p[u];
	//cout<<"x="<<x<<endl;
	if(x!=u){
		find_set(x);
	}
	return x;	
}
void merge_set(int u,int v){
	int s1=find_set(u);
	int s2=find_set(v);
	//cout<<"s1="<<s1<<" "<<"rank[s1]="<<rank1[s1]<<" "<<"s2="<<s2<<" "<<"rank1[s2]="<<rank1[s2]<<" "<<endl;
	if(rank1[s1] && rank1[s2]){
		p[s2]=s1;
	}
	else{
		p[s1]=s2;
	}
	if(rank1[s1]==rank1[s2]){
		rank1[s2]+=1;
	}

}
int  kruskal(){
	make_set();
	int res=0;
	for (int i = 0; i < B.size(); ++i)
	{
		int v1=B[i].second.first;
		int v2=B[i].second.second;
		if(find_set(v1)!=find_set(v2)){
			res+=B[i].first;
			merge_set(v1,v2);
		}
	}
	return res;
}
int main(){
	int A,E,x,y,z;
	cout<<"Enter no of nodes:::";
	cin>>A;
	n=A;
	cout<<"Enter no of edges:::";
	cin>>E;
	
	for (int i = 0; i < E; ++i)
		{
			cin>>x>>y>>z;
			B.push_back(make_pair(z,make_pair(x,y)));
		}	
	sort(B.begin(),B.end());
	cout<< kruskal();	
}