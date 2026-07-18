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
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double> ans;

        queue<TreeNode*> qu;
        qu.push(root);

        while (!qu.empty()) {

            int n = qu.size();
            double sum = 0;

            for (int i = 0; i < n; i++) {

                TreeNode* front = qu.front();
                qu.pop();

                sum += front->val;

                if (front->left) {
                    qu.push(front->left);
                }

                if (front->right) {
                    qu.push(front->right);
                }
            }

            ans.push_back(sum / n);
        }

        return ans;
    }
};