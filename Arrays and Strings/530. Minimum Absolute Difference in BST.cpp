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
    vector<int> values;
    vector<int> diff;
    int d;

    void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        inorder(root->left);
        values.push_back(root->val);
        inorder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        if (root->left == NULL && root->right == NULL) {
            return root->val;
        }
        inorder(root);
        sort(values.begin(), values.end());
        for (int i = 0; i < values.size() - 1; i++) {
            d = abs(values[i] - values[i+1]);
            diff.push_back(d);
        }
        return *min_element(diff.begin(), diff.end());
    }
};
