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
    void helper(TreeNode* root, long targetSum, int &count){
        if(!root) return;
        if(root->val == targetSum){
            count++;
        }
        long f = root->val;
        helper(root->left, targetSum-f, count);
        helper(root->right, targetSum-f, count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        int count = 0; 
        helper(root, (long)targetSum, count);
        count += pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
        return count;
    }
};