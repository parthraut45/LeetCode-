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
    int dfs(TreeNode* root , bool isLeft){
      int sum = 0;
      if(root == nullptr) return 0;
      if(!root->left && !root->right){
          return isLeft? root->val:0;
      }
      int lsum = dfs(root->left , true);
      int rsum = dfs(root->right , false);
      return lsum+rsum;
    }
    int sumOfLeftLeaves(TreeNode* root) { 
        return dfs(root , false);
        
    }
};