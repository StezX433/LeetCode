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
    void orderLevel(TreeNode* root , vector<vector<int>>& ans){
        if (root == nullptr) {
            return;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int sq = q.size();

            vector<int> level;

            for (int i = 0; i < sq; i++) {

                TreeNode* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                if (curr->left != nullptr) {
                    q.push(curr->left);
                }

                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
            }

            ans.push_back(level);
        }
    }


    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        orderLevel(root,ans);
        return ans;
    }
};