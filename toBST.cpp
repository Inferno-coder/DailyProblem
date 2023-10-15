
class Solution{
    
    public:
    void solve(vector<int>&arr,Node* root){
        if(!root)return;
        solve(arr,root->left);
        arr.push_back(root->data);
        solve(arr,root->right);
    }
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int>arr;
    	solve(arr,root);
    	queue<Node*>q;
    	Node* head=new Node(arr[0]);
    	int i=1;
    	Node* temp=head;
    	q.push(temp);
    	while(!q.empty()){
    	Node* t=q.front();
    	q.pop();
    	if(i<arr.size()){
    	    t->left=new Node(arr[i++]);
    	    q.push(t->left);
    	}
    	if(i<arr.size()){
    	    t->right=new Node(arr[i++]);
    	    q.push(t->right);
    	}
    	}
    	
    	return head;
    }
};
