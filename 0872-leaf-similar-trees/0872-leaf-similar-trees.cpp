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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a1;
        vector<int>a2;
        leaf(root1,a1);
        leaf(root2,a2);
        return a1==a2;
    }
    void leaf(TreeNode* root,vector<int>&a){
        if(root==NULL){
            return;
        }
        if((root->right==NULL)&&(root->left==NULL)){
            a.push_back(root->val);
        }
        leaf(root->left,a);
        leaf(root->right,a);
    }
};