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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;
        stack<ListNode*> s;
        ListNode* temp = head;

        while (temp != nullptr) {
            s.push(temp);
            temp = temp->next;
        }
        temp = head;
        int n = s.size();

        for(int i=0;i<n/2;i++){
            ListNode* last = s.top();
            s.pop();
            ListNode* next = temp->next;
            temp->next = last;
            last->next = next;

            temp = next;
        }
        temp->next = nullptr;
    }
};
