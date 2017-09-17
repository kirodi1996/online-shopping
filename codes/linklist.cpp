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
void deleteStartNode(){
	node *t;
	t=start;
	if(start==NULL){
		cout<<"list is empty";
	}
	else{
		t=start;
		start=start->link;
		free(t);
	}
}
void viewList(){
	node *t;
	t=start;

	if(start==NULL){
		cout<<"list is empty";
	}
	else{
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->link;
		}
		cout<<endl;
	}	
}
void reverseoflist(){
	node *t,*prev,*cur,*next;
	cur=start;
	prev=NULL;	
	while(cur!=NULL){
		next=cur->link;
		cur->link=prev;
		prev=cur;
		cur=next;
	}
	start=prev;
	t=start;
	if(start==NULL){
		cout<<"list is empty";
	}
	else{
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->link;
		}
		cout<<endl;
	}	
}
int  checkpalindrome(){
	if(start==NULL){
		return 1;
	}
	node *t,*p,*prev,*cur,*next,*start2;
	//cout<<"hello--";
	int m=0;
	cur=start;
	t=start;
	prev=NULL;
	int n=0;
	while(t!=NULL){
		t=t->link;
		n++;
	}
	//cout<<"hello--";
	//cout<<"n="<<n<<" ";
	//p=start;
	for(int i=0;i<(n/2-1);i++){
		next=cur->link;
		cur->link=prev;
		prev=cur;
		cur=next;
		//p=p->link;
	}
	start=cur;
	if(n%2==1){
		cur=cur->link;
		start2=cur->link;
		//cout<<"start2="<<start2->data;
		//cout<<"start1="<<start->data;
	}
	else{
		start2=cur;	
	}
	
	cout<<"start2="<<start2->data<<" ";
	cout<<"start1="<<start->data<<" ";
	while(start && start2){
		if(start->data==start2->data){
			m++;
		}
		else{
			return 0;		
		}	
		start=start->link;
		start2=start2->link;
	}
	return 1;
	
	//cout<<"data="<<p->data<<" "<<endl;
}
void removeDuplicate(){
	node *t,*prev,*r;
	prev=NULL;
	t=start;
	while(t->link!=NULL){
	
		prev=t;
		t=t->link;
		r=t;
	//	cout<<"t="<<t->data<<"prev="<<prev->data;
		if(t->data==prev->data){
	//		cout<<"hello";
			prev->link=t->link;
			t=prev;
			delete (r);
		}

	}

}
void swap(){
	node *t1,*t2,*t3,*t4;
	
	
	
	t4=start;
	start=t2;
	while(t4->link!=NULL){
		t1=t4;
		t2=t1->link;
		t3=t2->link;
		t2->link=t1;
		t1->link=t3;
		t4=t4->link;
		t4=t4->link;
			
	}
	
	t3=t2->link;
		t2->link=t1;
		t1->link=t3;
	//cout<<"1---->;";
	/*t3=t2->link;
	t2->link=t1;
	t1->link=t3;*/
}
int main(){
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