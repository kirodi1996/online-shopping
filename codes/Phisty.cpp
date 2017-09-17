#include <bits/stdc++.h>
using namespace std;
class Graph
{
	int V;
	vector< list< pair< int,  int> > > adj;
	void DFSUtil(int *par,int v,bool visited[]);
	int constructSTUtil(int *parent, int ss, int se, int *st, int si);
	int RMQUtil(int *st, int ss, int se, int qs, int qe, int index);
	public:
		Graph(int V);
		
		void addEdges(int start,int end,int weight);
		void DFS(int *parent,int n);
		int *constructSeg(int *parent,int n);
		int RMQ(int *st, int n, int qs, int qe);
		int finalAns(int qs,int qe,int lca,int w,int *parent);
};
int Graph::finalAns(int qs,int qe,int lca,int w,int *parent){
	list<  pair< int,  int> > ::iterator i;
	long long int xors=0;
  	
    /*while(qs!=lca ){
    	for ( i = adj[qs].begin(); i !=adj[qs].end() ; ++i)
    	{
    
 				if((*i).first==parent[qs]){
 					if((*i).second<=w){
 						xors^=(*i).second;
 					}
 					break;
 				}   			
    	}
    	
    	qs=parent[qs];
    	
    }
     while(qe!=lca ){
    	for ( i = adj[qe].begin(); i !=adj[qe].end() ; ++i)
    	{
 				if((*i).first==parent[qe]){
 					if((*i).second<=w){
 						xors^=(*i).second;
 					}
 					break;
 				}   		
    	}
    	qe=parent[qe];
    
    	//cout<<"s="<<s<<endl;
    }
   */
    return xors;
}
Graph:: Graph(int V){
	this->V=V;
	adj.resize(V);
}

void Graph::addEdges(int start,int end,int weight){
	 adj[start].push_back(make_pair(end, weight));
	  adj[end].push_back(make_pair(start, weight));
}
void Graph::DFS(int *parent,int s)
{
	
    
    vector<bool> visited(V, false);
 	stack<int> stack;
 	list<  pair< int,  int> > ::iterator i;
    stack.push(s);
 	parent[s]=s;
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
            //	cout<<*i<<" "<<s<<endl;
            	parent[(*i).first]=s;
                stack.push((*i).first);
            }
    }
   
}
int Graph::RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    
    if (qs <= ss && qe >= se)
        return st[index];
 
    if (se < qs || ss > qe)
        return INT_MAX;
 
     int mid =(ss+se)/2;
    return min(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
 

int Graph::RMQ(int *st, int n, int qs, int qe)
{
     if (qs < 0 || qe > n-1 || qs > qe)
	{
    	printf("Invalid Input");
    	return -1;
	}
 
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
int Graph:: constructSTUtil(int parent[], int ss, int se, int *st, int si)
{
    
    if (ss == se)
    {
        st[si] = parent[ss];
   //     cout<<"ss="<<ss<<"1="<<st[si]<<endl;
        return parent[ss];
    }
 
   
    int mid = (ss+se)/2;
    st[si] =  min(constructSTUtil(parent, ss, mid, st, si*2+1),
                     constructSTUtil(parent, mid+1, se, st, si*2+2));
   // cout<<"ss="<<ss<<"2="<<st[si]<<endl;
    return st[si];
}
int  *Graph::constructSeg(int *parent,int n){
	int x = (int)(ceil(log2(n))); 
   
    int max_size = 2*(int)pow(2, x) - 1; 
 
    int *st = new int[max_size]; 
    
    constructSTUtil(parent,0, n-1, st, 0);
 
    return st;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,e,start,end,weight ;
		cin>>n;
		Graph g(n);
		int parent[n];
	
	
	for (int i = 0; i < n-1; ++i)
	{
		cin>>start>>end>>weight;
		g.addEdges(start-1,end-1,weight);
	}
	g.DFS(parent,0); 
	int *st=g.constructSeg(parent,n);
	int m;
	cin>>m;
	while(m--){
		int qs ;  
 	    int qe ; 
 		int w;
 		cin>>qs>>qe>>w;
 		if(qs>qe){
 			swap(qs,qe);
 		}
   		int lca=g.RMQ(st, n, qs-1, qe-1);
    	int ans=g.finalAns(qs-1,qe-1,lca,w,parent);	
		cout<<ans<<endl;
	}
	  
		//cout<<0<<endl;
	}
	
}