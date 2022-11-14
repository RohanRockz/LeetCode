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
    void large(TreeNode* root,int level,vector<int>&a){
        if(!root){
            return;
        }
        if(level>=a.size()){
            a.push_back(root->val);
        }
        else{
            a[level]=max(a[level],root->val);
        }
        large(root->left,level+1,a);
        large(root->right,level+1,a);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>a;
        large(root,0,a);
        return a;
    }
};