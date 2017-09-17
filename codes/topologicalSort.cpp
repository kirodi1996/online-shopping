#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list <int> *adj;
	void topologicalUtilSort(int s,int *visited,stack <int> &Stack);
public:
	graph(int V);
	void addEdges(int start,int end);
	void topologicalSort();
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void graph::addEdges(int start,int end){
	adj[start].push_back(end);
}
void graph::topologicalUtilSort(int s,int *visited,stack <int> &Stack){
	list<int> ::iterator i;
	visited[s]=1;
	for ( i = adj[s].begin(); i !=adj[s].end() ; ++i)
	{
		if(!visited[*i]){
			
			topologicalUtilSort(*i,visited,Stack);
		}
	}
	Stack.push(s);
}
void graph::topologicalSort(){
	stack <int> Stack;
	int *visited=new int[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=0;
	}
	
	for (int i = 0; i < V; ++i)
	{
			if(!visited[i])
			topologicalUtilSort(i,visited,Stack);
	}
	while(!Stack.empty()){
		cout<<Stack.top()<<" ";
		Stack.pop();
	}
	
	
	
}
int main(){
	int n,e;
	cout<<"Enter the no of nodes";
	cin>>n;
	graph g(n);
	int start,end;
	cout<<"Enter the no of edges::\n";
	cin>>e;
	for (int i = 0; i < e; ++i)
	{
		cin>>start>>end;
		g.addEdges(start,end);
	}
	g.topologicalSort();
}