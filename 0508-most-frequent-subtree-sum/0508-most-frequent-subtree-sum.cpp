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
    int calc_sum(TreeNode* root){
        if(!root){
            return 0;
        }
        return root->val+calc_sum(root->right)+calc_sum(root->left);
    }
    void preOrder(TreeNode* root,unordered_map<int,int>&sum,int &maxf){
        if(!root){
            return;
        }
        int total=calc_sum(root);
        sum[total]++;
        maxf=max(maxf,sum[total]);
        preOrder(root->left,sum,maxf);
        preOrder(root->right,sum,maxf);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>sum;
        int maxf=0;
        preOrder(root,sum,maxf);
        vector<int>result;
        for(auto& i:sum){
            if(i.second==maxf){
                result.push_back(i.first);
            }
        }
        return result;
    }
};