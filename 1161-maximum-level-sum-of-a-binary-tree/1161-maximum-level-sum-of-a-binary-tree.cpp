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
    int maxLevelSum(TreeNode* root) {
        search(root, 1);

        int bestLevel = 1;
        for (const auto &p : sums) {
            if (p.second > sums[bestLevel]) {
                bestLevel = p.first;
            }
        }
        return bestLevel;
    }
private:
    void search(TreeNode* root, const int level) {
        if (!root) {
            return;
        }

        sums[level] += root->val;
        search(root->left , level+1);
        search(root->right, level+1);
    }

    map<int, int> sums; 
};