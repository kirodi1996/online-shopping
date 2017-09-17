	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			 long long int A,B,N,M,C,D,countA=0,countB=0;
			cin>>A>>B>>N;
			while(A%2!=1){
				countA++;
				A/=2;
			}
			while(B%2!=1){
				countB++;
				B/=2;
			}		
			D=N/2;
			C=N-D;
			int F=C+countA-countB-D;
			int G=D+countB-C-countA;
			//cout<<F<<" "<<G<<" "<<endl;
			if(((A*pow(2,F))/B)>1){
				printf("%d\n",(int)(A*pow(2,F)/B));
			}
			else{
				printf("%d\n",(int)(B*pow(2,G)/A));
			}
		}
	}	