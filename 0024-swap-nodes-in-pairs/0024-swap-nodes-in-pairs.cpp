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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* current=temp;
        while(current->next!=NULL && current->next->next !=NULL){
            ListNode* first_node=current->next;
            ListNode* second_node=current->next->next;
            first_node->next=second_node->next;
            current->next=second_node;
            current->next->next=first_node;
            current=current->next->next;
            
        }
        return temp->next;
        
        
        
    }
};