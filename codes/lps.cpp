#include <bits/stdc++.h>
using namespace std;

int solve(string A)
      { 
        string revStr = A; 
        reverse(revStr.begin(), revStr.end()); 
        string concat = A + "$" + revStr;
        /*vector<int> lps = computeLPSArray(concat);*/ 



         int M = concat.length();
         vector<int> lps(M);
         int len = 0; 
         lps[0] = 0; 
         int i = 1; 
         while (i < M)
        {
          if (concat[i] == concat[len])
        { 
            len++;
           lps[i] = len; 
           i++; 
        }
      else 
     { 
       if (len != 0) {
         len = lps[len-1];
       }
      else {
           lps[i] = 0; 
           i++; 
          } 
        }
    }   
        return (A.length() - lps.back());
      }
 int main(){
  string s;
  cin>>s;
  int n=solve(s);
  cout<<n;
 }      