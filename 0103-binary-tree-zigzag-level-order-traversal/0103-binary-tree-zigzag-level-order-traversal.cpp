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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>a;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        Level(root);
        return a;
        }
    
     void Level(TreeNode* root){
        if(root==NULL){
            return;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool r=false;
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
            int n=temp.size()-1;
            if(r==false){
            a.push_back(temp);
        }
            else{
              for(int i=0;i<=n/2;i++){
                  int t=temp[i];
                  temp[i]=temp[n-i];
                  temp[n-i]=t;
              }
                a.push_back(temp);
            }
           r=!r;
            
        }
     }
    
};