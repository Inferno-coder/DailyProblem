class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* n=new Node(0);
        Node* dup_head=n;
        Node* temp=dup_head;
        Node* t=head;
        while(t){
        temp->next=new Node(t->val);
        temp=temp->next;
        t=t->next;
        }
        dup_head=dup_head->next;
        t=head;
        Node* dt=dup_head;
        map<Node*,Node*>mp;
        while(t){
        mp[t]=dt;
        t=t->next;
        dt=dt->next;
        }
        t=head;
        while(t){
           mp[t]->random=mp[t->random];
           t=t->next;
        }
        return dup_head;
    }
};
