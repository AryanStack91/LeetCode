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
    void cal_paths(TreeNode* root, int tgt, vector<int>& ans, int& result) {
        if (root == NULL) {
            return;
        }
        ans.push_back(root->val);

        cal_paths(root->left, tgt, ans, result);
        cal_paths(root->right, tgt, ans, result);
        int n = ans.size();
        long long sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += ans[i];
            if (sum == tgt) {
                result++;
            }
        }
        ans.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        int result = 0;
        cal_paths(root, targetSum, ans, result);
        return result;
    }
};