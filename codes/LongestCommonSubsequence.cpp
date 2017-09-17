#include <bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2){
	int len1=s1.length();
	int len2=s2.length();
	int lc[len1+1][len2+1];
	for (int i = 0; i <= len1; ++i)
	{
		for (int j = 0; j <= len2; ++j)
		{
			if(i==0 || j==0){
				lc[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1]){
				lc[i][j]=lc[i-1][j-1]+1;	
			}
			else{
				lc[i][j]=max(lc[i-1][j],lc[i][j-1]);
			}
		}
	}
	return lc[len1][len2];
}
int main(){
	 string s1,s2;
	 cin>>s1>>s2;
	 cout<<lcs(s1,s2)<<endl;
 }