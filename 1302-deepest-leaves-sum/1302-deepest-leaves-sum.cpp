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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return(1+max(height(root->left),height(root->right)));
    }
    int sum=0;
    int sumtoK(TreeNode* root,int k){
        if(!root){
            return sum;
        }
        if(k==0){
            sum+=root->val;
        }
        sumtoK(root->right,k-1);
        sumtoK(root->left,k-1);
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
        int he=height(root);
        sum=sumtoK(root,he-1);
        return sum;
    }
};