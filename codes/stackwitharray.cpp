#include <bits/stdc++.h>
int top = -1;
int a[101];
using namespace std;

int push(int n){
	top=top+1;
	a[top]=n;
}
void pop(){
	if(top<0){
		cout<<"underflow";
		
	}
	else{
		top=top-1;	
	}
	
}
void viewstack(){
	for(int i=0;i<=top;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	while(1){
	cout<<"1.for enter data\n2.Delete data \n3.View data\n";
	cin>>n;
	
		switch(n){
		case 1:
			int k;
			cin>>k;
			push(k);
			break;
		case 2:
			pop();
			break;
		case 3:
			viewstack();
			break;
		case 4:
			break;
		default :
		 cout<<"sorry invalid choice\n" ;	
		}

	}
	
}