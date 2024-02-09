/* You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.

Make a linked list from the array and return the head of the linked list. */

/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1;i<arr.size();i++){
        Node* curNode = new Node(arr[i]);
        temp->next=curNode;
        temp=temp->next;
    }
    return head;
}
/*
Node* head = new Node(arr[0]);
Node*temp = head;

*/