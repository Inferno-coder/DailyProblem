void find(Node *root, int k, int node,int &ans,vector<int>&temp)
{
    if(!root)
    return;
    if(root->data==node&&temp.size()>=k)
    {
        ans= temp[temp.size()-k]; return;
    }
    temp.push_back(root->data);
    find(root->left,k,node,ans,temp);
    find(root->right,k,node,ans,temp);
    temp.pop_back();
    
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    vector<int>temp;
    int ans=-1;
    find(root,k,node,ans,temp);
    return ans;
    
}
