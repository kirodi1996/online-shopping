#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list <int> *adj;
	//bool *visited;
public:
	graph(int V);
	void addEdge(int start,int end);	
	void bfs(int s);
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void graph::addEdge(int start,int end){
	adj[start].push_back(end);
}
void graph::bfs(int s){
	bool *visited=new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=false;
	}
	list<int> queue;
	visited[s]=true;
	
	queue.push_back(s);
	list <int> ::iterator i;
	while(!queue.empty()){
		 s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		
		for ( i =adj[s].begin() ; i !=adj[s].end() ; ++i)
		{
			if(!visited[*i]){
				visited[*i]=true;
				queue.push_back(*i);	
			}
			
		}
	}
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
		g.addEdge(start,end);	
	}
	g.bfs(2);
}