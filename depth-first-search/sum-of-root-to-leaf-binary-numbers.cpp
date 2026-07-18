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

    int binaryTodecimal(string& x) {
        int power = 0;
        int a = 0;
        int ab = 0;
        for (int i = x.length() - 1; i >= 0; i--) {
            if (x[i] == '1') {
                ab = 1;
            } else {
                ab = 0;
            }
            a += ab * 1 << power;
            power++;
        }
        return a;
    }
    void solve(TreeNode* root, string& x) {
        if (root == nullptr) {
            return;
        }
        x += root->val == 1 ? '1' : '0';
        if (root->left == nullptr && root->right == nullptr) {
            ans += binaryTodecimal(x);
        }

        if (root->left != nullptr) {
            solve(root->left, x);
        }
        if (root->right != nullptr) {
            solve(root->right, x);
        }

        x.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        string x = "";
        solve(root, x);
        return ans;
    }
};