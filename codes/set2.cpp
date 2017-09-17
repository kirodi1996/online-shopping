#include <bits/stdc++.h>       // std::vector
using namespace std;
int main () {  
    int t;
    cin>>t;
   // int res[t];
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
    vector<int> v(1000000);                   
    vector<int>::iterator it;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                v.clear();
                for(int z=1;z<=d1[i][0];z++)
                    v.push_back(d1[i][z]);
                for(int z=1;z<=d1[j][0];z++)
                    v.push_back(d1[j][z]);
                sort( v.begin(), v.end() );
                v.erase( unique( v.begin(), v.end() ), v.end() );
                if(v.size()==k)
                    count++;
            }
    }
        cout<<count<<endl;
 
  }  
    
  return 0;
}