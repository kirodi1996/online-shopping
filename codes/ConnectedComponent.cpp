#include <bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list <int> *adj;
	void dfsUtil(int v,int *visited);
	void fillOrder(int v,int *visited,stack<int> &Stack);
	public:
		graph(int V);
		//list <int> *adj;
		void addEdges(int start,int end);
		//void dfs(int n);
		void printSCC();
		graph getTranspose();
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
graph graph::getTranspose(){
	graph g(V);
	for ( int v = 0; v<  V; ++v)
	{
		list <int> ::iterator i;
		for ( i = adj[v].begin(); i !=adj[v].end() ; ++i)
		{
			g.adj[*i].push_back(v);
		}
	}
	return g;
}
void graph::fillOrder(int v,int *visited,stack<int> &Stack){
	visited[v]=1;
	//cout<<v<<" ";
	list <int> ::iterator i;
	for (i = adj[v].begin(); i!= adj[v].end(); ++i)
	{
		if(!visited[*i]){
			fillOrder(*i,visited,Stack);
		}	
	}
	Stack.push(v);
}
/*void graph:: dfs(int s){
	list <int> queue;
	//queue.push_back(s);
	
	dfsUtil(s,visited);
}*/
void graph::printSCC(){
	stack<int> Stack;
	int *visited=new int[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=0;
	}
	for (int i = 0; i < V; ++i)
	{
		if(visited[i]==0){
			fillOrder(i,visited,Stack);
		}
	}		
	graph gr=getTranspose();
	for (int i = 0; i <V ; ++i)
	{
		visited[i]=0;
	}
	while(Stack.empty()==false){
		//cout<<"hello";
		int v=Stack.top();
		Stack.pop();	
		if(!visited[v]){
			gr.dfsUtil(v,visited);
			cout<<endl;
		}
	}
}
int main(){
	int n,s,e,start,end ;
	cin>>n;
	graph g(n);
	
	/*cout<<"Enter the source\n";
	cin>>s;*/
	cout<<"Enter the no of edges\n";
	cin>>e;
	for (int i = 0; i < e; ++i)
	{
		cin>>start>>end;
		g.addEdges(start,end);
	}
	cout<<"Connected Components are::\n";
	g.printSCC(); 
}