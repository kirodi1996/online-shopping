#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node * link;
};
node *start=NULL;
node * createNode(){
	node *n;
	n=new node();
	return (n);
}
void insertNode(){
	node *temp,*t;
	temp=createNode();
	cout<<"enter a no"<<endl;
	cin>>temp->data;
	temp->link=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		t=start;
		while(t->link!=NULL){
			t=t->link;
			
		}
		t->link=temp;
	}
}
t main(){
	int n;
	while(1){
	cout<<"1.for enter data\n2.Delete data \n3.View data\n4.reverseoflist\n5.palindrome\n";
	cin>>n;
	
		switch(n){
		case 1:
			insertNode();
			break;
		case 2:
			deleteStartNode();
			break;
		case 3:
			viewList();
			break;
		case 4:
			reverseoflist();
			break;
		case 5:
			cout<<checkpalindrome();
			
			break;
		case 6:
			removeDuplicate();
			break;
		case 7:
			swap();
			break;
		case 8:
			break;
		default :
		 cout<<"sorry invalid choice\n" ;	
		}

	}
	
}