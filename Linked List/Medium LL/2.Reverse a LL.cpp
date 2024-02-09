/* Given the head of a singly linked list, reverse the list, and return the reversed list. */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    //make a new node, point it at null
    //next node se point to after head node
    //connect head to new node
    //new node++
    //head++

    ListNode* reverseList(ListNode* head) {
        ListNode* temp = nullptr;
        while(head!=nullptr){
            ListNode*next = head->next;
            head->next=temp;
            temp = head;
            head = next;
        }
        return temp;
    }
};