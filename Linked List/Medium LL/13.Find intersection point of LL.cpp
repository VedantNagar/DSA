/* Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null. */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1=headA;
        ListNode *p2 = headB;
        if(p1==nullptr||p2==nullptr){
            return NULL;
        }
        while( p1!=nullptr && p2!=nullptr && p1!=p2){
            p1=p1->next;
            p2=p2->next;
         if(p1==p2){
            return p1;
        } 
        if(p1==nullptr){
            p1=headB;
        }
        if(p2==nullptr){
            p2=headA;
        }
        }
        return p1;
    }
};