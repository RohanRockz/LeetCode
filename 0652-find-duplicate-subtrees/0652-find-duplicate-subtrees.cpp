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
        vector<TreeNode*> ans;
      unordered_map<string, int>mymap;
  string helper(TreeNode* root)
    {
        if(root == NULL) return "";
        
        string l= helper(root->left);
        string r= helper(root->right);
        string s = "(" + l + to_string(root->val) + r + ")"; 
        if(mymap[s]!=-1) mymap[s]++;
      
      if(mymap[s]>1) 
      {
          ans.push_back(root);
          mymap[s]=-1; 
      }
      return s; 
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      helper(root);
        return ans;
    }
};