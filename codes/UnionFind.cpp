#include <bits/stdc++.h>
using namespace std;
struct Edge
{
	int src,dest,weight;
};
struct Graph
{
	int V,E;
	Edge *edge;
};
Graph *createGraph(int v,int e){
	Graph *graph=new Graph();
	graph->V=v;
	graph->E=e;
	graph->edge= new Edge[graph->E];
	return graph;	
}
int find(int *parent,int i){
	if(parent[i]==-1){
		return i;
	}	
	return find(parent,parent[i]);

}
void Union(int *parent,int x,int y){
	int xset=find(parent,x);
	int yset=find(parent,y);
	parent[xset]=yset;
}
bool isCycle(Graph *graph){
	int *parent=(int *)(new int[graph->V]);
	memset(parent,-1,sizeof(int)*graph->V);
	for (int i = 0; i < graph->E; ++i)
	{
		int x=find(parent,graph->edge[i].src);
		int y=find(parent,graph->edge[i].dest);
		if(x==y){
			return 1;
		}
		Union(parent,x,y);
	}
	return 0;
}

int main(){
	int v,e;
	cin>>v>>e;
	Graph *graph=createGraph(v,e);
	for (int i = 0; i < e; ++i)
	{
		cin>>graph->edge[i].src>>graph->edge[i].dest>>graph->edge[i].weight;
	}
	if(isCycle(graph)){
		cout<<"hello";
	}
	else{
		cout<<"Bu";
	}
}