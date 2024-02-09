/* A doubly-linked list is a data structure that consists of sequentially linked nodes, and the nodes have reference to both the previous and the next nodes in the sequence of nodes.

Given a doubly-linked list and a value ‘k’, insert a node having value ‘k’ at the end of the doubly linked list. */

Node * insertAtTail(Node *head, int k) {
    Node *curNode = new Node(k);
    if(head==nullptr){
        return curNode;
    }
    Node *temp =head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    if (temp->next == nullptr) {
        temp->next = curNode;
        curNode->prev = temp;
        /* curNode->next = nullptr; */
    }
    return head;
}
