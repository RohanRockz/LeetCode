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
//Use of preorder traversal and hashset using unordered map.
class Solution {
public:
    int calc_sum(TreeNode* root,unordered_map<int,int>&count,int &maxf){
        if(root==NULL){
            return 0;
        }
        int sum=root->val;
        sum+=calc_sum(root->left,count,maxf);
        sum+=calc_sum(root->right,count,maxf);
        count[sum]++;
        maxf=max(maxf,count[sum]);
        return sum;
        }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>count;
        int maxf=0;
        calc_sum(root,count,maxf);
        vector<int>result;
        for(auto& i:count){
            if(i.second==maxf){
                result.push_back(i.first);
            }
        }
        return result;
    }
};