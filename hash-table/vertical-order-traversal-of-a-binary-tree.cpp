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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;

        map<int, map<int, vector<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> qu;

        if (root == nullptr)
            return ans;
        qu.push(make_pair(root, make_pair(0, 0)));

        while (!qu.empty()) {

            auto temp = qu.front();
            qu.pop();

            TreeNode* front_node = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            mp[hd][level].push_back(front_node->val);

            if (front_node->left) {
                qu.push(
                    make_pair(front_node->left, make_pair(hd - 1, level + 1)));
            }
            if (front_node->right) {
                qu.push(
                    make_pair(front_node->right, make_pair(hd + 1, level + 1)));
            }
        }

        for (auto& i : mp) {
            vector<int> a;

            for (auto& j : i.second) {
                sort(j.second.begin(), j.second.end());
                for (int k : j.second) {
                    a.push_back(k);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};