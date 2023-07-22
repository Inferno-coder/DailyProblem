Node * removeDuplicates( Node *head) 
    {
     // your code goes here
    if (!head)
        return NULL;

    set<int> seen;
    Node* current = head;
    seen.insert(current->data);

    while (current->next) {
        if (seen.find(current->next->data)!= seen.end()) {
            //Node* dup= current->next;
            current->next = current->next->next;
          //  delete dup;
        } else {
            seen.insert(current->next->data);
            current = current->next;
        }
    }
    return head;
    }
