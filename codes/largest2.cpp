#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	vector<int> v,sum;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		v.push_back(s);
	}
	if(n==0){
		return 0;
	}
	sum.push_back(v[0]);
	for (int i = 1; i < n; ++i)
	{
		sum.push_back(v[i]+sum[i-1]);
	}
	int start=0,end=0;
	map<int, int> hash;
	for(int i = 0; i < n; ++i) {
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
	vector<int>ans;
	for (int i = start; i < end; ++i)
	{
		ans.push_back(v[i]);
		cout<<v[i]<<" ";
	}
}
