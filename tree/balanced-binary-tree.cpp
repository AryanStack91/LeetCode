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
    int xyz(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int lh = xyz(root->left);
        int rh = xyz(root->right);

        if (abs(rh - lh) > 1) {
            return -1;
        }
        if (lh == -1 || rh == -1)
            return -1;
        else
            return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) { return xyz(root) != -1; }
};