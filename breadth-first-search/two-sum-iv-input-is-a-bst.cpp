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
    void inorder(vector<int>& ans, TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inorder(ans, root->left);
        ans.push_back(root->val);
        inorder(ans, root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(ans, root);

        int left = 0;
        int right = ans.size() - 1;

        while (left < right) {
            int sum = ans[left] + ans[right];

            if (sum == k) {
                return true;
            } else if (sum > k) {
                right--;
            } else {
                left++;
            }
        }
        return false;
    }
};