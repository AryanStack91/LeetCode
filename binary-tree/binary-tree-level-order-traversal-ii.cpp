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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;

        queue<TreeNode*> qu;
        if (root == nullptr) {
            return ans;
        }

        qu.push(root);

        while (!qu.empty()) {
            int n = qu.size();
            vector<int> a;

            for (int i = 0; i < n; i++) {
                TreeNode* node = qu.front();
                qu.pop();
                a.push_back(node->val);

                if (node->left != nullptr)
                    qu.push(node->left);
                if (node->right != nullptr)
                    qu.push(node->right);
            }
            ans.push_back(a);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};