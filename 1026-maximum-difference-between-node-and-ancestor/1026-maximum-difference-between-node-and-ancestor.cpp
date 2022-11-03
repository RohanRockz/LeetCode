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
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return record(root,INT_MAX,0);
        
    }
    int record(TreeNode* root,int mn=INT_MAX,int mx=INT_MIN){
        if(root==NULL){
            return mx-mn;
        }
        mx=max(mx,root->val);
        mn=min(mn,root->val);
        return max(record(root->right,mn,mx),record(root->left,mn,mx));
    }
};