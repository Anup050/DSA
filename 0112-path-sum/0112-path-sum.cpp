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
    void helper(TreeNode* root, int targetSum, bool &flag){
        if(!root) return;
        if(root->val == targetSum && (!root->left && !root->right)){
            flag = true;
            return;
        }
        int f = root->val;
        helper(root->left, targetSum-f, flag);
        helper(root->right, targetSum-f, flag);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag = false;
        if(!root) return flag;
        helper(root, targetSum, flag);
        return flag;
    }
};