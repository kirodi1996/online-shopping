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
	//cout<<V;
	this->V=V;
	adj=new list<int> [V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
	//adj[w].push_back(v);
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
	int n,m;
	cin>>n>>m;
	int V=m-n+1;
	graph g(V);
	//cout<<"hello";
	for (int i = n; i <= m; ++i)
	{
		int lastdigit=i%10;
		if(i*10+lastdigit+1<=m && lastdigit!=9){
			g.addEdge(i,i*10+lastdigit+1);
		} 
		if(i*10+lastdigit-1<=m && lastdigit!=0){
			g.addEdge(i,i*10+lastdigit-1);
		}
	}
	for (int i = 10; i <= 21; ++i)
	{
		g.bfs(i);
	}
	
}