#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
int main(){
	int s,l,r;
	cin>>s;
	struct node *root=newnode(s);
	cin>>l;
	cin>>r;
	root->left=newnode(l);
	root->right=newnode(r);
}