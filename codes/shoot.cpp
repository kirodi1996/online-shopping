#include <bits/sdtc++.h>
using namespace std;
isbalance (root){
	if(root==NULL){
		return 0;
	}
	int leftHeight=isbalance(root->left);
	if(leftHeight==-1){
		return -1;
	}
	int rightHeight isbalance(root->right);
	if(rightHeight==-1){
		return -1;
	}
	if(abs(leftHeight-rightHeight)>1){
		return -1;
	}
	return (1+max(leftHeight,rightHeight));
	
}