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
    bool parent(TreeNode* root, int x, int y) {
        if (root == nullptr)
            return 0;
        if (root->left && root->right) {
            if (root->left->val == x && root->right->val == y)
                return 1;

            if (root->left->val == y && root->right->val == x)
                return 1;
        }
        return parent(root->left, x, y) || parent(root->right, x, y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root)
            return 0;

        queue<TreeNode*> qu;
        qu.push(root);
        int l = -1, r = -1, level = 0;

        while (!qu.empty()) {
            int n = qu.size();

            for (int i = 0; i < n; i++) {
                TreeNode* temp = qu.front();
                qu.pop();

                if (temp->val == x)
                    l = level;

                if (temp->val == y)
                    r = level;

                if (temp->left)
                    qu.push(temp->left);

                if (temp->right)
                    qu.push(temp->right);
            }

            if (l != r)
                return 0;

            if (l != -1 && r != -1)
                break;

            level++;
        }

        return !parent(root, x, y);
    }
};