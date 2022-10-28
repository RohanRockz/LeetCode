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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        if(!root)
            return result;
        path(result,root,to_string(root->val));
        return result;
    }
    void path(vector<string>&result,TreeNode* root,string t){
        if(!root->left && !root->right){
            result.push_back(t);
            return;
        }
        if(root->left){
            path(result,root->left,t+"->"+to_string(root->left->val));
        }
        if(root->right){
            path(result,root->right,t+"->"+to_string(root->right->val));
        }
    }
    
};