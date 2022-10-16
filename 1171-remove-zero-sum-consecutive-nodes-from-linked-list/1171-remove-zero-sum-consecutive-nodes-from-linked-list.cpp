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
//Use of Linked List in for loop.
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* d=new ListNode(0);
        d->next=head;
        for(ListNode* i=d;i!=NULL;i=i->next ){
            int sum=0;
            for(ListNode* j=i->next;j!=NULL;){
                sum+=j->val;
                if(sum==0){
                    i->next=j->next;
                }
                j=j->next;
            }
        }
        return d->next;
    }
};