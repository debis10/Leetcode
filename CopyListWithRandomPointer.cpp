/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    public:
        Node* copyRandomList(Node* head) {
            if(!head)
            {
                return NULL;
            }
            Node* cur=head;
            while(cur)
            {
                Node* newNode=new Node(cur->val);
                newNode->next=cur->next;
                cur->next=newNode;
                cur=newNode->next;
            }
            cur=head;
            while(cur)
            {
                if(cur->random)
                {
                    cur->next->random=cur->random->next;
                }
                cur=cur->next->next;
            }
            cur=head;
            Node* newHead=head->next;
            while(cur)
            {
                Node* clone=cur->next;
                cur->next=clone->next;
                if(clone->next)
                {
                    clone->next=clone->next->next;
                }
                cur=cur->next;
            }
            return newHead;
        }
    };