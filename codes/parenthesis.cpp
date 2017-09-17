#include <bits/stdc++.h>
using namespace std;
int main()
{
	string A;
	cin>>A;
	int n=A.length();
	int B[n];
	int top=-1;
	for (int i = 0; i < A.length(); ++i)
	{
		if(A[i]=='(' || A[i]=='[' || A[i]=='{')
		{
			top=top+1;
			B[top]=A[i];
		}
		else if(A[i]==')' && (B[top]=='['|| B[top]=='{'||top==-1)){
			return 0;
		}
		else if(A[i]==']' && (B[top]=='('|| B[top]=='{'||top==-1)){
			return 0;
		}
		else if(A[i]=='}' && (B[top]=='('|| B[top]=='['||top==-1)){
			return 0;
		}
		else{
			top=top-1;
		}
	}
	return 1;
}