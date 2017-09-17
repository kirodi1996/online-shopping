#include <bits/stdc++.h>
using namespace std;
struct bstNode
{
	int data;
	bstNode *left;
	bstNode *right;
};

bstNode *createNode(int data){
	bstNode *temp=new bstNode();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;
}
bstNode *Insert(bstNode* root,int data){
	if(root==NULL){
		//cout<<"1-->";
		root=createNode(data);
		return root;
	}
	else if(root->data>=data){
		//cout<<"2--->";
		root->left=Insert(root->left,data);
	}
	else{
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
void levelTraverse(bstNode* root){
	if(root==NULL){
		cout<<"Empty::\n";
		return ;
	}
	else{
		cout<<"Level Order Traverse::";
		queue<bstNode*> Q;
		Q.push(root);
		while(!Q.empty()){
			bstNode *current=Q.front();
			cout<<current->data<<" ";
			if(current->left!=NULL){
				Q.push(current->left);
			}
			if(current->right!=NULL){
				Q.push(current->right);
			}
			Q.pop();
		}
	}
}
bstNode * findmin(bstNode *root){
	if(root==NULL){
		return root;
	}
	bstNode *current=root;

	while(current->left!=NULL){
		current=current->left;
	}
	return current;

}
void findmax(bstNode *root){
	if(root==NULL){
		return ;
	}
	bstNode *current=root;

	while(current->right!=NULL){
		current=current->right;
	}
	cout<<current->data;

}
void preTraverse(bstNode *root){
	if(root==NULL){
		//cout<<"Pre order Traverse::";
		return ;
	}
	cout<<root->data<<" ";
	preTraverse(root->left);
	preTraverse(root->right);
}
void inTraverse(bstNode* root){
	if(root==NULL){
		//cout<<"Inorder traverser::";
		return ;
	}
	inTraverse(root->left);
	cout<<root->data<<" ";
	
	inTraverse(root->right);

}
void postTraverse(bstNode* root){

	if(root==NULL){
	//	cout<<"post order traverse::";
		return ;
	}
	postTraverse(root->left);
	postTraverse(root->right);
	cout<<root->data<<" ";
}
bstNode * Delete(bstNode * root,int data){
	if(root==NULL){
		return root ;

	}
	if(root->data>data){
		root->left=Delete(root->left,data);
	}
	else if(root->data<data){
		root->right=Delete(root->right,data);
	}
	else {
		// if no child
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
		}
		//if one child
		else if(root->left==NULL){
			bstNode *temp=root;
			root=root->right;
			delete temp; 
		}
		else if(root->right==NULL){
			bstNode *temp=root;
			root=root->left;
			delete temp; 
		}
		else{
			bstNode * temp=findmin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;
}
/*void verticalTravese(bstNode* root,int j){
	if(root==NULL){
		return ;
	}
	map<int,int> hash;
	hash[j]=root->data;
	//int temp=j;

	verticalTravese(root->left,j-1);
	

	verticalTravese(root->right,j+1);
	
	//cout<<"temp2"<<temp2<<endl;
	map<int,int>::iterator it;
	for ( it = hash.begin(); it!=hash.end(); ++it)
	{
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
}*/
/*void verticalTravese(bstNode* A) {
    vector<vector<int> > result;
    // Base case
    if (!A) return result;
 
    map <int,vector<int> > m;
    queue<pair<TreeNode*, int> > q;
    q.push(make_pair(A, 0)); // root's horizontalDistance is zero

    while(!q.empty()) {
        // get the queue front
        pair<TreeNode*,int> front = q.front();
        q.pop();
        int currentHorizontalDistance = front.second;
        TreeNode* currentTreeNode = front.first;

        // insert current node to hash map
        m[currentHorizontalDistance].push_back(currentTreeNode -> val);

        if (currentTreeNode -> left != NULL) {
             q.push(make_pair(currentTreeNode -> left, currentHorizontalDistance - 1));
        }
        if (currentTreeNode -> right != NULL) {
            q.push(make_pair(currentTreeNode -> right, currentHorizontalDistance + 1));
        }
    }
     // Traverse the map and print nodes at every horigontal distance
    for (map<int,vector<int> > :: iterator it = m.begin(); it != m.end(); it++) {
        result.push_back(it -> second);
        
    }
    
}*/
bstNode* longestCommmonAncestor(bstNode *root,int m,int n){
	if(root==NULL){
		return NULL;	
	}
	if(root->data==m || root->data==n){
		return root;
	}
	bstNode *left_lca=longestCommmonAncestor(root->left,m,n);
	bstNode *right_lca=longestCommmonAncestor(root->right,m,n);
	if(left_lca && right_lca){
		return root;
	}
	return (left_lca!=NULL)? left_lca:right_lca;
}
int main(){
	bstNode *root=NULL;
	int n;
	while(1){
	cout<<"\n1.for enter data::\n2.for search data::\n3.level order traversal::\n4.pre order traverse::\n5.inorder traverse::\n6.post Order traverse::\n7.find min\n8.find max\n9.delete node \n11.find longest Common ansector";
	cin>>n;
	
		switch(n){
		case 1:
			int data;
			cout<<"Enter data\n";
			cin>>data;
			root=Insert(root,data);
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
		case 3:	
			levelTraverse(root);
			break;
		case 4:	
			preTraverse(root);
		break;
		case 5:	
			inTraverse(root);
		break;
		case 6:	
			postTraverse(root);
		break;
		case 7:
			findmin(root);
		break;
		case 8:
			findmax(root);
			break;
		case 9:
			int val;
			cout<<"Enter the value to delete\n";
			cin>>val;
			Delete(root,val);	
			break;	
		case 10:
			//verticalTravese(root);
			break;
		case 11:
			cout<<"Longest Common Ancestor\n";
			int m,n;
			cin>>m>>n;
			cout<<longestCommmonAncestor(root,m,n)->data;
			break;		
		default :
		 cout<<"sorry invalid choice\n" ;	
		}

	}
	
}