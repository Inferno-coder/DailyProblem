class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        if(x<=head->data){
            Node* n=new Node();
            n->data=x;
            n->next=head;
            head->prev=n;
            head=n;
            return n;
        }
        Node* prv=head;
        Node* nxt=head->next;
        while(nxt){
            if(x>=prv->data && x<=nxt->data){
                Node* n=new Node();
                n->data=x;
                prv->next=n;
                n->prev=n;
                n->next=nxt;
                nxt->prev=n;
                return head;
            }
            nxt=nxt->next;
            prv=prv->next;
        }
        if(prv->data<x){
            Node* n=new Node();
            n->data=x;
            prv->next=n;
            n->prev=prv;
            return head;
        }
    }
};
