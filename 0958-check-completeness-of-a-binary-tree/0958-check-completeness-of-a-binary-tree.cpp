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
    bool isCompleteTree(TreeNode* root) {
         queue<TreeNode*> Q;
        Q.push(root);
        bool f = false;
        
        while(!Q.empty())
        {
            TreeNode *t = Q.front();
            Q.pop();
            
            if(!t)
                f = true;
            else
            {
                if(f)
                    return false;
                Q.push(t->left);
                Q.push(t->right);
            }
        }
        
        return true;
        
    }
};