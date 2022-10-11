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
    vector<int>answer;
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        while(head){
            int a=head->val;
            temp=head->next;
            while(temp){
                if(temp->val>a){
                    answer.push_back(temp->val);
                    break;
                }
                temp=temp->next;
            }
            if(temp==NULL){
            answer.push_back(0);
            }
            head=head->next;
        }
        return answer;
   
    }
};