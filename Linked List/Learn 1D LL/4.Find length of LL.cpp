/* Given the head of a singly linked list of integers, find and return its length. */

int length(Node *head)
{
	Node*temp = head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    count++;
    return count;
}