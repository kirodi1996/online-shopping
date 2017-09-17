#include <bits/stdc++.h>
using namespace std;
# define V 5
void printMst(int graph[V][V],int n,int parent[]){
	for (int i = 1; i < V; ++i)
	{
		cout<<parent[i]<<"-"<<i<<" "<<graph[i][parent[i]]<<endl;
	}
}
int min_mst(int key[V],bool add[V]){
	int min=INT_MAX;
	int min_index;
	for (int i = 0; i < V; ++i)
	{
		if(!add[i] && key[i]<min){
			min=key[i],min_index=i;
		}
	}
	return min_index;
}
void prim(int graph[V][V]){
	int parent[V];
	int key[V];
	bool add[V];
	parent[0]=-1;
	key[0]=0;
	for (int i = 1; i < V; ++i)
	{
		key[i]=INT_MAX,add[i]=false;
    }
    for (int i = 0; i <V-1 ; ++i)
    {
    	int u=min_mst(key,add);
    	add[u]=true;
    	
    	for (int v = 0; v < V; ++v)
    	{
    		if(graph[u][v] && add[v]==false && graph[u][v]<key[v]){
    			parent[v]=u,key[v]=graph[u][v];
    		}
    	}
    	
    }
    printMst(graph,V,parent);
}
int main(){
	int graph[V][V]={{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
    
                     };
    prim(graph);                 
}