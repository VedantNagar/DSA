/* You are given a Singly Linked List of integers with a head pointer. Every node of the Linked List has a value written on it. */

int searchInLinkedList(Node<int> *head, int k) {
   Node<int>*temp = head;
   int count=0;
   while(temp!=NULL){
       if(temp->data==k){
           return 1;
       }
       count++;
       temp=temp->next;
   }
   return 0;
}