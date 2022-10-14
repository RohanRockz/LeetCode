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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(!head)
            return NULL;
        if(!head->next)
        {
            delete(head);
            return NULL;
        }
        ListNode* slow=head->next, *fast=head->next;
        while(fast->next && fast->next->next)
            slow=slow->next,fast=fast->next->next;
        if(!slow->next)
            delete(slow),head->next=NULL;
        else
            *slow=*slow->next;
        return head;
    }
};