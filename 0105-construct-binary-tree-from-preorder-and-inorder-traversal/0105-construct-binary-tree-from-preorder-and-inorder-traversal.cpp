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
    TreeNode* create(vector<int>& preorder,vector<int>& inorder,int &curr,int first,int last){
        if(first>last){
            return NULL;
        }
        int pivot=first;
        while(inorder[pivot]!=preorder[curr]){
            pivot++;
        }
        curr++;
        TreeNode* newNode=new TreeNode(inorder[pivot]);
        newNode->left=create(preorder,inorder,curr,first,pivot-1);
        newNode->right=create(preorder,inorder,curr,pivot+1,last);
        return newNode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int curr=0;
         return create(preorder,inorder,curr,0,inorder.size()-1);
        
    }
};