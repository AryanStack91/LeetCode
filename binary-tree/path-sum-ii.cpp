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
    void pathSum(TreeNode* root, int tgt, int& sum, vector<vector<int>>& ans,
                 vector<int>& a) {

        if (root == nullptr) {
            return;
        }

        sum += root->val;
        a.push_back(root->val);

        if (root->left == nullptr && root->right == nullptr) {
            if (sum == tgt) {
                ans.push_back(a);
            }
        }

        pathSum(root->left, tgt, sum, ans, a);
        pathSum(root->right, tgt, sum, ans, a);
        sum -= a[a.size() - 1];
        a.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> a;
        int sum = 0;
        pathSum(root, targetSum, sum, ans, a);
        return ans;
    }
};