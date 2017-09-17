#include <bits/stdc++.h>
using namespace std;

class Graph
{
    long long int V;
    vector< list< pair<long long int, long long int> > > adj;
        
    public:
    Graph(long long int V);  
    void addEdge(long long int v1,long long int v2,long long int w); 
    long long int isReachable(long long int s,long long  int d,long long int k);  
};
 
Graph::Graph(long long int V)
{
    this->V = V;
    adj.resize(V+1);
    adj.clear();
}
 
void Graph::addEdge(long long int v1,long long  int v2,long long int weight)
{
    adj[v1].push_back(make_pair(v2, weight));
    adj[v2].push_back(make_pair(v1, weight));
}
 
long long int  Graph::isReachable(long long int s,long long  int d,long long int K)
{
    if(s==d){
      return 0;
    }
   long long  int xors=0;
    
    list<  pair<long long int, long long int> > ::iterator i;
   
     vector<bool> visited(V+1, false);
 
    
    stack<int> stack;
    
    
    int temp;    
    stack.push(s);
   // t.push(s);
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
            if (!visited[(*i).first]){
              if((*i).first==d){
                temp=d;
                break;
              }
              stack.push((*i).first);
     //         t.push((*i).first);
            }
              
    }
    /*while(!stack.empty()){
      cout<<stack.top()<<" ";
      stack.pop();
    }*//*
     while(!t.empty()){
         for (i = adj[temp].begin(); i != adj[temp].end(); ++i)
        {
            if((*i).first==t.top()){
              if((*i).second<=K){
                xors^=(*i).second;  
              }
              
              temp=t.top();
              
              break;
            } 
 
           
        }
        t.pop();

     }

     return xors;*/
   
}
 
int main()
{
    long long int t;
    cin>>t;
    while(t--){
      long long int v;
      long long int e;
      scanf("%lld",&v);
      e=v-1;
      Graph g(v);
      long long int start,end,weight;
     // cout<<e<<endl;
      for (long long int i = 0; i < e; ++i)
      {
        scanf("%lld %lld %lld",&start,& end,&weight);
        g.addEdge(start,end,weight);
      }
      long long int m;
      scanf("%lld",&m);
    //  cout<<m;
      long long int U,V,K;
      for (long long i = 0; i < m; ++i)
      {
        scanf("%lld %lld %lld",&U,&V,&K)  ;
        printf("%lld\n",g.isReachable(U,V,K));
        
      }
        
    }
    
    
    
}