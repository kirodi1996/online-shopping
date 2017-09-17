#include <bits/stdc++.h>
using namespace std;
bool isPrime(int no){
	for (int i = 2; i <= sqrt(no); ++i)
	{
		if(no%i==0){
			return false;
		}
	}
	return true;
}
class graph
{
	int V;
	list<int> *adj;
	void dfsUtil(int v,bool *visited);
public:
	graph(int V);
	void adjacent(int start,int end);
	void dfs(int v);
};
graph::graph(int V){
	this->V=V;
	adj=new list <int>[100000]; 
}
void graph::adjacent(int start,int end){
	adj[start].push_back(end);
}
void graph::dfsUtil(int v,bool *visited){
	if(isPrime(v) && v!=1){
		//	cout<<"1"<<" ";
		visited [v]=true;	

	}
	
	cout<<v<<" ";
	list<int> ::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if(!visited[*i])
			dfsUtil(*i,visited);
	}
	
}
void graph::dfs(int v){

	bool *visited=new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=false;
	}
	dfsUtil(v,visited);
	cout<<endl;
}
int main(){
	cout<<"Enter the no of nodes:::";
	int n,edge,start,end;
	cin>>n;
	graph g(n);
	cout<<"Enter the no of edges:::";
	cin>>edge;
	for (int i = 0; i < edge; ++i)
	{
		cin>>start>>end;
		g.adjacent(start,end);	
	}
	g.dfs(11);
	g.dfs(3);
	g.dfs(3);
	g.dfs(1);
	g.dfs(7);
	
}