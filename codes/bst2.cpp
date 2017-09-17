#include <bits/stdc++.h>
using namespace std;
struct bstNode
{
	int data;
	 bstNode *left;
	bstNode *right;
};
bstNode *root=NULL;
bstNode *createNode(int data){
	bstNode *temp=new bstNode();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;
}
bstNode *Insert(bstNode* root,int data){
	bstNode* temp;
	temp=createNode(data);
	if(root==NULL){
		cout<<"1-->";
		root=temp;
		return root;
	}
	else if(root->data>=data){ 
		cout<<"2--->";
		root->left=temp;
		root->left=Insert(root->left,data);
	}
	else{
		cout<<"3---->";
		root->right=temp;
		root->right=Insert(root->right,data);
	}
	return root;
}
bool Search(bstNode* root,int data){
	if(root==NULL){
		//cout<<" 11";
		return false;
	}
	else if(root->data==data){
		//cout<<" 12";
		return true;
	}
	else if(root->data>=data){
		//cout<<" 13";
		return Search(root->left,data);
	}
	else{
		//cout<<" 14";
		return Search(root->right,data);
	}

}

int main(){
	
		int n;
	while(1){
	cout<<"1.for enter data::\n2.for search data::\n";
	cin>>n;
	
		switch(n){
		case 1:
			int data;
			cout<<"Enter data\n";
			cin>>data;
			root=Insert(data);
			break;
		case 2:
			int find;
			cout<<"Enter data to find::";
			cin>>find;
			if(Search(root,find)){
				cout<<"data found::\n";
			}
			else if(!Search(root,find)){
				cout<<"sorry data is not available::\n";
			}
			break;	
		default :
		 cout<<"sorry invalid choice\n" ;	
		}

	}
	
}