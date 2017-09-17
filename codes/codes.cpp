#include <bits/stdc++.h>
using namespace std;
/*int digits(string A,int n){
	int count[n+1];
	count[0]=1;
	count[1]=1;
	for (int i = 2; i <= n; ++i)
	{
		count[i]=0;
		if(A[i-1]>'0'){
			count[i]=count[i-1];
		}
		if(A[i-1]<'2' || (A[i-2]=='2'&& A[i-1]<'7')){
			count[i]+=count[i-2];
		}
	}
	return count[n];
}*/
int digits(string A, int n)
{
    int count[n+1]; // A table to store results of subproblems
    count[0] = 1;
    count[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
 
        // If the last digit is not 0, then last digit must add to
        // the number of words
        if (A[i-1] > '0')
            count[i] = count[i-1];
 
        // If second last digit is smaller than 2 and last digit is
        // smaller than 7, then last two digits form a valid character
        if (A[i-2] < '2' || (A[i-2] == '2' && A[i-1] < '7') )
            count[i] += count[i-2];
    }
    return count[n];
}
int main(){

	string A;
	
	cin>>A;
	int n=A.length();
	int f=digits(A,n);
	cout<<f;
}