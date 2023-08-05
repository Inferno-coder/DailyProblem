Node* LCA(Node *root, int p, int q)
        {
            // code here
            if (root == NULL || root->data == p || root->data == q) {
            return root;
        }
        Node* left = LCA(root->left, p, q);
        Node* right = LCA(root->right, p, q);

        //result
        if(left == NULL) {
                
            return right;
        }
        else if(right == NULL) {
            return left;
        }
        else { //both left and right are not null, we found our result
            return root;
        }
        }
