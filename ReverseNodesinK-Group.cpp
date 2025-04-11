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
        ListNode* reverseKGroup(ListNode* head, int k) {
            if(!head || k==1)return head;
    
            ListNode temp(0);
            temp.next=head;
            ListNode* prev=&temp;
            while(true)
            {
                ListNode* kth = getkth(prev,k);
                if(!kth)break;
                ListNode* next=kth->next;
                ListNode* prev2=next;
                ListNode* cur=prev->next;
                while(cur!=next)
                {
                    ListNode* temp2=cur->next;
                    cur->next=prev2;
                    prev2=cur;
                    cur=temp2;
                }
                ListNode* temp2= prev->next;
                prev->next=kth;
                prev=temp2;
            }
                return temp.next;
            }
            private:
            ListNode* getkth(ListNode* cur, int k)
            {
               while(cur && k>0)
               {
                cur=cur->next;
                k--;
               } 
               return cur;
            
            
        }
    };