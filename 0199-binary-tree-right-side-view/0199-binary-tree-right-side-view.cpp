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
    int maxLevel=0;
    vector<int>a;
    void printright(TreeNode *root,int level){
        if(root==NULL){
            return;
        }
        if(maxLevel<level){
            a.push_back(root->val);
            maxLevel=level;
        }
        printright(root->right,level+1);
        printright(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
       printright(root,1);
        return a;
    }
};