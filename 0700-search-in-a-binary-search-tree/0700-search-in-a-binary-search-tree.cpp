/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int target) {
        if (root == nullptr)
            return nullptr;

        if (root->val == target)
            return root;

        TreeNode* left = searchBST(root->left, target);

        if (left != nullptr)
            return left;

        return searchBST(root->right, target);
    }
};