#include<bits/stdc++.h>
using namespace std;
std::vector<int> ans;
// Prints all stepping numbers reachable from num
// and in range [n, m]
vector<int>  bfs(int n, int m, int num)
{
    
    queue<int> q;
 
    q.push(num);
 
    while (!q.empty())
    {
       int stepNum = q.front();
        q.pop();
 
       if (stepNum <= m && stepNum >= n)
            ans.push_back(stepNum);
       if (num == 0 || stepNum > m)
            continue;
 
       int lastDigit = stepNum % 10;
 
       int stepNumA = stepNum * 10 + (lastDigit- 1);
        int stepNumB = stepNum * 10 + (lastDigit + 1);
 
       if (lastDigit == 0)
            q.push(stepNumB);
 
       else if (lastDigit == 9)
            q.push(stepNumA);
 
        else
        {
            q.push(stepNumA);
            q.push(stepNumB);
        }
    }
    return ans;
}
 
int main()
{
    //std::vector<std::vector<int>  > v;
    vector<int> temp;
    int n , m ;
    cin>>n>>m;
   
    for (int i = 0 ; i <= 9 ; i++){
       temp=bfs(n, m, i);
        //v[i].push_back(temp);
    }
        
    /*for (int i = 0; i < ans.size(); ++i)
    {
        cout<<temp[i]<<" ";
    }*/
}