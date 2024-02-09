/* You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.

Your task is to make a doubly linked list from the array and return the head of the linked list. */

/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    int n = arr.size();
    Node*head = new Node(arr[0]);
    head->prev=nullptr;
    Node*temp=head;
    for(int i=1;i<n;i++){
        Node*curNode = new Node(arr[i]);
        temp->next=curNode;
        curNode->prev=temp;
        temp=temp->next;
    }
    return head;
}
