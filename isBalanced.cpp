int height(Node* root){
        if(root==NULL){
            return 0;
        }
        
        int right=height(root->right);
        int left=height(root->left);
        
        return max(right,left)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL){
            return true;
        }
        
        int h1=height(root->right);
        int h2=height(root->left);
        
        if(abs(h1-h2)<=1 && isBalanced(root->right) && isBalanced(root->left)){
            return true;
        }
        
        return false;
