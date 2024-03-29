Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head=prev;
    return head; 
}
class Solution {
public:
    void rearrange(Node *head) {
        Node *odd = head;
        Node *even = head->next;
        Node *evenstart = even; 
        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = reverse(evenstart);
    }
};
