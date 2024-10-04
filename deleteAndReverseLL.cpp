Node* reverse(Node* head) {
        // code here
        if (head == NULL || head->next == head) {
        return head;  // Empty list or single node, no need to reverse
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    // First, store the original head
    Node* originalHead = head;

    while (curr->next != originalHead) {  // Traverse until we are about to loop back
        next = curr->next;  // Store the next node
        curr->next = prev;  // Reverse the pointer
        prev = curr;        // Move prev forward
        curr = next;        // Move curr forward
    }

    // Handle the final node (when curr == originalHead)
    next = curr->next;
    curr->next = prev;
    head->next = curr;  // Make the last node point to the new head
    head = curr;

    return head;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        if (head == NULL) {
        return NULL;  // Empty list, nothing to delete
    }

    Node* curr = head;
    Node* prev = NULL;

    // Special case: If head node is to be deleted
    if (head->data == key) {
        // If there's only one node in the list
        if (head->next == head) {
            delete head;
            return NULL;
        }

        // Find the last node in the list to update its next pointer
        Node* last = head;
        while (last->next != head) {
            last = last->next;
        }

        // Update the last node's next pointer and delete the head
        last->next = head->next;
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse the list to find the node with the given key
    while (curr->next != head) {  // Stop if we return to the head
        if (curr->next->data == key) {
            Node* temp = curr->next;
            curr->next = curr->next->next;  // Unlink the node
            delete temp;
            return head;
        }
        curr = curr->next;
    }

    // If key wasn't found
    return head;
    }
