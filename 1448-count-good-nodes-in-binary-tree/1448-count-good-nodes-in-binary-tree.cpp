class Solution {
public:
    int dfs(TreeNode* root, int maxVal) {
        if (root == nullptr) {
            return 0;
        }

        int good = 0;

        if (root->val >= maxVal) {
            good = 1;
        }

        maxVal = max(maxVal, root->val);

        good += dfs(root->left, maxVal);
        good += dfs(root->right, maxVal);

        return good;
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};