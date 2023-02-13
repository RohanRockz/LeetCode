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
class Solution {
public:
    int c=0;
    void find(TreeNode* root,int maxi){
        if(!root){
            return;
        }
        if(root->val>=maxi){
            c++;
            maxi=root->val;
        }
        find(root->left,maxi);
        find(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        find(root,root->val);
        return c;
    }
};