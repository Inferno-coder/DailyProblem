class Solution {
public:
    void getLevelSum(TreeNode* root, vector<long long>& levelSums) {
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int sz = q.size();
            long long sum = 0;  
            
            for (int i = 0; i < sz; i++) {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;  
                
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            
            levelSums.push_back(sum);
        }
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1; 
        
        vector<long long> levelSums;
        getLevelSum(root, levelSums);
        
        if (k > levelSums.size()) return -1;
        
        sort(levelSums.rbegin(), levelSums.rend());
        return levelSums[k-1];
    }
};
