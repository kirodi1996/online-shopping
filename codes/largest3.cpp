#include <bits/stdc++.h>
using namespace std;
int main(){

    int N,s;
    cin>>N;
    vector<int> sequence;
    for (int i = 0; i < N; ++i)
    {
        cin>>s;
        sequence.push_back(s);
    }
        
        vector<int> sum;
        //if(N == 0)
                // empty vector

        sum.push_back(sequence[0]);

        for(int i = 1; i < N; ++i) {
            sum.push_back(sequence[i] + sum[i - 1]);
        }
        
        int start = 0;
        int end = 0;
        map<int, int> hash;
        for(int i = 0; i < N; ++i) {
            if(sum[i] == 0) {
                int temp_start = 0;
                int temp_end = i + 1;
                if(temp_end - temp_start >= end - start) {
                    start = temp_start;
                    end = temp_end;
                } 
            } else {
                if(hash.find(sum[i]) != hash.end()) {
                    cout<<"1-->";
                    int temp_start = hash[sum[i]] + 1;
                    int temp_end = i + 1;
                    if(temp_end - temp_start > end - start) {
                        start = temp_start;
                        end = temp_end;                  
                    } else if(temp_end - temp_start == end - start && temp_start < start) {
                        start = temp_start;
                        end = temp_end;
                    }
                } else {
                    hash[sum[i]] = i;
                }
            }
        }

        vector<int> ans;

        for(int i = start; i < end; ++i) {
            ans.push_back(sequence[i]);
            cout<<sequence[i]<<" ";
        }

       
}