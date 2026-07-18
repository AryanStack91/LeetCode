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
    int ans = 0;
    void solve(TreeNode* root, int& a) {
        if (root == nullptr) {
            return;
        }
        a = root->val + a * 10;

        if (root->left == nullptr && root->right == nullptr) {
            ans += a;
        }

        if (root->left != nullptr) {
            solve(root->left, a);
        }

        if (root->right != nullptr) {
            solve(root->right, a);
        }
        a /= 10;
    }
    int sumNumbers(TreeNode* root) {
        int a = 0;
        solve(root, a);

        return ans;
    }
};