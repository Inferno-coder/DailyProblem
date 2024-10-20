DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        priority_queue < int, vector<int>, greater<int> > minH;
        DLLNode* curr=head;
        DLLNode* prev=head;
        while(prev){
            if(minH.size()==k+1||curr==NULL){
                prev->data=minH.top();
                prev=prev->next;
                minH.pop();
            }
            else{
                minH.push(curr->data);
                curr=curr->next;
                
            }
        }
        return head;
    }
