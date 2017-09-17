vector<int> vector;
        if(!root)
        return vector;
        stack<TreeNode *> stack;
        stack.push(root);
        while(!stack.empty())
        {
            TreeNode *pNode = stack.top();
            vector.push_back(pNode->val);
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
        return vector;
