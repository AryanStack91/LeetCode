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
    void inorder(TreeNode* root, unordered_map<int, int>& mp) {
        if (!root) {
            return;
        }
        inorder(root->left, mp);
        mp[root->val]++;
        inorder(root->right, mp);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mp;
        inorder(root, mp);
        int max_occ = -1;
        for (auto& v : mp) {
            max_occ = max(max_occ, v.second);
        }
        vector<int> ans;
        for (auto& v : mp) {
            if (v.second == max_occ) {
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};