/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//Solved using Depth-First Search 
class Solution {
public:
    int sumNumbers(TreeNode* root) {
       return sum(root,0);
      } 
    int sum(TreeNode* root,int cur){
        if(!root){
            return 0;
        }
        cur=cur*10+root->val;
        if(!root->right&& !root->left){
            return cur;
        }
        return sum(root->right,cur)+sum(root->left,cur);
    }
        
    
};