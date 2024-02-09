/* Given the head of a singly linked list, return true if it is a 
palindrome or false otherwise. */

class Solution {
public:

    ListNode* reverseList(ListNode* head){
        ListNode* temp= nullptr;
        while(head!=NULL){
            ListNode* next=head->next;
            head->next=temp;
            temp=head;
            head=next;
        }
        return temp;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==nullptr){
            return 1;
        }
        ListNode *slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next = reverseList(slow->next);
        slow=slow->next;

        while(slow!=nullptr){
            if(head->val!=slow->val){
                return 0;
            }
            else{
                head=head->next;
                slow=slow->next;
            }
        }
        return true;
    }
};