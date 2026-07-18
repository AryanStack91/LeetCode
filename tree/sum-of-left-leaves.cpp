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
    int sumOfLeftLeaves(TreeNode* root) {

        if (root->left == nullptr && root->right == nullptr) {
            return 0;
        }
        int ans = 0;
        queue<pair<TreeNode*, bool>> qu;
        qu.push(make_pair(root, false));

        while (!qu.empty()) {

            int n = qu.size();
            for (int i = 0; i < n; i++) {

                auto front = qu.front();
                qu.pop();
                TreeNode* node = front.first;
                bool left = front.second;

                if (left == true && node->left == nullptr &&
                    node->right == nullptr) {
                    ans += node->val;
                }

                if (node->left != nullptr) {
                    qu.push(make_pair(node->left, true));
                }

                if (node->right != nullptr) {
                    qu.push(make_pair(node->right, false));
                }
            }
        }
        return ans;
    }
};