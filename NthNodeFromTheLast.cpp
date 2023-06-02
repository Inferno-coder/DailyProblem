//cpp
int getNthFromLast(Node *head, int n)
    {
          Node*temp= head;
          int c=0;
          while(temp!=0)
          {
              c++;
              temp=temp->next;
          }
          temp=head;
          if(n>c)
          return -1;
          for(int i=0;i<(c-n);i++)
          {
              temp=temp->next;
          }
          return temp->data;
    }
