#include <bits/stdc++.h>
using namespace std;
struct node
{	
	int data;
	node * next,* prev;
};
node * start=NULL;
node *createNode(){
	node * temp;
	temp=new node();
	cin>>"Enter the data";
	cin>>temp->data;
	
	return (temp);
}
void insertNode(){
	node * temp,*curr,*prev2;
	temp=createNode();
	temp->next=NULL;
	temp->prev=NULL;
	if(start==NULL){
		start=temp;

	}
	else{
		curr=start;
		while(curr->next!=NULL){
			prev2=curr;
			curr=curr->next;
		}
		curr->next=temp;
		curr->prev2=prev;
	}

}
void deleteNode(){
	node * temp,*prev;
	temp=start;
	if(start==NULL){
		cout<<"list is empty";
	}
	else{
		start=start->next;
		start->prev2=NULL;
		free(temp);	
	}
}
void viewList(){
	node * temp;
	temp=start;

	while(temp->link!=NULL){
		cout<<temp->data<<" ";
		temp=temp->data;
	}
}
int main(){
	int n;
	while(1){
	cout<<"1.for enter data\n2.Delete data \n3.View data\n";
	cin>>n;
	
		switch(n){
		case 1:
			insertNode();
			break;
		case 2:
			deleteNode();
			break;
		case 3:
			viewList();
			break;
		case 4:
			break;
		default :
		 cout<<"sorry invalid choice\n" ;	
		}

	}
	
}