#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list<int> *adj;
	void dfsUtil(int v,bool visited[]);
public:
	graph(int V);
	void addEdge(int start,int end);
	void dfs(int v);	
};
graph:: graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void graph:: addEdge(int start,int end){
	adj[start].push_back(end);
}
void graph::dfsUtil(int v,bool visited[]){
	visited[v]=true;
	cout<<v<<" ";
	list<int>::iterator i;
		for (i = adj[v].begin(); i != adj[v].end(); ++i)
		{
			if(!visited[*i])
				dfsUtil(*i,visited);		
		}
	
}
void graph:: dfs(int v){
	bool *visited=new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=false;
	}
	dfsUtil(v,visited);
}
int main(){
	int n,e,start,end;
	cout<<"enter no of vertex\n";
	cin>>n;
	graph g(n);
	cout<<"Enter no of edges\n";
	cin>>e;
	for(int i=0;i<e;i++){
		cin>>start>>end;
		g.addEdge(start,end);	
	}
	cout<<"enter the node";
	int node;
	cin>>node;
	g.dfs(node);
}