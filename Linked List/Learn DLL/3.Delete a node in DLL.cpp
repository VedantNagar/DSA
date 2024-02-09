/* A doubly-linked list is a data structure that consists of sequentially linked nodes, and the nodes have reference to both the previous and the next nodes in the sequence of nodes.

Given a doubly-linked list, delete the node at the end of the doubly linked list. */

Node * deleteLastNode(Node *head) {
    if(head==nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node *temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
        temp->next = nullptr;
        delete temp->next;
    return head;
}
