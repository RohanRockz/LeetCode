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
    int sum=INT_MIN;
    int calc(TreeNode* root){
        if(!root){
            return 0;
        }
        int l=max(calc(root->left),0);
        int r=max(calc(root->right),0);
        sum=max(sum,root->val+l+r); 
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        calc(root);
        return sum;
    }
};