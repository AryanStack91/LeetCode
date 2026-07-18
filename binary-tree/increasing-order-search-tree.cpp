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
    void inorder(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }

        inorder(root->left, arr);

        arr.push_back(root->val);

        inorder(root->right, arr);

        return;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        TreeNode* temp = new TreeNode(arr[0]);
        TreeNode* temp1 = temp;

        for (int i = 1; i < arr.size(); i++) {
            temp->left = nullptr;
            temp->right = new TreeNode(arr[i]);
            temp = temp->right;
        }
        return temp1;
    }
};