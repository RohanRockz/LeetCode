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
    vector<int>a;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        insert(root1);
        insert(root2);
        sort(a.begin(),a.end());
        return a;
    }
    void insert(TreeNode* root){
        if(!root){
            return;
        }
        a.push_back(root->val);
        insert(root->right);
        insert(root->left);
    }
};