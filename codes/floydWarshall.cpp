#include <bits/stdc++.h>
using namespace std;
#define v 4
void floydWarshall(int graph[v][v]){
	int dist[v][v],i,j,k;
	int path[v][v];
	for (int i = 0; i < v; ++i)
	{
		for (int j = 0; j < v; ++j)
		{
			dist[i][j]=graph[i][j];	
		}
	}

	for (int k = 0; k < v; ++k)
	{
		for (int i = 0; i < v; ++i)
		{
			for (int j = 0; j < v; ++j)
			{
				if(dist[i][j]>dist[i][k]+dist[k][j]){
					dist[i][j]=dist[i][k]+dist[k][j];

				}
			}
		}
	}
	for (int i = 0; i < v; ++i)
	{
		for (int j = 0; j < v; ++j)
		{
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int graph[v][v];
 	for (int i = 0; i < v; ++i)
 	{
 		for (int j = 0; j < v; ++j)
 		{
 			cin>>graph[i][j];
 		}
 	}
	
	floydWarshall(graph);
}