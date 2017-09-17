#include <bits/stdc++.h>
using namespace std;
int lcs(int n,int m,string A,string B){
	if(m==0 || n==0){
		return 0;
	}
	if(A[n-1]==B[m-1]){
	return	1+lcs(n-1,m-1,A,B);	
	}
	else{
	return	max(lcs(n-1,m,A,B),lcs(n,m-1,A,B));
	}
	

}
int main(){
	string  A,B:
	int n=A.length();
	int m=B.length();
	lcs(n,m,A,B)
}