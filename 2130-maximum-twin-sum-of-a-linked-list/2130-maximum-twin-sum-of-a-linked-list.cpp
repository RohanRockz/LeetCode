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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int maxi=0;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *nextNode,*prev=NULL;
        while(slow){
            nextNode=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextNode;
        }
        while(prev!=NULL){
            maxi=max(maxi,head->val+prev->val);
            prev=prev->next;
            head=head->next;
        }
        
        return maxi;
    }
};