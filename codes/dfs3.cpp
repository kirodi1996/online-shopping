#include <bits/stdc++.h>
using namespace std;

class graph
{
	int V;
	list<int> *adj;
	public:
		graph(int V);
		
		void addEdges(int start,int end);	
		
		void bfs(int s);
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void graph::addEdges(int start,int end){
	adj[start].push_back(end);
}
void graph::bfs(int s){
	int *visited =new int[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]= 0;
	}
	list <int> queue;
	visited[s]=1;
	queue.push_back(s);
	list<int> ::iterator i;
	while(!queue.empty()){
		s=queue.front();
		cout<< s<<" ";
		queue.pop_front();
		for ( i = adj[s].begin(); i!=adj[s].end(); ++i)
		{
			if(!visited[*i]){
				visited[*i]=1;
				queue.push_back(*i);
			}
		}
	}
	
	
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
	g.bfs(s); 
}