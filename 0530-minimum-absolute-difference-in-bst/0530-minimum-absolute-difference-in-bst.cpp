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
    int diff=INT_MAX;
    int v=-1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left!=NULL){
            getMinimumDifference(root->left);
        }
        if(v>=0)
            diff=min(diff,abs(root->val-v));
        v=root->val;
        if(root->right!=NULL){
            getMinimumDifference(root->right);
        }
        return diff;
        }
};