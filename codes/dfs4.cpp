#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list <int> *adj;
	void dfsUtil(int v,int *visited);
	public:
		graph(int V);
		//list <int> *adj;
		void addEdges(int start,int end);
		void dfs(int n);
};

graph:: graph(int V){
	this->V=V;
	adj=new list <int> [V];
}

void graph::addEdges(int start,int end){
	adj[start].push_back(end);	
}
void graph::dfsUtil(int v,int *visited){
	list<int> ::iterator i;
	visited[v]=1;
	cout<<v<<" ";
	for ( i=  adj[v].begin(); i!=  adj[v].end(); ++i)
	{
		if(!visited[*i]){
			dfsUtil(*i,visited);
		}
	}
}
void graph:: dfs(int s){
	list <int> queue;
	//queue.push_back(s);
	int *visited=new int[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=0;
	}
	dfsUtil(s,visited);
}
int main(){
	int n,s,e,start,end ;
	cin>>n;
	graph g(n);
	
	cout<<"Enter the source\n";
	cin>>s;
	cout<<"Enter the no of edges\n";
	cin>>e;
	for (int i = 0; i < e; ++i)
	{
		cin>>start>>end;
		g.addEdges(start,end);
	}
	g.dfs(s); 
}