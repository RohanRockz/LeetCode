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
     vector<vector<int>>a;
    vector<vector<int>> levelOrder(TreeNode* root) {
        Level(root);
        return a;
    }
    void Level(TreeNode* root){
        if(root==NULL){
            return;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int count=q.size();
            vector<int>temp;
            for(int i=0;i<count;i++){
                TreeNode* curr=q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                    
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            a.push_back(temp);
        }
    }
        
    
};