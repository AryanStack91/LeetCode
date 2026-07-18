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
    int answer = 0;
    void inorder(vector<int>& ans, TreeNode* root, int k) {
        if (root == nullptr) {
            return;
        }

        inorder(ans, root->left, k);
        ans.push_back(root->val);
        if (ans.size() == k) {
            answer = root->val;
            return;
        }
        inorder(ans, root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(ans, root, k);
        return answer;
    }
};