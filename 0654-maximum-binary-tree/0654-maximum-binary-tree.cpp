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
    TreeNode* maxi(vector<int>& nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int maxm=left;
        for(int i=left;i<=right;i++){
            if(nums[i]>nums[maxm]){
                maxm=i;
            }
        }
        TreeNode* newNode=new TreeNode(nums[maxm]);
        newNode->left=maxi(nums,left,maxm-1);
        newNode->right=maxi(nums,maxm+1,right);
        return newNode;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxi(nums,0,nums.size()-1);
    }
};