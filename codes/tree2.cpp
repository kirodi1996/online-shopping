#include <bits/stdc++.h>
using namespace std;
int parent[100000]={0},visited[100000]={-1};
class Graph
{
     int V;
    vector< list< pair< int,  int> > > adj;
        
    public:
    Graph( int V);  
    void addEdge( int v1,int v2, int w); 
    long long int isReachable( int s,  int d, int k,int j);  
};
 
Graph::Graph( int V)
{
    this->V = V;
    adj.resize(V+1);
    adj.clear();
}
 
void Graph::addEdge( int v1,  int v2, int weight)
{
    adj[v1].push_back(make_pair(v2, weight));
    adj[v2].push_back(make_pair(v1, weight));
}
long long int  Graph::isReachable(int s,int d,int K)
{

    
    if(s==d){
      return 0;
    }
    
    long long int xors=0;
    list<  pair< int,  int> > ::iterator i;
   
     bool *visited=new bool[V+1];
    for (int i = 0; i < V+1; ++i)
    {
       visited[i]=false;   
    }
    
    stack<int> stack;
    
    if(j==0){
      int temp;    
    stack.push(s);
  //  t.push(s);
   // cout<<s<<" ";
   while (!stack.empty())
    {
        s = stack.top();
        stack.pop();
 
         if (!visited[s])
        {
           // cout << s << " ";
            visited[s] = true;
        }
 
        
 
        for ( i = adj[s].begin(); i != adj[s].end(); ++i)

        { 
            if (!visited[(*i).first]){
              parent[(*i).first]=s;
              if((*i).first==d){
                temp=d;
                break;
              }
                stack.push((*i).first);
                /*if((*i).second<=K){
                  t.push((*i).first);  
                }*/
                 
            }
            
        }
              
    }
    /*while(!stack.empty()){
      cout<<stack.top()<<" ";
      stack.pop();
    }*/
    /* while(!t.empty()){
         for (i = adj[temp].begin(); i != adj[temp].end(); ++i)
        {
            if((*i).first==t.top()){
              
                xors^=(*i).second;  
              
              
              temp=t.top();
              
              break;
            } 
 
           
        }
        t.pop();

     }
*/
     return xors;
   
    }
    
}

int main()
{
     int t;
    scanf("%d",&t);
    while(t--){
       int v;
       int e;
      scanf("%d",&v);
      e=v-1;
      Graph g(v);
      int start,end,weight;
     // cout<<e<<endl;
      for ( int i = 0; i < e; ++i)
      {
        scanf("%d %d %d",&start,& end,&weight);
        g.addEdge(start,end,weight);
      }
       int m;
      scanf("%d",&m);
    //  cout<<m;
       int U,V,K;
      for (int i = 0; i < m; ++i)
      {
        scanf("%d %d %d",&U,&V,&K)  ;
        printf("%lld\n",g.isReachable(U,V,K));
        
      }
        
    }
    
    
    
}