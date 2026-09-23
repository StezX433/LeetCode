class Solution {
public:
    int ans = 0;

    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        // Diameter passing through this node
        ans = max(ans, left + right);

        // Return height to parent
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};