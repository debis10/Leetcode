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
        ListNode* reverseBetween(ListNode* head, int left, int right) {
            if(!head || left==right)
            {
                return head;
            }
            ListNode temp(0);
            temp.next=head;
            ListNode* prev=&temp;
            for(int i=1;i<left;i++)
            {
                prev=prev->next;
            }
            ListNode* cur=prev->next;
            ListNode* next=NULL;
            for(int i=0;i<right-left;i++)
            {
                next=cur->next;
                cur->next=next->next;
                next->next=prev->next;
                prev->next=next;
            }
            return temp.next;
        }
    };