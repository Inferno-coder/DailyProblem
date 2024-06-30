class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node *temp = head;
        if(x == 1) return head->next;
        while(x > 1){
            temp = temp->next;
            x--;
        }
        if(temp->next){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            return head;
        }
        else{
            temp->prev->next = NULL;
            return head;
        }
        return head;
    }
};
