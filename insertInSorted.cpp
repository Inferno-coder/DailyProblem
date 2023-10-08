class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* n=new Node(data);
        Node* pt=head;
        Node* prev=NULL;
        while(pt && pt->data<=data){
            prev=pt;
            pt=pt->next;
        }
        if(prev!=NULL){
            prev->next=n;
            n->next=pt;
        }
        else{
            n->next=head;
            head=n;
        }
        return head;
    }
};
