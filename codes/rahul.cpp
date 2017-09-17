#include <bits/stdc++.h>
using namespace std;
  vector<bool> visited(100000,false);
int grouping[100000];
int memo[1000][1000];
vector<int> str(1000);
class graph
{
	int v;
	list<int> *adj;
	public:
	graph(int num)
	{
		v=num;
		adj = new list<int>[num];
	}	
	void addedge(int a,int b)

	{
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int> BFS(int s)
	{
        vector<int> res;
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
 
 	//cout<<"\nbfs tracersal\n";
    while(!queue.empty())
    {
        s = queue.front();
        res.push_back(s);
        queue.pop_front();
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
        return res;
}
};
int longestpailndrom(int i,int j)
    {
    if(i>j)
        return 0;
    if(i==j)
        return 1;
    else if(memo[i][j]>0)
        return memo[i][j];
    else if(grouping[str[i]-1]==grouping[str[j]-1])
      return   memo[i][j]=2+longestpailndrom(i+1,j-1);
     else
           return memo[i][j]=max(longestpailndrom(i+1,j),longestpailndrom(i,j-1));                              
    
}
int main() {
    int n;
    int k;
    int m;
    cin >> n >> k >> m; 
    
    for(int i=0;i<n;i++)
        grouping[i]=0;
    graph g(n);
    for(int a0 = 0; a0 < k; a0++){
        int x;
        int y;
        cin >> x >> y;
        x--;
        y--;
        g.addedge(x,y);
    }
    int j=1;
  
    for(int i=0;i<n;i++)
    {
     if(!visited[i])
         {
        // cout<<"j is\t"<<j<<endl;
         vector<int> track = g.BFS(i);
         for(vector<int>::iterator it = track.begin();it!=track.end();it++)
             grouping[*it] = j;
         j++;
     }
    }
   /* for(int i=0;i<n;i++)
        cout<<grouping[i]<<" ";*/
    for(int i=0;i<m;i++)
        cin>>str[i];
    cout<<longestpailndrom(0,m-1);
    return 0;
}