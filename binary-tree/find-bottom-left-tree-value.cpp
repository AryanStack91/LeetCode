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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        int ans = root->val;

        while (!qu.empty()) {
            int n = qu.size();
            for (int i = 0; i < n; i++) {
                TreeNode* front = qu.front();
                qu.pop();
                if (i == 0) {
                    ans = front->val;
                }
                if (front->left != nullptr) {
                    qu.push(front->left);
                }
                if (front->right != nullptr) {
                    qu.push(front->right);
                }
            }
         }
        return ans;
    }
};