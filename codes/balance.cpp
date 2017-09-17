 vector<int> vector;
        if(!root)
        return vector;
        stack<TreeNode *> stack;
        stack.push(root);
        int tl,tr;
        while(!stack.empty())
        {
        	tl=0,tr=0;

            TreeNode *pNode = stack.top();
           // cout<<"pnode="<<pNode->val;
            if(pNode->left->left!=NULL){
            	tl=2;
            }
            else if(pNode->left!=NULL){
            	tl=1;
            }
            else if(pNode->left==NULL){
            	tl=0;
            }
            if(pNode->right->right!=NULL){
            	tr=2;
            }
            else if(pNode->right!=NULL){
            	tr=1;
            }
            else if(pNode->right==NULL){
            	tr=0;
            }
            if(abs(tr-tl)>1){
             return 0;
            }
            stack.pop();
            if(pNode->right)
            {
                stack.push(pNode->right);
                pNode->right = NULL;
            }
            
              
             if(pNode->left){

                    stack.push(pNode->left);
                     pNode->left = NULL;
                }
                
            
        }
        return 1;
   