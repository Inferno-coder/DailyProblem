#include<bits/stdc++.h>
using namespace std;

Node *flattenLinkedList(Node *head) {
  if (!head)
    return NULL;

  priority_queue<int, vector<int>, greater<int>> pq;
  Node *p = head;

  while (p) {
    pq.push(p->data);
    Node *flat = p->child;

    while (flat) {
      pq.push(flat->data);
      flat = flat->child;
    }

    p = p->next;
  }

  Node *dummy = new Node(0);
  Node *temp = dummy;

  while(!pq.empty()) {
    temp->child = new Node(pq.top());
    pq.pop();

    temp = temp->child;
  }

  return dummy->child;
}
