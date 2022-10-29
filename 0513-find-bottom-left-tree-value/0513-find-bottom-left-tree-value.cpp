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
//Nice approach to keep calculating maxdepth and keep comparing with depth.
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
         int maxdepth=0;
        int left=0;
        bottom(root,maxdepth,left,1);
        return left;
        
    }
    void bottom(TreeNode* root,int &maxdepth,int &left,int depth){
        if(root==NULL){
            return;
        }
        bottom(root->left,maxdepth,left,depth+1);
        bottom(root->right,maxdepth,left,depth+1);
        if(depth>maxdepth){
            maxdepth=depth;
            left=root->val;
        }
    }
};