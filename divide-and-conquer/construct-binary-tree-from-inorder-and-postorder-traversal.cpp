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
    int find_pos(vector<int>& in, int ele) {
        for (int i = 0; i < in.size(); i++) {
            if (in[i] == ele) {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>& in, vector<int>& post, int& index,
                    int in_start, int in_end) {
        if (index < 0 || in_start > in_end) {
            return nullptr;
        }

        int ele = post[index--];
        TreeNode* root = new TreeNode(ele);
        int pos = find_pos(in, ele);
        root->right = solve(in, post, index, pos + 1, in_end);

        root->left = solve(in, post, index, in_start, pos - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int post_index = post.size() - 1;
        TreeNode* ans = solve(in, post, post_index, 0, in.size() - 1);
        return ans;
    }
};