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
//An implication of two-pointer approach
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head,*q=head,*kth=NULL;
        while(--k!=0){
            p=p->next;
        }
        kth=p;
        p=p->next;
        while(p){
            p=p->next;
            q=q->next;
        }
        swap(q->val,kth->val);
        return head;
    }
};