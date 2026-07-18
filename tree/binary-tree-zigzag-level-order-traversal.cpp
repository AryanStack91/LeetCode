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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode*> qu;

        qu.push(root);
        bool flag = true;
        while (!qu.empty()) {
            vector<int> a;
            int n = qu.size();

            for (int i = 0; i < n; i++) {
                TreeNode* node = qu.front();
                qu.pop();

                if (node->left != nullptr)
                    qu.push(node->left);

                if (node->right != nullptr)
                    qu.push(node->right);
                a.push_back(node->val);
            }
            if (flag == true) {

                ans.push_back(a);
                flag = false;
            } else {
                reverse(a.begin(), a.end());
                ans.push_back(a);
                flag = true;
            }
        }

        return ans;
    }
};