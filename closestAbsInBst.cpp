int mini=INT_MAX;
    
    void solve(Node *root,int k){
        if(root==NULL)return ;
         solve(root->left,k);
         mini=min(mini,abs(k-(root->data)));
         solve(root->right,k);
    }
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        //Your code here
        solve(root,K);
        return mini;
    }
