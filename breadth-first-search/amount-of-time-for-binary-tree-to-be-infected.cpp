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
    TreeNode* nodetoparent(map<TreeNode*, TreeNode*>& nodeToParent,
                           TreeNode* root, int start) {

        TreeNode* result = nullptr;
        nodeToParent[root] = nullptr;
        queue<TreeNode*> qu;

        qu.push(root);
        while (!qu.empty()) {

            TreeNode* front = qu.front();
            qu.pop();

            if (front->val == start) {
                result = front;
            }

            if (front->left) {
                nodeToParent[front->left] = front;
                qu.push(front->left);
            }
            if (front->right) {
                nodeToParent[front->right] = front;
                qu.push(front->right);
            }
        }
        return result;
    }

    int totaltime(TreeNode* root, map<TreeNode*, TreeNode*>& nodeToParent) {
        map<TreeNode*, bool> visited;
        queue<TreeNode*> qu;
        int ans = 0;
        qu.push(root);
        visited[root] = true;

        while (!qu.empty()) {

            bool flag = 0;

            int n = qu.size();

            for (int i = 0; i < n; i++) {
                TreeNode* front = qu.front();
                qu.pop();

                if (front->left && !visited[front->left]) {
                    flag = 1;
                    qu.push(front->left);
                    visited[front->left] = 1;
                }
                if (front->right && !visited[front->right]) {
                    flag = 1;
                    qu.push(front->right);
                    visited[front->right] = 1;
                }
                if (nodeToParent[front] && !visited[nodeToParent[front]]) {
                    flag = 1;
                    qu.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                }
            }
            if (flag == 1) {
                ans++;
            }
        }
        return ans;
    }

    int amountOfTime(TreeNode* root, int start) {

        map<TreeNode*, TreeNode*> nodeToParent;

        TreeNode* target = nodetoparent(nodeToParent, root, start);

        int ans = totaltime(target, nodeToParent);

        return ans;
    }
};