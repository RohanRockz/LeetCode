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
    unordered_map<int,int>a;
    int m=0;
    vector<int> findMode(TreeNode* root) {
        vector<int>final;
        mode(root);
        for(auto &x:a){
            if(x.second>=m){
                final.push_back(x.first);
            }
        }
        return final;

    }
    void mode(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(a[root->val]==0){
            a[root->val]=1;
        }
        else
            a[root->val]++;
        m=max(m,a[root->val]);
        mode(root->right);
        mode(root->left);
    }
};