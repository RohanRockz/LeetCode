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
    unordered_map<int, int> mp;
    
    TreeNode* f(vector<int>& in, vector<int>& po, int initial, int finale, int &last)
    {
        if(initial > finale)
            return NULL;
        
        TreeNode* root = new TreeNode(po[last--]);
        int k = mp[root->val];
        root->right = f(in, po, k+1, finale, last);
        root->left = f(in, po, initial, k-1, last);
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n = inorder.size();
        
        if(n==1)
            return new TreeNode(postorder[0]);
        
        for(int i = 0; i<n; i++)
            mp[inorder[i]] = i;
        int k = n-1;
        return f(inorder, postorder, 0, n-1, k);
        
    }
};