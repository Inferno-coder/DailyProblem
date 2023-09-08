
class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    int ind=0;
    void traverse(Node* root,vector<int>&arr){
        if(!root)return ;
        traverse(root->left,arr);
        arr.push_back(root->data);
        traverse(root->right,arr);
    }
    void convert(Node* root,vector<int>&arr){
        if(!root)return;
        convert(root->left,arr);
        root->data=arr[ind++];
        convert(root->right,arr);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>arr;
        traverse(root,arr);
        sort(arr.begin(),arr.end());
        convert(root,arr);
        return root;
    }
    
};
