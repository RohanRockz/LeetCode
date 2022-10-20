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
    vector<double>avg;
    vector<double> averageOfLevels(TreeNode* root) {
        convert(root);
        return avg;
    }
    void convert(TreeNode* root){
        if(!root){
            return;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            double count=q.size();
            double a=0.00;
            double sum=0.00;
            for(int i=0;i<count;i++){
                TreeNode* temp=q.front();
                sum=sum+temp->val;
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            a=sum/count;
            avg.push_back(a);
        }
    }
};