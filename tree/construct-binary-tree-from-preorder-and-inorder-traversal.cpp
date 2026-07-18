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
    int inorder_pos(vector<int>& in, int ele) {
        for (int i = 0; i < in.size(); i++) {
            if (in[i] == ele) {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>& pre, vector<int>& in, int& index,
                    int inorder_start, int inorder_end) {
        int n = pre.size();
        if (index >= n || inorder_end < inorder_start) {
            return nullptr;
        }
        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        int pos = inorder_pos(in, element);

        root->left = solve(pre, in, index, inorder_start, pos - 1);
        root->right = solve(pre, in, index, pos + 1, inorder_end);

        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        int preorder_index = 0;
        TreeNode* ans = solve(pre, in, preorder_index, 0, n - 1);
        return ans;
    }
};