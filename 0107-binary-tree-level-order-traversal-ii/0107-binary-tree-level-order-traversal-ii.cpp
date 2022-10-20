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
//The better way to solve the problem with minimum runtime complexity is to calculate depth of the tree and then implement depth in the traversal.This is the best optimal solution.
class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        else
            return 1+max(depth(root->right),depth(root->left));
    }
    void Level(vector<vector<int>>&a,TreeNode* root,int level){
        if(!root){
            return;
        }
        a[level].push_back(root->val);
        Level(a,root->left,level-1);
        Level(a,root->right,level-1);
    }
    
   
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d=depth(root);
        vector<vector<int>>a(d,vector<int>{});
        Level(a,root,d-1);
        return a;
    }
    
};