#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *binarytolinklist(node *root){
	if(root==NULL){
		return root;
	}
	if(root->left !=NULL){
		node *left=	binarytolinklist(root->left);

	}
}
int main(){

}