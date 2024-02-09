/* You are given the head of a linked list ‘list’ of size ‘N’ and an integer ‘newValue’.

Your task is to insert a node with the value ‘newValue’ at the beginning of the ‘list’ and return the new head of the linked list.

You must write an algorithm whose time complexity is O(1) and whose space complexity is O(1). */

Node* insertAtFirst(Node* list, int newValue) {
    Node*temp = new Node(newValue);
    temp->next=list;
    list=temp;
    return list;
}