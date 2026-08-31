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
    int calHeight(TreeNode* root , int& maxD){
        if (!root){
            return 0;
        }

        int left = calHeight(root->left,maxD);
        int right = calHeight(root->right,maxD);

        maxD=max(maxD,left+right);
        return 1+ max(left,right);;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxD = 0;
        calHeight(root,maxD);
        return maxD;
    }
};