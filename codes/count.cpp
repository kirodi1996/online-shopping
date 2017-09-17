#include <bits/stdc++.h>
using namespace std;
int palind(string A){
	 int i = 0, j = (int)A.size() - 1;
    
    while(i < j)
        {
            while(i < j && !isalnum(A[i])) i++;
            while(i < j && !isalnum(A[j])) j--;
            if (toupper(A[i]) != toupper(A[j])) return false; 
                i++;
                j--;
        }
            return true
	

}
int main(){
	string A;
	cin>>A;
	
	int c=palind(A);
	cout<<c;

}
