#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
const int inf = 2e9;
 
int dp[MAX][MAX];
 
void initialize()
{
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            dp[i][j] = -1;
}
 
int solve(int arr[], int i, int k)
{
   if (dp[i][k] != -1)
        cout<< dp[i][k];
 
   if (i < 0)
        return inf;
    if (k == 1) {
        int ans = inf;
        for (int j = 0; j <= i; j++)
            ans = min(ans, arr[j]);
        return ans;
    }
 
   int ans = inf;
   cout<<"i="<<i<<endl;
    for (int j = 0; j < i; j++)
        if (arr[i] >= arr[j]){
        	cout<<"j="<<j<<"i="<<i<<"arr="<<arr[i]<<" "<<endl;
            solve(arr, j, k);
                      
        }
 
    //dp[i][k] = ans;
    cout<<"dp=" <<dp[i][k]<<endl;
}
 
int main()
{
    initialize();
    int a[] = { 58, 12, 11, 12, 82, 30,
                20, 77, 16, 86 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;
    cout << solve(a, n - 1, k) << endl;
    return 0;
}