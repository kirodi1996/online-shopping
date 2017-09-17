#include <iostream>
using namespace std;
 
int main()
{
    int t,a,b,c,d,i;
    cin>>t;
    while(t--){
        int count=0,count1;
        for (int i = 0; i < 3; ++i)
        {
            cin>>count1;
            
            count=count+count1;    
            
            
            cout<<count<<" ";
        }
        cout<<endl;
        cout<<count<<endl;
    }
    
 } 