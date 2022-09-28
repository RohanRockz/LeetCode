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
//an efficient solution learnt from discussion without using third pointer.
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* slow = head;
        ListNode* fast = slow->next;
        
        if(fast==nullptr)
            return nullptr;
        
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        
        return head;
    }
};