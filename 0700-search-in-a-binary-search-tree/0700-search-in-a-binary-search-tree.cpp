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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root){
            return root;
        }
        TreeNode* res=new TreeNode();
        if(val<root->val){
            res=searchBST(root->left,val);
        }
        else if(val>root->val){
            res=searchBST(root->right,val);
        }
        else{
            res=root;
        }
        return res;
    }
};