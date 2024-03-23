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
    bool isPalindrome(ListNode* head) {
      if(head==NULL){
          return true;
      }
      ListNode* slow=head;
      ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow->next);
        ListNode*curr=head;
        while(rev!=NULL){
            if(rev->val!=curr->val){
                return false;
            }
            rev=rev->next;
            curr=curr->next;
        }
        return true;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL){
            ListNode* nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }
};