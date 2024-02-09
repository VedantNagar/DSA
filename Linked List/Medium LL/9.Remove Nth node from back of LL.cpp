/* Given the head of a linked list, remove the nth node from the end of the list and return its head. */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr && n==1){
            return nullptr;
        }
        ListNode*start=new ListNode();
        start->next=head;
        ListNode*fast=start;
        ListNode*slow=start;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow->next!=nullptr){
        slow->next=slow->next->next;
        }
        return start->next;
    }
};