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
//An optimal solution to this problem can be achieved with the help of a new pointer as discussed below :
class Solution
{
public:
    TreeNode *prev;
    int count = 0;
    int max_count = 0;
    vector<int> final;
    void mode(TreeNode *root)
    {
        if (root == NULL)
            return;
        mode(root->left);
        if (prev == NULL)
            count = 1;
        else if (root->val == prev->val)
            count++;
        else
            count = 1;

        if (count == max_count)
            final.push_back(root->val);
        else if (count > max_count)
        {
            max_count = count;
            final.clear();//inbuilt function which is used to clear the array elements
            final.push_back(root->val);
        }

        prev = root;
        mode(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        final.clear();
        mode(root);
        return final;
    }
};