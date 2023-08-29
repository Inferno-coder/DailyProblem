Node *compute(Node *head)
    {
        // your code goes here
          if(head->next){
        compute(head->next);
        if(head->next->data>head->data){
            head->data = head->next->data;
            head->next = head->next->next;
        }
    }
