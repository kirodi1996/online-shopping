#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i=0,I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
	cin>>t;
	char s[10];
	while(t>0){
		if(t>0 && t<(V-1)){
			s[i]='I';
			t=t-I;
			i++;
		}
		else if(t==(V-1)){
			s[i]='I';
			s[i+1]='V';
			i=i+2;
			t=t-V;
		}
		else if(t>(V-1) && t<(X-1)){
			s[i]='V';
			t=t-5;
			i++;
			t=t-V;
		}
		else if(t==(X-1)){
			s[i]='I';
			s[i+1]='X';
			i=i+2;
			t=t-X;
		}
		else if(t>(X-1) && t<(L-1)){
			cout<<">>>>>>>";
			s[i]='X';
			t=t-10;
			i++;
		}
		else if(t>=(L-10) && (t<L)){
			cout<<"--------";
			s[i]='X';
			s[i+1]='L';
			i=i+2;
			t=t-40;
		}
		else if(t>(L-1) && t<(C-1)){
			s[i]='L';
			t=t-50;
			i++;
		}

		else if(t>=(L-10)){
			s[i]='X';
			s[i+1]='L';
			i=i+2;
		}
		else if(t>(C-1) && t<(D-1)){
			s[i]='C';
			t=t-100;
			i++;
		}

		else if(t>(D-1) && t<(M-1)){
			s[i]='D';
			t=t-500;
			i++;
		}
		else if(t>(M-1) ){
			s[i]='M';
			t=t-1000;
			i++;
		}
		//cout<<"1";
	}
	s[i]='\0';
	for (int i = 0;  s[i]!='\0'; ++i)
	{
		cout<<s[i];
	}
}