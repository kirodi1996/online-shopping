#include <bits/stdc++.h>
using namespace std;
vector<bool> visited(10000,false);
class graph
{
	int V;
	list<int> *adj;
public:
	graph(int V);
	void addEdge(int v,int w);
	void bfs(int s);
};
graph:: graph(int V){
	this->V=V;
	adj=new list<int> [V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}
void graph::bfs(int s){
	list<int> queue;
	queue.push_back(s);
	//s=queue.front();
	visited[s]=true;
	list<int>::iterator i;
	while(!queue.empty()){
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		for ( i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(!visited[*i]){
				visited[*i]=true;	
				queue.push_back(*i);
			}
			
		}
	}

}
int main(){
	int n;
	cin>>n;
	graph g(n);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.bfs(2);
}