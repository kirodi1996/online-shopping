#include <bits/stdc++.h>
using namespace std;
vector<bool> vis(1000000,false);
int grp[100000];
int memory[1000][1000];
vector<int> str(1000);
class graph1
{
	int v;
	list<int> *adjacency;
	public:
	graph1(int num)
	{
		v=num;
		adjacency = new list<int>[num];
	}	
	void addedge(int a,int b)

	{
		adjacency[a].push_back(b);
		adjacency[b].push_back(a);
	}
	vector<int> bfs(int s)
	{
        vector<int> res;
    list<int> queue;
    vis[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
 
 	//cout<<"\nbfs tracersal\n";
    while(!queue.empty())
    {
        s = queue.front();
        res.push_back(s);
        queue.pop_front();
        for(i = adjacency[s].begin(); i != adjacency[s].end(); ++i)
        {
            if(!vis[*i])
            {
                vis[*i] = true;
                queue.push_back(*i);
            }
        }
    }
        return res;
}
};
int pailndrom(int i,int j)
    {
    if(i>j)
        return 0;
    if(i==j)
        return 1;
    else if(memory[i][j]>0)
        return memory[i][j];
    else if(grp[str[i]-1]==grp[str[j]-1])
      return   memory[i][j]=2+pailndrom(i+1,j-1);
     else
           return memory[i][j]=max(pailndrom(i+1,j),pailndrom(i,j-1));                              
    
}
int main() {
    int n;
    int k;
    int m;
    cin >> n >> k >> m; 
    
    for(int i=0;i<n;i++)
        grp[i]=0;
    graph1 g(n);
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
     if(!vis[i])
         {
        // cout<<"j is\t"<<j<<endl;
         vector<int> tr = g.bfs(i);
         for(vector<int>::iterator it = tr.begin();it!=tr.end();it++)
             grp[*it] = j;
         j++;
     }
    }
   /* for(int i=0;i<n;i++)
        cout<<grouping[i]<<" ";*/
    for(int i=0;i<m;i++)
        cin>>str[i];
    cout<<pailndrom(0,m-1);
    return 0;
}