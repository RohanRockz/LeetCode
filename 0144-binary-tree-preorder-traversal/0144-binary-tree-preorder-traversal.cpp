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
    vector<int>a;//global array
    vector<int> preorderTraversal(TreeNode* root) {
        create(root);
        return a;
    }
    void create(TreeNode* root){
        if(!root){
            return;
        }
        a.push_back(root->val);
        create(root->left);
        create(root->right);
    }
};