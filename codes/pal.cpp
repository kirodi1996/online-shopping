#include <bits/stdc++.h>
using namespace std;
int palind(string A){
	int flag=0;
	for(int i=0,j=A.length()-1;i<A.length()/2;i++,j--){
		if(A[i]<27 && (A[i]>52 && A[i]<97) && (A[i]>122) ){
			i++;
		}
		if(A[j]<27 && (A[j]>52 && A[j]<97) && (A[j]>122)){
			j--;
		}
		if(A[i]!=A[j]){
			cout<<A[i]<<A[j];
			flag=1;
			break;
		}
	}
	if(flag){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	string A;
	cin>>A;
	
	int c=palind(A);
	cout<<c;

}