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
    map<pair<int, int>, vector<TreeNode*>> dp;
    
    vector<TreeNode*> bst(int start, int end)
    {
        vector<TreeNode*> ans;
        
        if(start > end)
        {
            ans.push_back(NULL);
            return ans;
        }
        
        if(dp.find({start, end}) != dp.end())
            return dp[{start, end}];
        
        for(int i = start; i <= end; i++)
        {
            vector<TreeNode*> left = bst(start, i-1);
            vector<TreeNode*> right = bst(i+1, end);
            
            for(auto & l : left)
            {
                for(auto & r : right)
                {
                    TreeNode* t = new TreeNode(i);
                    
                    t->left = l;
                    t->right = r;
                    
                    ans.push_back(t);
                }
            }
        }
        
        return dp[{start, end}] = ans;
    }
public:
    vector<TreeNode*> generateTrees(int n) 
    {
        return bst(1, n);
    }
};