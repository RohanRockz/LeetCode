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
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(depth(root->right),depth(root->left));
    }
    int widthOfBinaryTree(TreeNode* root) {
         queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        int l, maxl = 0;
        
        while(!q.empty())
        {  
            int i;
            int start = q.front().second;
            int first, last;

            int lz = q.size();

            for(i = 0; i < lz; i++)
            {
                pair<TreeNode*, int> p = q.front();
                
                int idx = q.front().second - start;
                q.pop();
                
                if(!i) 
                    first = idx;
                if(i == lz - 1) 
                    last = idx;
                
                if(p.first->left)
                    q.push({p.first->left, (long long) idx*2 + 1});
                
                if(p.first->right)
                    q.push({p.first->right, (long long) idx*2 + 2});
            }
            
            l = last - first + 1;
            
            if(l > maxl)
                maxl = l;
            
        }
        
        return maxl;
    
        
    }
};