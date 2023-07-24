vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       queue<Node*> level;
       level.push(root);
       while(!level.empty()){
           int size=level.size();
           for(int i=0;i<size;i++){
               if(i == size-1){
                   ans.push_back(level.front()->data);
               }
               if(level.front()->left) level.push(level.front()->left);
               if(level.front()->right) level.push(level.front()->right);
               level.pop();
           }
       }
       return ans;
    }
