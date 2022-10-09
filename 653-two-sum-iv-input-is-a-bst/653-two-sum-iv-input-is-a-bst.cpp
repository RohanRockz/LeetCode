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
//Learnt this method of traversal and checking for a binary search tree through which tree gets converted to increasing array via inroder transversal.
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&n){
        if(root==NULL){
            return;
        }
        inorder(root->left,n);
        n.push_back(root->val);
        inorder(root->right,n);
    }
    bool sorted(vector<int>s,int target){
        for(int i=0,j=s.size()-1;i<j;){
            int sum=s[i]+s[j];
            if(sum==target)
                return true;
            else if(sum<target){
                i++;
            }
            else
                j--;
        }
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
            vector<int>n;
            inorder(root,n);
           return sorted(n,k);
    }
};