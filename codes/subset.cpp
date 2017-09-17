#include <bits/stdc++.h>
using namespace std;
void generateSubsets(vector<int> &S, int index, vector<int> &current, vector<vector<int> > &result) {
            if (index >= S.size()) {
                cout<<"hello1-->"<<"index-->"<<index<<endl;
                for(int i=0;i<current.size();i++){
                    cout<<current[i]<<"index="<<index<<"-----> "<<endl;
                }
                result.push_back(current);
            
                return;
            }
            // Ignore the current index.
           // cout<<"hello3"<<endl;
            generateSubsets(S, index + 1, current, result);
           // cout<<"hello2-->"<<endl;
           // cout<<"index="<<index<<" "<<S[index]<<" "<<endl;
            // Include the current index. 
            
            current.push_back(S[index]);
            generateSubsets(S, index + 1, current, result);
            //cout<<"hello4"<<endl;
            current.pop_back();
            //cout<<"hello5"<<endl;
        }

class solution{
public:
    vector<vector <int>> subset(vector<int> &A) {
    vector<vector<int> > result; 
            vector<int> current;
            sort(A.begin(), A.end());
            generateSubsets(A, 0, current, result);
            sort(result.begin(), result.end());
            return result;
        

        
}

};
int main()
{
    int n,m;
    cin>>n;
    vector<int> A;
    std::vector<std::vector<int> > B;
    for (int i = 0; i < n; ++i)
    {
        cin>>m;
        A.push_back(m);
    }
    
   solution s;
   B=s.subset(A);
   int k=B.size();
   int l=B[0].size();
   for (int i = 0; i < k; ++i)
   {
       for (int j = 0; j < B[i].size(); ++j)
       {
           cout<<B[i][j];
       }
       cout<<endl;
   }
    
}
