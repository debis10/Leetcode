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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before_head = new ListNode(0);
    ListNode* after_head = new ListNode(0);
    
    ListNode* before = before_head;
    ListNode* after = after_head;

    while (head != nullptr) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }

    after->next = nullptr;          // Important: end the after list
    before->next = after_head->next; // Join the two lists

    return before_head->next;
    }
};