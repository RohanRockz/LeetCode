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
    int totalTilt=0;
    int findTilt(TreeNode* root) {
        totalTilt=0;
        sum(root);
        return totalTilt;
    }
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=sum(root->left);
        int right=sum(root->right);
        int tilt=abs(left-right);
        totalTilt+=tilt;
        return root->val+left+right;
    }
};