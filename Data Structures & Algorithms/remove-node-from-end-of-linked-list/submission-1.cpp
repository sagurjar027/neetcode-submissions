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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int k = 0;
        while(temp != nullptr){
            temp = temp->next;
            k++;
        }
        
        k = (k-n);
        ListNode* dummy = new ListNode(0,head);
        temp = dummy;
        
        while(k>0){
            temp = temp->next;
            k--;
        }
        temp->next = temp->next->next;
        return dummy->next;
    }
};
