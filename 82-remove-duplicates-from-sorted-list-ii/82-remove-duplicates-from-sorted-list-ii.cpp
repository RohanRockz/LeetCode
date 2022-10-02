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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* fast=new ListNode(0,head);
        ListNode* slow=fast;
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
                while(head->next!=NULL && head->val==head->next->val){
                    head=head->next;
                }
                slow->next=head->next;
            }
            else{
                slow=slow->next;
            }
            head=head->next;
        }
        return fast->next;
    
        
    
    }
};