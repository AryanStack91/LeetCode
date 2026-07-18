/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool inorder(TreeNode* root, int val, int tgt) {
        if (root == nullptr) {
            return 0;
        }

        if (root->left == nullptr && root->right == nullptr) {
            if (val + root->val == tgt) {
                return true;
            }
        }

        return inorder(root->left, root->val + val, tgt) ||
               inorder(root->right, root->val + val, tgt);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return inorder(root, 0, targetSum);
    }
};