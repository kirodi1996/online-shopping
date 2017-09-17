#include <bits/stdc++.h>       // std::vector
using namespace std;
int main () {   
    int t;
    cin>>t;
    while(t--){   
        int n,k;
        cin>>n>>k;
        int d1[n][k+1];
    for(int i=0;i<n;i++)
    {
        cin>>d1[i][0];
        for(int j=1;j<=d1[i][0];j++)
        cin>>d1[i][j];
    }
                     
  
  int count=0;
    for(int i=0;i<n-1;i++)
    {   vector<int> v(100000); 
        vector<int>::iterator it;
        for(int j=i+1;j<n;j++)
            {
                
                it=set_union (d1[i]+1,d1[i]+d1[i][0]+1,d1[j]+1,d1[j]+d1[j][0]+1, v.begin());
                v.resize(it-v.begin());
         //       cout<<v.size();
                if(v.size()==k)
                    count++;
             //    v.clear();    
            }
           /*for (int i = 0; i < v.size(); ++i)
            {
                   cout<<v[i]<<" ";
              }
            cout<<endl;*/
    }
        cout<<count<<endl;
       
    }
    
  return 0;
}