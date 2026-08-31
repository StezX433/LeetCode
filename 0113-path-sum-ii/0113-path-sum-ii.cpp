class Solution {
public:
    void solve(TreeNode* root, int targetSum,
               vector<int>& path,
               vector<vector<int>>& ans) {

        if (root == nullptr) {
            return;
        }

        // Add current node
        path.push_back(root->val);

        // Check if current node is a leaf
        if (root->left == nullptr && root->right == nullptr) {

            if (targetSum == root->val) {
                ans.push_back(path);
            }

            path.pop_back();
            return;
        }

        // Go left
        solve(root->left, targetSum - root->val, path, ans);

        // Go right
        solve(root->right, targetSum - root->val, path, ans);

        // Backtrack
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> path;

        solve(root, targetSum, path, ans);

        return ans;
    }
};