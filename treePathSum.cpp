int solve(Node* root,int sum){
        if(!root)return 0;
        sum=(sum*10)+root->data;
        if(!root->left && !root->right)return sum;
        return solve(root->left,sum)+solve(root->right,sum);
    }
    int treePathsSum(Node *root) {
        // code here.
        return solve(root,0);
    }
