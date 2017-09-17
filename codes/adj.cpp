#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
   int n,m ; 
   cin>>n>>m;
   int w;
   vector<vii> adjList(n+1); //For vertex 1...n
   //Reading edges for the input for graph
   for(int i=0;i<m;i++)
   {
      int u,v;
      cin>>u>>v>>w;
    /*Here u->v is the edge and pair second term can be used to store weight in
      case of weighted graph.
    */
      adjList[u].push_back(make_pair(v,w));
   }
   //To print the edges stored in the adjacency list
   cout<<adjList[1][1].second;
   /*for(int i=1;i<=n;i++)
   {
       for(int j=0;j<(int)adjList[i].size();j++)
       {
           cout<<"Edge is "<<i<<" -> "<<adjList[i][j].first<<endl;
           cout<<"Weight is "<<adjList[i][j].second<<endl;
       }
   }*/
   return 0;
}